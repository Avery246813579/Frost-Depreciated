#ifndef INTEGER_H
#define INTEGER_H
#include "Datatype.h"
#include "Logger.h"

using namespace std;
class Integer : public Datatype {
public:
	Integer(string);
	virtual ~Integer();
	int to_int(char const*);
    Datatype* asign(Datatype*);

protected:

private:
	int data;

};

#endif // INTEGER_H
