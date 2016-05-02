#include "CPerson.h"
#include "e_aufgabe.h"

#include <iostream>

using namespace std;

class CFuehrung : public CPerson{

private:
	e_aufgabe aufgabe;

public:
	e_aufgabe GetAufgabe();
	void print();

	CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe);
};