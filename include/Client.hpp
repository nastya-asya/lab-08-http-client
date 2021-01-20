// Copyright 2020 Anastasiya Smirnova nastya.asya08@yandex.ru

#ifndef INCLUDE_CLIENT_HPP_
#define INCLUDE_CLIENT_HPP_
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <cstdlib>
#include <iostream>
#include <string>

#include "Request_parametrs.hpp"
#include "URL.hpp"

namespace beast = boost::beast;
namespace http = beast::http;
namespace net = boost::asio;     
using tcp = net::ip::tcp;

class Client {
 public:
  Client(int argc, char* argv[]);
  int Run();

 private:
  void prepareCommandLine();
  int argc_;
  char** argv_;
  Request_parametrs parametrs;
};

#endif  // INCLUDE_CLIENT_HPP_
