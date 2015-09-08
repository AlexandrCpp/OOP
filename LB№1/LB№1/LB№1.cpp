// LB�1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Hause.h"
#include <iostream>

using namespace std;
using Program::Hause;

void komnat(Hause hause[], unsigned int, int);
void komnatFloor(Hause hause[], unsigned int, unsigned int, unsigned int, int);
void ZadArea(Hause hause[], unsigned int, int);

int _tmain(int argc, _TCHAR* argv[])
{
	const int SIZE = 5;
	setlocale(LC_ALL, "rus");

	Hause p;
	p.print();
	Hause *a = new Hause(6, 650, 100, 6, 4, "�����", "�������", 17);
	a->print();
	Hause *b = new Hause(*a);
	b->print();

	Hause hause[SIZE];
	

	hause[0] = Hause(1, 150, 63, 1, 2, "�������", "���������", 18);
	hause[1] = Hause(2, 250, 43, 2, 2, "�������", "���������", 20);
	hause[2] = Hause(3, 350, 73, 3, 3, "����������", "�������", 18);
	hause[3] = Hause(4, 450, 83, 4, 3, "������", "���������", 17);
	hause[4] = Hause(5, 550, 93, 5, 4, "�������", "���������", 19);


	for (int i = 0; i < SIZE; i++) {
		cout << "-------------------------------------" << endl;
		hause[i].print();
	}

	unsigned int k;
	cout << "###############################################" << endl;
	cout << "������� ����� ������ ��� ������ ������ �������" << endl;
	cin>> k;
	cout <<endl;
	komnat(hause, k, SIZE);


	unsigned int firstFloor, endFloor;

	cout << "###############################################" << endl;
	cout << "������� ����� ������ ������ �������" << endl;
	cin >> k;
	cout << "������� ����� ���������� �����" << endl;
	cin >> firstFloor;
	cout << "������� ����� ��������� �����" << endl;
	cin >> endFloor;
	cout << endl;

	komnatFloor(hause, k, firstFloor, endFloor, SIZE);

	cout << "###############################################" << endl;
	cout << "������� ������� " << endl;
	cin >> k;
	ZadArea(hause, k, SIZE);

	return 0;
}

void  komnat(Hause hause[], unsigned int k, int size){

	for (int i = 0; i < size; i++) {
		if (hause[i].getNumKomnat() == k){
			hause[i].print();
		}

	}
}

	void komnatFloor(Hause hause[], unsigned int k, unsigned int a, unsigned int b, int size){

		for (int i = 0; i < size; i++) {
			if (hause[i].getNumKomnat() == k && hause[i].getFloor() >= a && hause[i].getFloor() <= b){
				hause[i].print();
			}
		}
	}

	void ZadArea(Hause hause[], unsigned int s, int size){

		for (int i = 0; i < size; i++) {
			if (hause[i].getArea() > s){
				hause[i].print();
			}
		}
	}

