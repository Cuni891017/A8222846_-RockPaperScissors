#include<iostream> 
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string>
#include"SB.h"
using namespace std;

int main() {
	srand(time(NULL));
	int a = 1, coma, p1_finger = 6, com_finger;
	int age1;
	string name, gender;
	cout << "●剪刀石頭布+烏龜烏龜翹" << endl;
	cout << "請輸入姓名,年紀,性別:";
	cin >> name >> age1 >> gender;
	SB sb1(name, age1, gender);
	cout << sb1.getname() << " " << sb1.getage() << " " << sb1.getgender() << endl;

	cout << "請輸入(1=剪刀)(2=石頭)(3=布)不想玩輸入-1" << endl;

	while (a != -1) {
		//coma是電腦出拳
		coma = (rand() % 3) + 1;
		com_finger = (rand() % 5) + 1;
		cin >> a;

		while (a > 3 || a < 1) {
			if (a == -1) break;
			cout << "臭傻逼別亂出" << endl;
			cin >> a;
		}
		if (a == -1) break;

		else if (a == 3 && coma == 1) { //31
			cout << "電腦出的拳" << coma << " 你猜拳輸了" << endl;
			cout << "再輸入一個一到五的數字(1大拇指)(2食指)(3中指)(4無名指)(小拇指):";
			cin >> p1_finger;
			while (p1_finger != com_finger) {
				cout << "電腦出的手指:" << com_finger << " 你輸了好廢" << endl;
				cout << "再輸入一個一到五的數字(1大拇指)(2食指)(3中指)(4無名指)(小拇指):";
				cin >> p1_finger;
				com_finger = (rand() % 5) + 1;
			}
			cout << "電腦出的手指:" << com_finger << endl;
			cout << "你贏了";
			system("pause");
			system("cls");
		}

		else if (a == 1 && coma == 3) { //13
			cout << "電腦出的拳:" << coma << " 你猜拳贏了" << endl;
			cout << "再輸入一個一到五的數字(1大拇指)(2食指)(3中指)(4無名指)(小拇指):";
			cin >> p1_finger;
			while (p1_finger != com_finger) {
				cout << "電腦出的手指:" << com_finger << " 你輸了好廢" << endl;
				cout << "再輸入一個一到五的數字(1大拇指)(2食指)(3中指)(4無名指)(小拇指):";
				cin >> p1_finger;
				com_finger = (rand() % 5) + 1;
			}
			cout << "電腦出的手指:" << com_finger << endl;
			cout << "你贏了" << endl;
			system("pause");
			system("cls");
		}

		else if (a > coma) { // 21 32
			cout << "電腦出的拳:" << coma << " 你猜拳贏了" << endl;
			cout << "再輸入一個一到五的數字(1大拇指)(2食指)(3中指)(4無名指)(小拇指):";
			cin >> p1_finger;
			while (p1_finger != com_finger) {
				cout << "電腦出的手指:" << com_finger << " 你輸了好廢" << endl;
				cout << "再輸入一個一到五的數字(1大拇指)(2食指)(3中指)(4無名指)(小拇指):";
				cin >> p1_finger;
				com_finger = (rand() % 5) + 1;
			}
			cout << "電腦出的手指:" << com_finger << endl;
			cout << "你贏了" << endl;
			system("pause");
			system("cls");
		}

		else if (a == coma) { 
			coma = (rand() % 3) + 1;
			cout << "電腦出的拳:" << coma;
			cout << "平手再來一次(1=石頭)(2=剪刀)(3=布):" << endl;
		}

		else if (a < coma) { //12 23
			cout << "電腦出的拳:" << coma << " 你猜拳輸了" << endl;
			cout << "再輸入一個一到五的數字(1大拇指)(2食指)(3中指)(4無名指)(小拇指):";
			cin >> p1_finger;
			while (p1_finger != com_finger) {
				cout << "電腦出的手指:" << com_finger << " 你輸了好廢" << endl;
				cout << "再輸入一個一到五的數字(1大拇指)(2食指)(3中指)(4無名指)(小拇指):";
				cin >> p1_finger;
				com_finger = (rand() % 5) + 1;
			}
			cout << "電腦出的手指:" << com_finger << endl;
			cout << "你贏了" << endl;
			system("pause");
			system("cls");
		}

		if(p1_finger == com_finger) {
			cout << "●剪刀石頭布+烏龜烏龜翹" << endl;
			cout << "請輸入(1=剪刀)(2=石頭)(3=布)不想玩輸入-1" << endl;
		}
		
	}
	
	return 0;
}