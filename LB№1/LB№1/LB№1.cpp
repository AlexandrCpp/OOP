// LB�1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Hause.h"
#include <iostream> 
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	Hause hause[4];

	hause[0] = Hause(1, 150, 63, 1, 2, "�������", "���������", 18);
	hause[1] = Hause(2, 250, 43, 2, 2, "�������", "���������", 20);
	hause[2] = Hause(3, 350, 73, 3, 3, "����������", "�������", 18);
	hause[3] = Hause(4, 450, 83, 4, 3, "������", "���������", 17);
	hause[4] = Hause(5, 550, 93, 5, 4, "�������", "���������", 19);

	for (int i = 0; i < 5; i++) {
		cout << "-------------------------------------" << endl;
		hause[i].print();
	}

	unsigned int k;
	cout << "###############################################" << endl;
	cout << "������� ����� ������ ��� ������ ������ �������" << endl;
	cin>> k;
	cout <<endl;

	for (int i = 0; i < 5; i++) {
		hause[i].komnat(k);
	}

	unsigned int a, b;

	cout << "###############################################" << endl;
	cout << "������� ����� ������ ������ �������" << endl;
	cin >> k;
	cout << "������� ����� ���������� �����" << endl;
	cin >> a;
	cout << "������� ����� ��������� �����" << endl;
	cin >> b;
	cout << endl;

	for (int i = 0; i < 5; i++) {	
		hause[i].komnatFloor(k, a, b);
	}

	cout << "###############################################" << endl;
	cout << "������� �������" << endl;
	cin >> k;
	cout << endl;

	for (int i = 0; i < 5; i++) {
		hause[i].ZadArea(k);
	}


	return 0;
}

