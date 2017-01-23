#ifndef DATATYPE_H
#define DATATYPE_H
#include <iostream>
#include "Logger.h"

using namespace std;
enum Type {
	CHARACTER, NUMBER
};

class Datatype {
public:
	Datatype(Type);
	virtual ~Datatype();

	virtual Datatype* asign(Datatype*) = 0;

	Type getType();
protected:
	Type type;
private:

};

#endif // DATATYPE_H
