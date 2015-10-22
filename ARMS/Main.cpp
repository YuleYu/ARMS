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
	bool Judge;                                                //建立管理员链表
	string Manager_Name, Manager_Password;
	ifstream Min("管理员登陆.txt");
	ManagerList ManagerList_Main;
	string ManagerName_Main, ManagerPassword_Main;
	while (Min  >> ManagerName_Main 
				>> ManagerPassword_Main)
	{
		Manager ma( ManagerName_Main, ManagerPassword_Main);
		ManagerList_Main.Add_to_Link(ma);
	}
	
	
	ifstream Ain("校友信息.txt");								//建立校友信息链表
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
		cout << "欢迎使用校友信息管理系统         \n";
		cout << "1.登陆账户                       \n";
		cout << "2.查找信息                       \n";
		cout << "3.退出系统                       \n";
		cout << "请选择数字进行操作：";
		cin >> Handle;
		while (Handle > 3 || Handle < 1)
		{
			cout << "请输入正确的数字进行操作："; 
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
					cout << "1.管理员方式登陆                 \n";
					cout << "2.返回上一层                     \n";
					cout << "请选择数字进行操作："; 
					cin >> Identity;
					while (Identity > 2 || Identity < 1)
					{
						cout << "请输入正确的数字进行操作："; 
						cin >> Identity;
					}
					system("cls");
					switch (Identity)
					{
						case 1:                                  //输入账号和密码
						{
							Judge = false;
							while (!Judge)
							{
								cout << "请输入账号："; 
								cin >> Manager_Name; 
								cout << endl;
								cout << "请输入密码："; 
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

			case 2:												//进入查找排序类直接操作
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
	cout << "谢谢使用！";
	Min.close();
	Ain.close();
	return 0;
}