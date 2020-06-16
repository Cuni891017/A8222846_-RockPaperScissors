#include "SB.h"
#include <string>
using namespace std;


SB::SB(string name, int age, string gender) {
	setgender(gender);
	setage(age);
	setname(name);
}

string SB::getgender() {
	return gender;
}
int SB::getage() {
	return age;
}
string SB::getname() {
	return name;
}
void SB::setgender(string gender) {
	this->gender = gender;
}
void SB::setage(int age) {
	this->age = age;
}
void SB::setname(string name) {
	this->name = name;
}