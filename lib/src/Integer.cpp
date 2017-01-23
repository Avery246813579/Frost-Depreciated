#include "Integer.h"
#include <limits>

Integer::Integer(string str):Datatype(NUMBER) {
	int data;
	try {
		data = Integer::to_int(str.c_str());
	} catch(exception ex) {
		Logger::error("INTERGER.CPP", "CAN\'T PARSE INTEGER");
	}


	cout << data;
}

Integer::~Integer() {
	//dtor
}

int Integer::to_int(char const *s) {
	if ( s == NULL || *s == '\0' ) {
		Logger::error("INTERGER.CPP", "EMPTY OR NULL STRING");
		return std::numeric_limits<double>::quiet_NaN();
	}

	bool negate = (s[0] == '-');
	if ( *s == '+' || *s == '-' )
		++s;

	if ( *s == '\0') {
		Logger::error("INTERGER.CPP", "SIGN CHARACTER ONLY");
		return std::numeric_limits<double>::quiet_NaN();
	}

	int result = 0;
	while(*s) {
		if ( *s >= '0' && *s <= '9' ) {
			result = result * 10  - (*s - '0');
		} else {
			Logger::error("INTERGER.CPP", "INVALID INTEREGER INPUT");
			return std::numeric_limits<double>::quiet_NaN();
		}

		++s;
	}

	return negate ? result : -result;
}

Datatype* Integer::asign(Datatype*) {

}
