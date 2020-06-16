#ifndef SB_H
#define Sb_H
#include <iostream>
#include <string>
using namespace std;
class SB {
public:
	SB(string, int, string);
	string getgender();
	int getage();
	string getname();
	void setgender(string);
	void  setage(int);
	void setname(string);

private:
	string gender;
	int age;
	string name;
};
#endif