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
	cout << "���ŤM���Y��+�Q�t�Q�t¼" << endl;
	cout << "�п�J�m�W,�~��,�ʧO:";
	cin >> name >> age1 >> gender;
	SB sb1(name, age1, gender);
	cout << sb1.getname() << " " << sb1.getage() << " " << sb1.getgender() << endl;

	cout << "�п�J(1=�ŤM)(2=���Y)(3=��)���Q����J-1" << endl;

	while (a != -1) {
		//coma�O�q���X��
		coma = (rand() % 3) + 1;
		com_finger = (rand() % 5) + 1;
		cin >> a;

		while (a > 3 || a < 1) {
			if (a == -1) break;
			cout << "��̹G�O�åX" << endl;
			cin >> a;
		}
		if (a == -1) break;

		else if (a == 3 && coma == 1) { //31
			cout << "�q���X����" << coma << " �A�q����F" << endl;
			cout << "�A��J�@�Ӥ@�줭���Ʀr(1�j���)(2����)(3����)(4�L�W��)(�p���):";
			cin >> p1_finger;
			while (p1_finger != com_finger) {
				cout << "�q���X�����:" << com_finger << " �A��F�n�o" << endl;
				cout << "�A��J�@�Ӥ@�줭���Ʀr(1�j���)(2����)(3����)(4�L�W��)(�p���):";
				cin >> p1_finger;
				com_finger = (rand() % 5) + 1;
			}
			cout << "�q���X�����:" << com_finger << endl;
			cout << "�AĹ�F";
			system("pause");
			system("cls");
		}

		else if (a == 1 && coma == 3) { //13
			cout << "�q���X����:" << coma << " �A�q��Ĺ�F" << endl;
			cout << "�A��J�@�Ӥ@�줭���Ʀr(1�j���)(2����)(3����)(4�L�W��)(�p���):";
			cin >> p1_finger;
			while (p1_finger != com_finger) {
				cout << "�q���X�����:" << com_finger << " �A��F�n�o" << endl;
				cout << "�A��J�@�Ӥ@�줭���Ʀr(1�j���)(2����)(3����)(4�L�W��)(�p���):";
				cin >> p1_finger;
				com_finger = (rand() % 5) + 1;
			}
			cout << "�q���X�����:" << com_finger << endl;
			cout << "�AĹ�F" << endl;
			system("pause");
			system("cls");
		}

		else if (a > coma) { // 21 32
			cout << "�q���X����:" << coma << " �A�q��Ĺ�F" << endl;
			cout << "�A��J�@�Ӥ@�줭���Ʀr(1�j���)(2����)(3����)(4�L�W��)(�p���):";
			cin >> p1_finger;
			while (p1_finger != com_finger) {
				cout << "�q���X�����:" << com_finger << " �A��F�n�o" << endl;
				cout << "�A��J�@�Ӥ@�줭���Ʀr(1�j���)(2����)(3����)(4�L�W��)(�p���):";
				cin >> p1_finger;
				com_finger = (rand() % 5) + 1;
			}
			cout << "�q���X�����:" << com_finger << endl;
			cout << "�AĹ�F" << endl;
			system("pause");
			system("cls");
		}

		else if (a == coma) { 
			coma = (rand() % 3) + 1;
			cout << "�q���X����:" << coma;
			cout << "����A�Ӥ@��(1=���Y)(2=�ŤM)(3=��):" << endl;
		}

		else if (a < coma) { //12 23
			cout << "�q���X����:" << coma << " �A�q����F" << endl;
			cout << "�A��J�@�Ӥ@�줭���Ʀr(1�j���)(2����)(3����)(4�L�W��)(�p���):";
			cin >> p1_finger;
			while (p1_finger != com_finger) {
				cout << "�q���X�����:" << com_finger << " �A��F�n�o" << endl;
				cout << "�A��J�@�Ӥ@�줭���Ʀr(1�j���)(2����)(3����)(4�L�W��)(�p���):";
				cin >> p1_finger;
				com_finger = (rand() % 5) + 1;
			}
			cout << "�q���X�����:" << com_finger << endl;
			cout << "�AĹ�F" << endl;
			system("pause");
			system("cls");
		}

		if(p1_finger == com_finger) {
			cout << "���ŤM���Y��+�Q�t�Q�t¼" << endl;
			cout << "�п�J(1=�ŤM)(2=���Y)(3=��)���Q����J-1" << endl;
		}
		
	}
	
	return 0;
}