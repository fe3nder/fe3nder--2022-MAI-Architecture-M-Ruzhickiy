#include "config.h"

Config::Config()
{
}

Config &Config::get()
{
    static Config _instance;
    return _instance;
}


std::string &Config::queue_group_id()
{
    return _queue_group_id;
}

const std::string &Config::get_queue_group_id() const
{
    return _queue_group_id;
}
std::string &Config::queue_host()
{
    return _queue_host;
}

std::string &Config::queue_topic()
{
    return _queue_topic;
}

const std::string &Config::get_queue_host() const
{
    return _queue_host;
}

const std::string &Config::get_queue_topic() const
{
    return _queue_topic;
}

const std::string &Config::get_port() const
{
    return _port;
}

const std::string &Config::get_read_request_ip() const
{
    return _read_request_ip;
}

const std::string &Config::get_write_request_ip() const
{
    return _write_request_ip;
}

const std::string &Config::get_login() const
{
    return _login;
}

const std::string &Config::get_password() const
{
    return _password;
}
const std::string &Config::get_database() const
{
    return _database;
}

std::string &Config::port()
{
    return _port;
}

std::string &Config::read_request_ip()
{
    return _read_request_ip;
}

std::string &Config::write_request_ip()
{
    return _write_request_ip;
}

std::string &Config::login()
{
    return _login;
}

std::string &Config::password()
{
    return _password;
}

std::string &Config::database()
{
    return _database;
}