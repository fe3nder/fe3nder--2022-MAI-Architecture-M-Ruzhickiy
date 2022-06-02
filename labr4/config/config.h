#ifndef CONFIG_H
#define CONFIG_H

#include <string>

class  Config{
    private:
        Config();
        std::string _read_request_ip;
        std::string _write_request_ip;
        std::string _port;
        std::string _login;
        std::string _password;
        std::string _database;

        std::string _queue_host;
        std::string _queue_topic;
        std::string _queue_group_id;

    public:
        static Config& get();

        std::string& queue_group_id();
        std::string& queue_host();
        std::string& queue_topic();
        std::string& port();
        std::string& read_request_ip();
        std::string& write_request_ip();
        std::string& login();
        std::string& password();
        std::string& database();


        const std::string& get_queue_group_id() const;
        const std::string& get_queue_host() const ;
        const std::string& get_queue_topic() const ;
        const std::string& get_port() const ;
        const std::string& get_read_request_ip() const ;
        const std::string& get_write_request_ip() const ;
        const std::string& get_login() const ;
        const std::string& get_password() const ;
        const std::string& get_database() const ;
};

#endif