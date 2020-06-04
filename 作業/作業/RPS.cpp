#include "RPS.h"
#include <sstream>
using namespace std;

RPS::RPS() {

}
RPS::RPS(string name, int chips) {
	setName(name), setChips(chips);
}
void RPS::setName(string name) {
	this->name = name;
}
void RPS::setChips(int chips) {
	this->chips = chips;
}
string RPS::getName() const {
	return name;
}
int RPS::getChips() const {
	return chips;
}
string RPS::ShowChips() const {
	stringstream ss;
	ss << "Name:" << getName() << " Chips:" << getChips() << endl;
	return ss.str();
}