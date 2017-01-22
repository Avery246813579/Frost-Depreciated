#ifndef CHARACTER_H
#define CHARACTER_H
#include "Datatype.h"

class Character : public Datatype {
public:
	Character(string);
	virtual ~Character();

protected:

private:
    char data;
};

#endif // CHARACTER_H
