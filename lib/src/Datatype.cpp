#include "Datatype.h"

Datatype::Datatype(Type type)
{
    Datatype::type = type;
}

Datatype::~Datatype()
{
    //dtor
}

Type Datatype::getType(){
    return Datatype::type;
}
