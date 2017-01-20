#ifndef CHARACTER_H
#define CHARACTER_H
#include "Datatype.h"

class Character : public Datatype {
public:
	Character(string);
	virtual ~Character();
	Datatype* declare(Datatype*);

protected:

private:
};

#endif // CHARACTER_H
