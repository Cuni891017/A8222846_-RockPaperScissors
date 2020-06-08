#include "RPS.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

int getWins(int P1, int P2) { //0:平手 1:P1贏 2:P2贏
	if (P1 == 5) {
		if (P2 == 5) return 0;
		else if (P2 == 2) return 2;
		else return 1;
	}
	else if (P1 == 2) {
		if (P2 == 5) return 1;
		else if (P2 == 2) return 0;
		else return 2;
	}
	else if (P1 == 0) {
		if (P2 == 5) return 2;
		else if (P2 == 2) return 1;
		else return 0;
	}
}

int main() {
	cout << "●Rock Papper Scissors" << endl;
	cout << "Rock:0  Paper:5  Scissors:2" << endl;
	srand(time(NULL));

	cout << "Enter Your Name: "; //輸入姓名
	string name;
	cin >> name;

	cout << "Select mode" << endl; //選模式
	cout << " ‧Story press '1' " << endl //故事
		<< " ‧Chips press '2' " << endl //籌碼
		<< " ‧Exit  press '-1' :"; //離開
	double mode, check1 = 0, check2 = 0;;
	cin >> mode;
	system("cls");
	cout << "●Rock Papper Scissors" << endl;

	while (mode != -1) {
		cout << "Rock:0  Paper:5  Scissors:2" << endl;
		double Pput, Rput;
		if (mode == 1) { //故事模式(共3關,3BOSS)
			RPS Player(name, 5); //玩家
			RPS R1("Cuni", 3), R2("Mike", 3), R3("Boss", 5); //BOSS
			int level = 0; //關卡
			const int NumOfL = 3; //關卡數
			RPS ROBOT[NumOfL] = { R1,R2,R3 };
			RPS *pRobot = &ROBOT[level];

			cout << "‧Story Mode (3BOSS : Cuni->Mike->Boss)" << endl;
			cout << "Your HP:" << Player.getChips() << " " << pRobot->getName() << "'s HP:" << pRobot->getChips() << endl << endl;
			while (Player.getChips() != 0 && ROBOT[2].getChips() != 0) {
				if (pRobot->getChips() == 0 && level != 2) {
					level++; //下一關
					cout << pRobot->getName() << " dead" << endl;
					pRobot = &ROBOT[level];
					cout << pRobot->getName() << " is coming" << endl;
					cout << "Your HP:" << Player.getChips() << " " << pRobot->getName() << "'s HP:" << pRobot->getChips() << endl << endl;
				
				}

				cout << "Put(-1 to menu):";
				cin >> Pput;
				if (Pput == -1) break;
				while (Pput != 5 && Pput != 2 && Pput != 0 && Pput != (int)Pput) {
					cout << "Wrong Number!!" << endl;
					cout << "Rock:0  Paper:5  Scissors:2" << endl;
					cout << "Put:";
					cin >> Pput;
					cout << endl;
				}

				Rput = rand() % 3; //機器人put
				if (Rput == 0) Rput = 0;
				else if (Rput == 1) Rput = 5;
				else Rput = 2;

				cout << Player.getName() << ":";
				if (Pput == 5) cout << "Paper ";
				else if (Pput == 2)cout << "Scissors ";
				else cout << "Rock ";

				cout << pRobot->getName() << ":";
				if (Rput == 5) cout << "Paper " << endl;
				else if (Rput == 2)cout << "Scissors " << endl;
				else cout << "Rock " << endl;

				int W = getWins(Pput, Rput);
				if (W == 0) {
					cout << "‧Draw" << endl;
				}
				else if (W == 1) {
					cout << "‧You Win" << endl;
					pRobot->setChips(pRobot->getChips() - 1);
				}
				else {
					cout << "‧You Lose" << endl;
					Player.setChips(Player.getChips() - 1);
				}

				cout << "Your HP:" << Player.getChips() << " " << pRobot->getName() << "'s HP:" << pRobot->getChips() << endl;
				cout << endl;
			}
			if (Pput != -1) {
				if (Player.getChips() > 0) cout << "Congratulations!!!" << endl << "You Are Winner" << endl;
				else cout << "Unfortunately." << endl << "You Lose" << endl;
				cout << "Try again?(press '1'):";
				cin >> check1;
			}
		}
		else if (mode == 2) { //籌碼模式
			RPS Player(name, 5000); //玩家
			RPS Robot("Banker", INT_MAX); //莊家
			double Bet = 1;
			cout << "‧Chips Mode" << endl;

			while (Player.getChips() != 0) {
				cout << "Your Stakes:" << Player.getChips() << endl;
				cout << "Please place your bets(-1 to menu):"; //下注
				cin >> Bet;
				if (Bet == -1) break;
				while (Bet != (int)Bet) {
					cout << "Wrong Bet!!" << endl;
					cout << "Please replace your bets(-1 to menu):";
					cin >> Bet;
				}
				while (Bet > Player.getChips()) {
					cout << "You don't have enought chips" << endl;
					cout << "Please replace your bets(-1 to menu):";
					cin >> Bet;
				}

				cout << "Put:";
				cin >> Pput;
				Player.setChips(Player.getChips() - Bet);

				while (Pput != 5 && Pput != 2 && Pput != 0) {
					cout << "Wrong Number!!" << endl;
					cout << "Rock:0  Paper:5  Scissors:2" << endl;
					cout << "Put:";
					cin >> Pput;
					cout << endl;
				}

				Rput = rand() % 3; //機器人put
				if (Rput == 0) Rput = 0;
				else if (Rput == 1) Rput = 5;
				else Rput = 2;

				cout << Player.getName() << ":";
				if (Pput == 5) cout << "Paper ";
				else if (Pput == 2)cout << "Scissors ";
				else cout << "Rock ";

				cout << Robot.getName() << ":";
				if (Rput == 5) cout << "Paper " << endl;
				else if (Rput == 2)cout << "Scissors " << endl;
				else cout << "Rock " << endl;

				int W = getWins(Pput, Rput);
				if (W == 0) {
					cout << "‧Draw" << endl;
					Player.setChips(Player.getChips() + Bet);
				}
				else if (W == 1) {
					cout << "‧You Win" << endl;
					Player.setChips(Player.getChips() + Bet * 3);
				}
				else {
					cout << "‧You Lose" << endl;
				}
				cout << endl;
				if (Player.getChips() <= 0) {
					cout << "You Are Bankruptcy" << endl;
					cout << "Try again?(press '1'):";
					cin >> check2;
				}
			}	
			
		}

		cout << endl;
		cout << "●Rock Papper Scissors" << endl;
		cout << "Select mode" << endl; //選模式
		cout << " ‧Story press '1' " << endl //故事
			<< " ‧Chips press '2' " << endl //籌碼
			<< " ‧Exit  press '-1' :"; //離開
		if (check1 == 1) mode = 1;
		else if (check2 == 1) mode = 2;
		else cin >> mode;
		system("cls");
	}


	return 0;
}