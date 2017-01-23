#include "Logger.h"

Logger::Logger()
{
    //ctor
}

Logger::~Logger()
{
    //dtor
}

void Logger::log(string location, string message){
    cout << location << " INFO >> " << message << '\n';
}

void Logger::error(string location, string message){
    cout << location << " ERROR >> " << message << '\n';
}
