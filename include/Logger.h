#ifndef LOGGER_H
#define LOGGER_H
#include <iostream>

using namespace std;
class Logger
{
    public:
        Logger();
        virtual ~Logger();
        static void log(string, string);
        static void error(string, string);

    protected:

    private:
};

#endif // LOGGER_H
