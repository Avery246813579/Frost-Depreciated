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
    cout << location << " INFO >> " << message;
}

void Logger::error(string location, string message){
    cout << location << " ERROR >> " << message;
}
