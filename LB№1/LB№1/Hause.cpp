#include "Hause.h"
#include "stdafx.h"
#include <iostream> 
#include <iomanip>

using namespace std;

Hause::Hause(){
	id = 0;
	nomApartment = 0;
	area = 0;
	floor = 0;
	numKomnat = 0;
	strcpy_s(autdoors, "0");
	strcpy_s(styleHause, "0");
	exploitation = 0;
}
Hause::Hause(unsigned int ID, unsigned int NOMAPARTMENT, unsigned int AREA, unsigned int FLOOR, unsigned int NUMKOMNAT, char* AUTDOORS, char* STYLEHAUSE, unsigned int EXPLOITATION){
	id = ID;
	nomApartment = NOMAPARTMENT;
	area = AREA;
	floor = FLOOR;
	numKomnat = NUMKOMNAT;
	strcpy_s(autdoors, AUTDOORS);
	strcpy_s(styleHause, STYLEHAUSE);
	exploitation = EXPLOITATION;
}

/*Hause::Hause(const Hause &m){
	id = m.id;
	nomApartment = m.nomApartment;
	area = m.area;
	floor = m.floor;
	numKomnat = m.numKomnat;
	strcpy_s(autdoors, m.autdoors);
	strcpy_s(styleHause, m.styleHause);
	exploitation = m.exploitation;

}

Hause::~Hause(){
	
}*/

void Hause::setId(unsigned int ID){
	id = ID;
};
unsigned int Hause::getId(){
	return id;
};

void Hause::setNomApartment(unsigned intNOMAPARTMENT){
	nomApartment = intNOMAPARTMENT;
}

unsigned int Hause::getNomApartment(){
	return nomApartment;
}

void  Hause::setArea(unsigned int AREA){
	area = AREA;
}
unsigned int Hause::getArea(){
	return area;
}

void Hause::setFloor(unsigned int FLOOR){
	floor = FLOOR;
}
unsigned int Hause::getFloor(){
	return floor;
}

void Hause::setNumKomnat(unsigned int NUMKOMNAT){
	numKomnat = NUMKOMNAT;
}
unsigned int Hause::getNumKomnat(){
	return numKomnat;
}

void Hause::setAutdoors(char* AUTDOORS){
	strcpy_s(autdoors, AUTDOORS);
}
char* Hause::getAutdoors(){
	return autdoors;
}

void Hause::setStyleHause(char* STYLEHAUSE){
	strcpy_s(styleHause, STYLEHAUSE);
}
char* Hause::getStyleHause(){
	return styleHause;
}

void Hause::setExploitation(unsigned int EXPLOITATION){
	exploitation = EXPLOITATION;
}
unsigned int Hause::getExploitation(){
	return exploitation;
}


void Hause::print(){
	cout <<setw(20)<< "id - " <<setw(10)<< this->id << endl;
	cout << setw(20) << "Номер квартиры - " << setw(10) << this->nomApartment << endl;
	cout << setw(20) << "Площадь - " << setw(10) << this->area << endl;
	cout << setw(20) << "Этаж - " << setw(10) << this->floor << endl;
	cout << setw(20) << "Количество комнат - " << setw(10) << this->numKomnat << endl;
	cout << setw(20) << "Улица - " << setw(10) << this->autdoors << endl;
	cout << setw(20) << "Тип здания - " << setw(10) << this->styleHause << endl;
	cout << setw(20) << "Срок эксплуатации - " << setw(10) << this->exploitation << endl;
}

void  Hause::komnat(unsigned int k){
	if (this->numKomnat == k){
		cout << "-------------------------------------" << endl;
		cout << "Номер квартиры - " << this->nomApartment << endl;
	}
}

void Hause::komnatFloor(unsigned int k, unsigned int a, unsigned int b){
	if (this->numKomnat == k && this->floor >= a && this->floor <= b){
		cout << "Номер квартиры - " << this->nomApartment << endl;
		cout << "-------------------------------------" << endl;
	}
}

void Hause::ZadArea(unsigned int s){
	if (this->area > s){
		cout << "Номер квартиры - " << this->nomApartment << endl;
		cout << "-------------------------------------" << endl;
	}
}