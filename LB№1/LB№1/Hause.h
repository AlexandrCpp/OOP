#include "string.h"

namespace Program
{
	typedef unsigned int ui;
	class Hause
	{
	private:
		ui id;
		ui nomApartment;
		ui area;
		ui floor;
		ui numKomnat;
		char* autdoors;
		char* styleHause;
		ui exploitation;

	public:
		Hause();
		Hause(ui, ui, ui, ui, ui, char*, char*, ui);
		Hause(const Hause &);


		void setId(ui);
		void setNomApartment(ui);
		void setArea(ui);
		void setFloor(ui);
		void setNumKomnat(ui);
		void setAutdoors(char*);
		void setStyleHause(char*);
		void setExploitation(ui);

		ui getId();
		ui getNomApartment();
		ui getArea();
		ui getFloor();
		ui getNumKomnat();
		char* getAutdoors();
		char* getStyleHause();
		ui getExploitation();

		void print();
		

		~Hause();
	};
}