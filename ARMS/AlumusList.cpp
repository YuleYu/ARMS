#include "AlumusList.h"



void AlumusList::Add_to_Link(Alumus& Temp)
{
	Alumus* Point_Temp = new Alumus(Temp);
	if (Point)
	{
		Point_Temp->next = Point;
	}
	else
	{
		Point_Temp->next = NULL;
	}
	Point = Point_Temp;
}


Alumus AlumusList::Add_to_TXT()
{
	ofstream sout("У����Ϣ.txt", ios::app);
	string	AName_Temp;
	string	ANum_Temp;
	char	ASex_Temp;
	int		AAge_Temp;
	int		AGrade_Temp;
	string	ADepartment_Temp;
	int		AClass_Temp;
	string	AAddress_Temp;
	string	APhone_Temp;
	string	AQQ_Temp;
	string	AEmail_Temp;
	cout << "������У��������"; cin >> AName_Temp;
	cout << "������У��ѧ�ţ�"; cin >> ANum_Temp;
	cout << "������У���Ա�"; cin >> ASex_Temp;
	cout << "������У�����䣺"; cin >> AAge_Temp;
	cout << "������У�ѽ켶��"; cin >> AGrade_Temp;
	cout << "������У��Ժϵ��"; cin >> ADepartment_Temp;
	cout << "������У�Ѱ༶��"; cin >> AClass_Temp;
	cout << "������У�ѵ�ַ��"; cin >> AAddress_Temp;
	cout << "������У�ѵ绰��"; cin >> APhone_Temp;
	cout << "������У��Q Q ��"; cin >> AQQ_Temp;
	cout << "������У�����䣺"; cin >> AEmail_Temp;

	Alumus Temp1(	AName_Temp,
					ANum_Temp,
					ASex_Temp,
					AAge_Temp,
					AGrade_Temp,
					ADepartment_Temp,
					AClass_Temp,
					AAddress_Temp,
					APhone_Temp,
					AQQ_Temp,
					AEmail_Temp);
	sout << endl 
		 << AName_Temp		 << ' '
		 << ANum_Temp		 << ' '
		 << ASex_Temp		 << ' '
		 << AAge_Temp		 << ' '
		 << AGrade_Temp		 << ' '
		 << ADepartment_Temp << ' '
		 << AClass_Temp		 << ' '
		 << AAddress_Temp	 << ' '
		 << APhone_Temp		 << ' '
		 << AQQ_Temp		 << ' '
		 << AEmail_Temp;
	return Temp1;
}



void AlumusList::Remove_from_Link()
{
	system("cls");
	cout << "������Ҫɾ����У�ѵ�ѧ��\n";
	string	ANum_Temp;
	for (Alumus*st2 = Point; st2; st2 = st2->next)
	{
		if (st2->GetClass() != 0)
		{
			cout << "������" << st2->GetName()		<<string(4,' ')
				 << "ѧ�ţ�" << st2->GetNum()		<<string(4,' ')
				 << "�Ա�" << st2->GetSex()		<< string(4, ' ')
				 << "���䣺" << st2->GetAge()		<< string(4, ' ')
				 << "�켶��" << st2->GetGrade()		<< endl 
				 << "Ժϵ��" << st2->GetDepartment()<< string(4, ' ')
				 << "�༶��" << st2->GetClass()		<< string(4, ' ')
				 << "��ַ��" << st2->GetAddress()	<< string(4, ' ')
				 << "�绰��" << st2->GetPhone()		<< endl
				 << "Q Q ��" << st2->GetQQ()		<< string(4, ' ')
				 << "���䣺" << st2->GetEmail()		<< endl<<endl;
		}
	}
	cin >> ANum_Temp;

	for (Alumus*st3 = Point; st3; st3 = st3->next)
	{
		if (st3->GetNum()		 == ANum_Temp)
		{
			st3->SetClass_0();
			cout << "ɾ���ɹ���"<<endl;
		}
	}
}


void AlumusList::Write_to_TXT()
{
	ofstream slout("У����Ϣ.txt");
	for (Alumus* st2 = Point; st2; st2 = st2->next)
	{
		if (st2->GetClass() != 0)
		{
			slout << st2->GetName() << ' '
				  << st2->GetNum() << ' '
				  << st2->GetSex() << ' '
				  << st2->GetAge() << ' '
				  << st2->GetGrade() << ' '
				  << st2->GetDepartment() << ' '
				  << st2->GetClass() << ' '
				  << st2->GetAddress() << ' '
				  << st2->GetPhone() << ' '
				  << st2->GetQQ() << ' '
				  << st2->GetEmail() << endl;
		}
	}
	slout.close();
}


AlumusList::AlumusList()
{
}



AlumusList::~AlumusList()
{
}
