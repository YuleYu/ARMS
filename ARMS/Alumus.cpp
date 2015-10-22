#include "Alumus.h"


void Alumus::operator=(Alumus &Temp)		//ÖØÔØ²Ù×÷·û
{
	AlumusName		 = Temp.AlumusName;
	AlumusNum		 = Temp.AlumusNum;
	AlumusSex		 = Temp.AlumusSex;
	AlumusAge		 = Temp.AlumusAge;
	AlumusGrade		 = Temp.AlumusGrade;
	AlumusDepartment = Temp.AlumusDepartment;
	AlumusClass		 = Temp.AlumusClass;
	AlumusAddress	 = Temp.AlumusAddress;
	AlumusPhone		 = Temp.AlumusPhone;
	AlumusQQ		 = Temp.AlumusQQ;
	AlumusEmail		 = Temp.AlumusEmail;
}

Alumus::Alumus()
{
}

Alumus::~Alumus()
{
}
