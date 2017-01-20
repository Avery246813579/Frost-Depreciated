#include<iostream>
#include<fstream>
#include <algorithm>
#include "Test.h"
#include <typeinfo>
#include "Character.h"

using namespace std;

int main() {
	string line, bulk = "";
	ifstream myfile ("file.frost");
	if (myfile.is_open()) {
		while ( getline (myfile,line) ) {
			cout << line << '\n';
			bulk += line;
		}
		myfile.close();
	}

	size_t n = std::count(bulk.begin(), bulk.end(), '{');
	cout << n;

	Test test (4);
	cout << test.getTest()<< '\n';

	cout << "" << typeid(24131234.2323).name();

	Character cr("@#");

	return 0;
}
