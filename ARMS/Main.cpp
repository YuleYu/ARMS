#include<fstream>
#include<iostream>
#include<string>
#include"ManagerList.h"
#include"AlumusList.h"
#include"Search.h"
using namespace std;
int main()
{
	Search Search_Main;
	bool Judge;                                                //��������Ա����
	string Manager_Name, Manager_Password;
	ifstream Min("����Ա��½.txt");
	ManagerList ManagerList_Main;
	string ManagerName_Main, ManagerPassword_Main;
	while (Min  >> ManagerName_Main 
				>> ManagerPassword_Main)
	{
		Manager ma( ManagerName_Main, ManagerPassword_Main);
		ManagerList_Main.Add_to_Link(ma);
	}
	
	
	ifstream Ain("У����Ϣ.txt");								//����У����Ϣ����
	AlumusList AlumusList_Main;
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
	while (Ain  >> AName_Temp
				>> ANum_Temp
				>> ASex_Temp
				>> AAge_Temp
				>> AGrade_Temp
				>> ADepartment_Temp
				>> AClass_Temp
				>> AAddress_Temp
				>> APhone_Temp
				>> AQQ_Temp
				>> AEmail_Temp)
	{
		Alumus Alumus_Main(	AName_Temp,
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
		AlumusList_Main.Add_to_Link(Alumus_Main);
	}
	
	
	int Handle, Identity, Operator_Temp1 = 1;
	while (Operator_Temp1 != 3)
	{
		Operator_Temp1 = 1;
		cout << "��ӭʹ��У����Ϣ����ϵͳ         \n";
		cout << "1.��½�˻�                       \n";
		cout << "2.������Ϣ                       \n";
		cout << "3.�˳�ϵͳ                       \n";
		cout << "��ѡ�����ֽ��в�����";
		cin >> Handle;
		while (Handle > 3 || Handle < 1)
		{
			cout << "��������ȷ�����ֽ��в�����"; 
			cin >> Handle;
		}
		system("cls");
		
		
		
		switch (Handle)
		{
			case 1: 
			{
				int Operator_Temp2 = 1;
				while (Operator_Temp2 != 0)
				{
					cout << "1.����Ա��ʽ��½                 \n";
					cout << "2.������һ��                     \n";
					cout << "��ѡ�����ֽ��в�����"; 
					cin >> Identity;
					while (Identity > 2 || Identity < 1)
					{
						cout << "��������ȷ�����ֽ��в�����"; 
						cin >> Identity;
					}
					system("cls");
					switch (Identity)
					{
						case 1:                                  //�����˺ź�����
						{
							Judge = false;
							while (!Judge)
							{
								cout << "�������˺ţ�"; 
								cin >> Manager_Name; 
								cout << endl;
								cout << "���������룺"; 
								cin >> Manager_Password; 
								cout << endl;
								Judge = ManagerList_Main.Manipulate(Manager_Name, 
																	Manager_Password, 
																	Judge, 
																	AlumusList_Main, 
																	ManagerList_Main);
							}
							break;
						}
						case 2:
						{
							Operator_Temp2 = 0;
							break;
						}
					}
				}
				break;
			}

			case 2:												//�������������ֱ�Ӳ���
			{
				Search_Main.Find(AlumusList_Main);
				break;
			}
			case 3:
			{
				Operator_Temp1 = 3;
				break;
			}
			default:
				break;
		}
	}
	cout << "ллʹ�ã�";
	Min.close();
	Ain.close();
	return 0;
}