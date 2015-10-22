#include "Search.h"


Search::Search()
{
}


void Search::Find(AlumusList &su)
{
	int chazhao, i = 1;
	while (i != 7)
	{
		i = 1;
		cout << "1.以姓名查找\n";
		cout << "2.以届级查找\n";
		cout << "3.以班级查找\n";
		cout << "4.以院系查找\n";
		cout << "5.以学号查找\n";
		cout << "6.按姓名对校友进行排序\n";
		cout << "7.按届级对校友进行排序\n";
		cout << "8.返回上一级\n";
		cout << "请选择数字进行操作："; cin >> chazhao;
		while (chazhao > 7 || chazhao < 1)
		{
			cout << "请输入正确的数字进行操作："; cin >> chazhao;
		}
		system("cls");
		switch (chazhao)
		{
		case 1: {int t = 1;
			while (t)
			{
				string x; bool b2 = false;
				cout << "请输入姓名："; cin >> x;
				for (Alumus* i = su.GetPoint(); i; i = i->next)
				{
					if (i->GetName() == x && i->GetClass() != 0)
					{
						b2 = true;
						cout << "姓名：" << i->GetName() << string(4, ' ')
							 << "学号：" << i->GetNum() << string(4, ' ')
							 << "性别：" << i->GetSex() << string(4, ' ')
							 << "年龄：" << i->GetAge() << string(4, ' ')
							 << "届级：" << i->GetGrade() << endl
							 << "院系：" << i->GetDepartment() << string(4, ' ')
							 << "班级：" << i->GetClass() << string(4, ' ')
							 << "地址：" << i->GetAddress() << string(4, ' ')
							 << "电话：" << i->GetPhone() << endl
							 << "Q Q ：" << i->GetQQ() << string(4, ' ')
							 << "邮箱：" << i->GetEmail() << endl << endl;
					}
				}
				if (!b2)
				{
					cout << "没有找到相关校友信息。\n";
				}
				cout << "输入0退出查找，输入其他数字继续查找："; cin >> t;
				system("cls");
			}
		}
			break;
		case 2: {int t = 1;
			while (t)
			{
				int x; bool b2 = false;
				cout << "请输入届级："; cin >> x;
				for (Alumus* i = su.GetPoint(); i; i = i->next)
				{
					if (i->GetGrade() == x && i->GetClass() != 0)
					{
						b2 = true;
						cout << "姓名：" << i->GetName() << string(4, ' ')
							<< "学号：" << i->GetNum() << string(4, ' ')
							<< "性别：" << i->GetSex() << string(4, ' ')
							<< "年龄：" << i->GetAge() << string(4, ' ')
							<< "届级：" << i->GetGrade() << endl
							<< "院系：" << i->GetDepartment() << string(4, ' ')
							<< "班级：" << i->GetClass() << string(4, ' ')
							<< "地址：" << i->GetAddress() << string(4, ' ')
							<< "电话：" << i->GetPhone() << endl
							<< "Q Q ：" << i->GetQQ() << string(4, ' ')
							<< "邮箱：" << i->GetEmail() << endl << endl;
					}
				}
				if (!b2)
				{
					cout << "没有找到相关校友信息。\n";
				}
				cout << "输入0退出查找，输入其他数字继续查找："; cin >> t;
				system("cls");
			}}
			break;
		case 3: {int t = 1;
			while (t)
			{
				int x; bool b2 = false;
				cout << "请输入班级："; cin >> x;
				for (Alumus* i = su.GetPoint(); i; i = i->next)
				{
					if (i->GetClass() == x && i->GetClass() != 0)
					{
						b2 = true;
						cout << "姓名：" << i->GetName() << string(4, ' ')
							<< "学号：" << i->GetNum() << string(4, ' ')
							<< "性别：" << i->GetSex() << string(4, ' ')
							<< "年龄：" << i->GetAge() << string(4, ' ')
							<< "届级：" << i->GetGrade() << endl
							<< "院系：" << i->GetDepartment() << string(4, ' ')
							<< "班级：" << i->GetClass() << string(4, ' ')
							<< "地址：" << i->GetAddress() << string(4, ' ')
							<< "电话：" << i->GetPhone() << endl
							<< "Q Q ：" << i->GetQQ() << string(4, ' ')
							<< "邮箱：" << i->GetEmail() << endl << endl;
					}
				}
				if (!b2)
				{
					cout << "没有找到相关校友信息。\n";
				}
				cout << "输入0退出查找，输入其他数字继续查找："; cin >> t;
				system("cls");
			}}
			break;
		case 4: {int t = 1;
			while (t)
			{
				string x; bool b2 = false;
				cout << "请输入院系："; cin >> x;
				for (Alumus* i = su.GetPoint(); i; i = i->next)
				{
					if (i->GetDepartment() == x && i->GetClass() != 0)
					{
						b2 = true;
						cout << "姓名：" << i->GetName() << string(4, ' ')
							<< "学号：" << i->GetNum() << string(4, ' ')
							<< "性别：" << i->GetSex() << string(4, ' ')
							<< "年龄：" << i->GetAge() << string(4, ' ')
							<< "届级：" << i->GetGrade() << endl
							<< "院系：" << i->GetDepartment() << string(4, ' ')
							<< "班级：" << i->GetClass() << string(4, ' ')
							<< "地址：" << i->GetAddress() << string(4, ' ')
							<< "电话：" << i->GetPhone() << endl
							<< "Q Q ：" << i->GetQQ() << string(4, ' ')
							<< "邮箱：" << i->GetEmail() << endl << endl;
					}
				}
				if (!b2)
				{
					cout << "没有找到相关校友信息。\n";
				}
				cout << "输入0退出查找，输入其他数字继续查找："; cin >> t;
				system("cls");
			}}
			break;
		case 5: {int t = 1;
			while (t)
			{
				string x; bool b2 = false;
				cout << "请输入学号："; cin >> x;
				for (Alumus* i = su.GetPoint(); i; i = i->next)
				{
					if (i->GetNum() == x && i->GetClass() != 0)
					{
						b2 = true;
						cout << "姓名：" << i->GetName() << string(4, ' ')
							<< "学号：" << i->GetNum() << string(4, ' ')
							<< "性别：" << i->GetSex() << string(4, ' ')
							<< "年龄：" << i->GetAge() << string(4, ' ')
							<< "届级：" << i->GetGrade() << endl
							<< "院系：" << i->GetDepartment() << string(4, ' ')
							<< "班级：" << i->GetClass() << string(4, ' ')
							<< "地址：" << i->GetAddress() << string(4, ' ')
							<< "电话：" << i->GetPhone() << endl
							<< "Q Q ：" << i->GetQQ() << string(4, ' ')
							<< "邮箱：" << i->GetEmail() << endl << endl;
					}
				}
				if (!b2)
				{
					cout << "没有找到相关校友信息。\n";
				}
				cout << "输入0退出查找，输入其他数字继续查找："; cin >> t;
				system("cls");
			}}
				break;
		case 6: {
			for (Alumus*pp = su.GetPoint(); pp; pp = pp->next)
			{
				for (Alumus*ppp = pp; ppp; ppp = ppp->next)
				{
					if (ppp->GetName()<pp->GetName())
					{
						Alumus sn;
						sn = *ppp;
						*ppp = *pp;
						*pp = sn;
					}
				}
			}
			for (Alumus*i = su.GetPoint(); i; i = i->next)
			{
				cout << "姓名：" << i->GetName() << string(4, ' ')
					<< "学号：" << i->GetNum() << string(4, ' ')
					<< "性别：" << i->GetSex() << string(4, ' ')
					<< "年龄：" << i->GetAge() << string(4, ' ')
					<< "届级：" << i->GetGrade() << endl
					<< "院系：" << i->GetDepartment() << string(4, ' ')
					<< "班级：" << i->GetClass() << string(4, ' ')
					<< "地址：" << i->GetAddress() << string(4, ' ')
					<< "电话：" << i->GetPhone() << endl
					<< "Q Q ：" << i->GetQQ() << string(4, ' ')
					<< "邮箱：" << i->GetEmail() << endl << endl;
			}
			char yige;
			cout << "按任意键返回："; cin >> yige;
			system("cls");
		}
			break;
		case 7: {
					for (Alumus*pp = su.GetPoint(); pp; pp = pp->next)
					{
						for (Alumus*ppp = pp; ppp; ppp = ppp->next)
						{
							if (ppp->GetGrade()<pp->GetGrade())
							{
								Alumus sn;
								sn = *ppp;
								*ppp = *pp;
								*pp = sn;
							}
						}
					}
					for (Alumus*i = su.GetPoint(); i; i = i->next)
					{
						cout << "姓名：" << i->GetName() << string(4, ' ')
							<< "学号：" << i->GetNum() << string(4, ' ')
							<< "性别：" << i->GetSex() << string(4, ' ')
							<< "年龄：" << i->GetAge() << string(4, ' ')
							<< "届级：" << i->GetGrade() << endl
							<< "院系：" << i->GetDepartment() << string(4, ' ')
							<< "班级：" << i->GetClass() << string(4, ' ')
							<< "地址：" << i->GetAddress() << string(4, ' ')
							<< "电话：" << i->GetPhone() << endl
							<< "Q Q ：" << i->GetQQ() << string(4, ' ')
							<< "邮箱：" << i->GetEmail() << endl << endl;
					}
					char yige;
					cout << "按任意键返回："; cin >> yige;
					system("cls");
		}
			break;
		case 8:i = 7;
			break;
		default:
			break;
		}
	}
}



Search::~Search()
{
}
