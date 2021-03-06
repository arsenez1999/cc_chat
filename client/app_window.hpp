#pragma once
#include <string>
#include <vector>
#include "client.hpp"

class app_window
{
public:
    app_window();
    ~app_window();
public:
    void draw();
private:
    void enter_message(std::string& message);
private:
    std::string input;
    std::vector<std::string> items;
    bool scroll_to_bottom;
    client server;
};