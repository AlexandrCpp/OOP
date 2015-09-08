#include "Hause.h"
#include "stdafx.h"
#include <iostream> 
#include <iomanip>

using namespace std;
namespace Program
{

	Hause::Hause(){
		id = 0;
		nomApartment = 0;
		area = 0;
		floor = 0;
		numKomnat = 0;
		autdoors = "";
		styleHause = "";
		exploitation = 0;
		cout << "-------------------------------------" << endl;
		cout << "������ �" << this->id << " ������ ����������� ��� ����������" << endl;
	}
	Hause::Hause(ui ID, ui NOMAPARTMENT, ui AREA, ui FLOOR, ui NUMKOMNAT, char* AUTDOORS, char* STYLEHAUSE, ui EXPLOITATION){
		id = ID;
		nomApartment = NOMAPARTMENT;
		area = AREA;
		floor = FLOOR;
		numKomnat = NUMKOMNAT;
		autdoors = AUTDOORS;
	    styleHause = STYLEHAUSE;
		exploitation = EXPLOITATION;
		cout << "-------------------------------------" << endl;
		cout << "������ �" << this->id << " ������ ����������� � �����������" << endl;
	}

	Hause::Hause(const Hause &m){

		id = m.id;
		nomApartment = m.nomApartment;
		area = m.area;
		floor = m.floor;
		numKomnat = m.numKomnat;
		autdoors = m.autdoors;
		styleHause = m.styleHause;
		exploitation = m.exploitation;
		cout << "-------------------------------------" << endl;
		cout << "������ �" << this->id << " ������ ����������� �����������" << endl;

	}

	Hause::~Hause(){
		cout << "-------------------------------------" << endl;
		cout << "������ �" << this->id << " ������ ����������" << endl;
	}

	void Hause::setId(ui ID){
		id = ID;
	};
	ui Hause::getId(){
		return id;
	};

	void Hause::setNomApartment(ui NOMAPARTMENT){
		nomApartment = NOMAPARTMENT;
	}

	ui Hause::getNomApartment(){
		return nomApartment;
	}

	void  Hause::setArea(ui AREA){
		area = AREA;
	}
	ui Hause::getArea(){
		return area;
	}

	void Hause::setFloor(ui FLOOR){
		floor = FLOOR;
	}
	ui Hause::getFloor(){
		return floor;
	}

	void Hause::setNumKomnat(ui NUMKOMNAT){
		numKomnat = NUMKOMNAT;
	}
	ui Hause::getNumKomnat(){
		return numKomnat;
	}

	void Hause::setAutdoors(char* AUTDOORS){
		autdoors = AUTDOORS;
	}
	char* Hause::getAutdoors(){
		return autdoors;
	}

	void Hause::setStyleHause(char* STYLEHAUSE){
	    styleHause=STYLEHAUSE;
	}
	char* Hause::getStyleHause(){
		return styleHause;
	}

	void Hause::setExploitation(ui EXPLOITATION){
		exploitation = EXPLOITATION;
	}
	ui Hause::getExploitation(){
		return exploitation;
	}


	void Hause::print(){
		cout << setw(20) << "id - " << setw(10) << this->id << endl;
		cout << setw(20) << "����� �������� - " << setw(10) << this->nomApartment << endl;
		cout << setw(20) << "������� - " << setw(10) << this->area << endl;
		cout << setw(20) << "���� - " << setw(10) << this->floor << endl;
		cout << setw(20) << "���������� ������ - " << setw(10) << this->numKomnat << endl;
		cout << setw(20) << "����� - " << setw(10) << this->autdoors << endl;
		cout << setw(20) << "��� ������ - " << setw(10) << this->styleHause << endl;
		cout << setw(20) << "���� ������������ - " << setw(10) << this->exploitation << endl;
	}

}