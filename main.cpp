#include "include/crow.h"
#include <iostream>

#define CROW_MAIN


int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        return "Hello world";
    });

    app.port(18080).multithreaded().run();
}
