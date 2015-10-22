#include "ManagerList.h"



bool ManagerList::Manipulate(string & Manager_Name, 
							 string & Manager_Password, 
							 bool Judge, 
							 AlumusList& AlumusList_Main, 
							 ManagerList& ManagerList_Main)
{
	int Handle;
	Judge = false;
	for (Manager* i = Point; i; i = i->next)
	{
		if (i->GetManagerName() == Manager_Name && 
			i->GetManagerPassword() == Manager_Password && 
			!Judge)
		{
			Judge = true;
			int k = 1;
			while (k != 4)
			{
				k = 1;
				system("cls");
				cout << "请选择操作\n";
				cout << "1.修改账号信息\n";
				cout << "2.管理员设置\n";
				cout << "3.修改校友信息\n";
				cout << "4.返回上一层\n";
				cout << "请输入数字："; cin >> Handle;
				while (Handle > 4 || Handle < 1)
				{
					cout << "请输入正确的数字：";
					cin >> Handle;
				}
				switch (Handle)
				{
				case 1: {i->ChangeManager();
					for (Manager* l = Point; l; l = l->next)
					{
						ofstream mout("管理员登陆.txt");
						mout << l->GetManagerName() << ' ' 
							 << l->GetManagerPassword() << endl;
						mout.close();
					}
					break;
				}
				case 2: {
							int Temp, l = 1;
							while (l != 3)
							{
								l = 1;
								system("cls");
								cout << "1.增加管理员\n";
								cout << "2.删除管理员\n";
								cout << "3.返回上一层\n";
								cout << "请输入数字："; cin >> Temp;
								while (Temp > 3 || Temp < 1)
								{
									cout << "请输入正确的数字："; cin >> Temp;
								}
								switch (Temp)
								{
								case 1:
									ManagerList_Main.Add_to_Link(ManagerList_Main.Add_to_TXT());
									break;
								case 2: {
											int a = 1;
											while (a != 0)
											{
												ManagerList_Main.Remove_from_Link();
												ManagerList_Main.Write_to_TXT();
												cout << "请输入0返回，输入其他数字继续删除："; cin >> a;
											}
								}
									break;
								case 3:l = 3;
								default:
									break;
								}
							}
				}
					break;
				case 3: {
							int Temp, l = 1;
							while (l != 3)
							{
								l = 1;
								system("cls");
								cout << "1.增加校友\n";
								cout << "2.删除校友\n";
								cout << "3.返回上一层\n";
								cout << "请输入数字："; cin >> Temp;
								while (Temp > 3 || Temp < 1)
								{
									cout << "请输入正确的数字："; cin >> Temp;
								}
								switch (Temp)
								{
								case 1:
									AlumusList_Main.Add_to_Link(AlumusList_Main.Add_to_TXT());
									break;
								case 2: {
											int a = 1;
											while (a != 0)
											{
												AlumusList_Main.Remove_from_Link();
												AlumusList_Main.Write_to_TXT();
												cout << "请输入0返回，输入其他数字继续删除："; cin >> a;
											}
								}
									break;
								case 3:l = 3;
									break;
								default:
									break;
								}
							}
				}
					break;
				case 4:k = 4;
					break;
				default:
					break;
				}
			}
		}
	}
	system("cls");
	if (!Judge)
	{
		cout << "账号或密码错误，请重新输入\n";
	}
	return Judge;
}

Manager ManagerList::Add_to_TXT()
{
	system("cls");
	ofstream mout("管理员登陆.txt", ios::app);
	string s1, s2;
	cout << "请输入管理员账号："; cin >> s1;
	cout << "请输入管理员密码："; cin >> s2;
	Manager ma1(s1, s2);
	mout << endl << s1 << ' ' << s2;
	return ma1;
}

void ManagerList::Remove_from_Link()
{
	system("cls");
	cout << "请选择要删除的管理员\n";
	string s4;
	bool b = false;
	for (Manager*st2 = Point; st2; st2 = st2->next)
	{
		if (st2->GetManagerName() != "null")
		{
			cout << st2->GetManagerName() << endl;
		}
	}
	cin >> s4;
	for (Manager*st3 = Point; st3; st3 = st3->next)
	{
		if (st3->GetManagerName() == s4)
		{
			b = true;
			st3->SetNull();
		}
	}
	if (!b)
	{
		cout << "没有这个管理员。\n";
	}
}

void ManagerList::Write_to_TXT()
{
	ofstream mlout("管理员登陆.txt");
	for (Manager* sd = Point; sd; sd = sd->next)
	{
		if (sd->GetManagerName() != "null")
		{
			mlout << sd->GetManagerName() << ' ' << sd->GetManagerPassword() << endl;
		}
	}
	mlout.close();
}

void ManagerList::Add_to_Link(Manager & a)                         //添加到链表
{
	Manager* p = new Manager(a);
	if (Point)
	{
		p->next = Point;
	}
	else
	{
		p->next = NULL;
	}
	Point = p;
}

ManagerList::ManagerList()
{
}

ManagerList::~ManagerList()
{
}
