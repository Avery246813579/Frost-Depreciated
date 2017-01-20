#ifndef DATATYPE_H
#define DATATYPE_H
#include <iostream>

using namespace std;
enum Type{
    CHARACTER, NUMBER
};

class Datatype
{
    public:
        Datatype(Type);
        virtual ~Datatype();

        virtual Datatype* declare(Datatype*) = 0;
    protected:
        Type type;
    private:

};

#endif // DATATYPE_H
