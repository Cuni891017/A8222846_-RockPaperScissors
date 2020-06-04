//Rock-paper-scissors
#ifndef RPS_H
#define RPS_H
#include <string>
using namespace std;

class RPS {
public:
	RPS(); 
	RPS(string name, int chips); // ¦W¦r,Äw½X
	void setName(string name);
	void setChips(int chips);
	string getName() const;
	int getChips() const;
	string ShowChips() const;

private:
	string name;
	int chips;
};

#endif