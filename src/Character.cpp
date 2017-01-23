#include "Character.h"

Character::Character(string str):Datatype(CHARACTER) {
	if(str.size() > 1) {
		Logger::error("CHARACTER.CPP", "CHARACTER INVALID");
		return;
	}

    Character::data = *str.c_str();
}

Character::~Character() {

}

Datatype* Character::asign(Datatype* as){

}
