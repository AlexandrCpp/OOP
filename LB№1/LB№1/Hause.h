


#include <ctime>
#include "string.h"

class Hause
{
private:
	unsigned int id;
	unsigned int nomApartment;
	unsigned int area;
	unsigned int floor;
	unsigned int numKomnat;
	char autdoors[20];
	char styleHause[20];
	unsigned int exploitation;

public:
	Hause();
	Hause(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char*, char*, unsigned int);
	//Hause(const Hause &);
	//~Hause();

	void setId(unsigned int);
	void setNomApartment(unsigned int);
	void setArea(unsigned int);
	void setFloor(unsigned int);
	void setNumKomnat(unsigned int);
	void setAutdoors(char*);
	void setStyleHause(char*);
	void setExploitation(unsigned int);

	unsigned int getId();
	unsigned int getNomApartment();
	unsigned int getArea();
	unsigned int getFloor();
	unsigned int getNumKomnat();
	char* getAutdoors();
	char* getStyleHause();
	unsigned int getExploitation();

	void print();
	void komnat(unsigned int);
	void komnatFloor(unsigned int, unsigned int, unsigned int);
	void ZadArea(unsigned int);
};