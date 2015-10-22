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
	ofstream sout("校友信息.txt", ios::app);
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
	cout << "请输入校友姓名："; cin >> AName_Temp;
	cout << "请输入校友学号："; cin >> ANum_Temp;
	cout << "请输入校友性别："; cin >> ASex_Temp;
	cout << "请输入校友年龄："; cin >> AAge_Temp;
	cout << "请输入校友届级："; cin >> AGrade_Temp;
	cout << "请输入校友院系："; cin >> ADepartment_Temp;
	cout << "请输入校友班级："; cin >> AClass_Temp;
	cout << "请输入校友地址："; cin >> AAddress_Temp;
	cout << "请输入校友电话："; cin >> APhone_Temp;
	cout << "请输入校友Q Q ："; cin >> AQQ_Temp;
	cout << "请输入校友邮箱："; cin >> AEmail_Temp;

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
	cout << "请输入要删除的校友的学号\n";
	string	ANum_Temp;
	for (Alumus*st2 = Point; st2; st2 = st2->next)
	{
		if (st2->GetClass() != 0)
		{
			cout << "姓名：" << st2->GetName()		<<string(4,' ')
				 << "学号：" << st2->GetNum()		<<string(4,' ')
				 << "性别：" << st2->GetSex()		<< string(4, ' ')
				 << "年龄：" << st2->GetAge()		<< string(4, ' ')
				 << "届级：" << st2->GetGrade()		<< endl 
				 << "院系：" << st2->GetDepartment()<< string(4, ' ')
				 << "班级：" << st2->GetClass()		<< string(4, ' ')
				 << "地址：" << st2->GetAddress()	<< string(4, ' ')
				 << "电话：" << st2->GetPhone()		<< endl
				 << "Q Q ：" << st2->GetQQ()		<< string(4, ' ')
				 << "邮箱：" << st2->GetEmail()		<< endl<<endl;
		}
	}
	cin >> ANum_Temp;

	for (Alumus*st3 = Point; st3; st3 = st3->next)
	{
		if (st3->GetNum()		 == ANum_Temp)
		{
			st3->SetClass_0();
			cout << "删除成功！"<<endl;
		}
	}
}


void AlumusList::Write_to_TXT()
{
	ofstream slout("校友信息.txt");
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
