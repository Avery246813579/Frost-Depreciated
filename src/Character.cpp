#include "Character.h"

Character::Character(string str):Datatype(NUMBER) {
	if(str.size() > 1) {
		Logger::error("CHARACTER.CPP", "CHARACTER INVALID");
		return;
	}

	const char* c = str.c_str();
    Character::data = *c;
}

Character::~Character() {

}

Datatype* Character::asign(Datatype* as){

}
