#include "Test.h"

Test::Test(int t)
{
    Test::test = t;
}

Test::~Test()
{
    //dtor
}

int Test::getTest(){
    return Test::test;
}
