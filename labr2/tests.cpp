#include <gtest/gtest.h>
#include <thread>
#include <Poco/Net/SocketAddress.h>
#include <Poco/Net/StreamSocket.h>
#include <Poco/Net/SocketStream.h>
#include <Poco/Net/DatagramSocket.h>
#include <Poco/StreamCopier.h>

#include "database/database.h"
#include "database/person.h"
#include "config/config.h"

bool isIinited = false;

void setDatabase() {
    if (isIinited) return;

    Config::get().host() = "127.0.0.1";
    Config::get().port() = "6033";
    Config::get().database() = "sql_test";
    Config::get().login() = "test";
    Config::get().password() = "pzjqUkMnc7vfNHET";
    
    isIinited = true;
}

TEST(check_person_login, person_table_set) {
    database::Person person;
    person.login() = "Theodor";
    EXPECT_EQ("Theodor", person.get_login()) << "логины должны совпадать";
}

TEST(create_new_person, person_creation_set) {

    setDatabase();

    database::Person person;
    person.first_name() = "Andrew";
    person.last_name()  = "Radchenko";
    person.login()      = "Radik";
    person.age()        = 23;

    try
    {
        person.save_to_mysql();
        ASSERT_TRUE(true);
    }
    catch (...)
    {
        ASSERT_TRUE(false);
    }
}

TEST(search_by_login, basic_test_set) {

    setDatabase();

    try
    {
        std::vector<database::Person> result;
        result = database::Person::read_by_login("Batman5");
        EXPECT_EQ("Batman5", result[0].get_login()) << "логины должны совпадать";
    }
    catch (...)
    {
        ASSERT_TRUE(false);
    } 

}


TEST(search_by_fn_ln, basic_test_set) {

    setDatabase();

    try
    {
        std::vector<database::Person> result;
        result = database::Person::read_by_fn_ln("Oleg", "Ivanov");
        EXPECT_EQ("Oleg", result[0].get_first_name()) << "имена должны совпадать";
        EXPECT_EQ("Ivanov", result[0].get_last_name()) << "фамилии должны совпадать";
    }
    catch (...)
    {
        ASSERT_TRUE(false);
    } 

}

int main ([[maybe_unused]] int argc, [[maybe_unused]] char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}