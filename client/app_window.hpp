#pragma once
#include <string>
#include <vector>
#include "auth_window.hpp"

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
    auth_window auth;
};