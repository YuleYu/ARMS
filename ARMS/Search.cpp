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
		cout << "1.����������\n";
		cout << "2.�Խ켶����\n";
		cout << "3.�԰༶����\n";
		cout << "4.��Ժϵ����\n";
		cout << "5.��ѧ�Ų���\n";
		cout << "6.��������У�ѽ�������\n";
		cout << "7.���켶��У�ѽ�������\n";
		cout << "8.������һ��\n";
		cout << "��ѡ�����ֽ��в�����"; cin >> chazhao;
		while (chazhao > 7 || chazhao < 1)
		{
			cout << "��������ȷ�����ֽ��в�����"; cin >> chazhao;
		}
		system("cls");
		switch (chazhao)
		{
		case 1: {int t = 1;
			while (t)
			{
				string x; bool b2 = false;
				cout << "������������"; cin >> x;
				for (Alumus* i = su.GetPoint(); i; i = i->next)
				{
					if (i->GetName() == x && i->GetClass() != 0)
					{
						b2 = true;
						cout << "������" << i->GetName() << string(4, ' ')
							 << "ѧ�ţ�" << i->GetNum() << string(4, ' ')
							 << "�Ա�" << i->GetSex() << string(4, ' ')
							 << "���䣺" << i->GetAge() << string(4, ' ')
							 << "�켶��" << i->GetGrade() << endl
							 << "Ժϵ��" << i->GetDepartment() << string(4, ' ')
							 << "�༶��" << i->GetClass() << string(4, ' ')
							 << "��ַ��" << i->GetAddress() << string(4, ' ')
							 << "�绰��" << i->GetPhone() << endl
							 << "Q Q ��" << i->GetQQ() << string(4, ' ')
							 << "���䣺" << i->GetEmail() << endl << endl;
					}
				}
				if (!b2)
				{
					cout << "û���ҵ����У����Ϣ��\n";
				}
				cout << "����0�˳����ң������������ּ������ң�"; cin >> t;
				system("cls");
			}
		}
			break;
		case 2: {int t = 1;
			while (t)
			{
				int x; bool b2 = false;
				cout << "������켶��"; cin >> x;
				for (Alumus* i = su.GetPoint(); i; i = i->next)
				{
					if (i->GetGrade() == x && i->GetClass() != 0)
					{
						b2 = true;
						cout << "������" << i->GetName() << string(4, ' ')
							<< "ѧ�ţ�" << i->GetNum() << string(4, ' ')
							<< "�Ա�" << i->GetSex() << string(4, ' ')
							<< "���䣺" << i->GetAge() << string(4, ' ')
							<< "�켶��" << i->GetGrade() << endl
							<< "Ժϵ��" << i->GetDepartment() << string(4, ' ')
							<< "�༶��" << i->GetClass() << string(4, ' ')
							<< "��ַ��" << i->GetAddress() << string(4, ' ')
							<< "�绰��" << i->GetPhone() << endl
							<< "Q Q ��" << i->GetQQ() << string(4, ' ')
							<< "���䣺" << i->GetEmail() << endl << endl;
					}
				}
				if (!b2)
				{
					cout << "û���ҵ����У����Ϣ��\n";
				}
				cout << "����0�˳����ң������������ּ������ң�"; cin >> t;
				system("cls");
			}}
			break;
		case 3: {int t = 1;
			while (t)
			{
				int x; bool b2 = false;
				cout << "������༶��"; cin >> x;
				for (Alumus* i = su.GetPoint(); i; i = i->next)
				{
					if (i->GetClass() == x && i->GetClass() != 0)
					{
						b2 = true;
						cout << "������" << i->GetName() << string(4, ' ')
							<< "ѧ�ţ�" << i->GetNum() << string(4, ' ')
							<< "�Ա�" << i->GetSex() << string(4, ' ')
							<< "���䣺" << i->GetAge() << string(4, ' ')
							<< "�켶��" << i->GetGrade() << endl
							<< "Ժϵ��" << i->GetDepartment() << string(4, ' ')
							<< "�༶��" << i->GetClass() << string(4, ' ')
							<< "��ַ��" << i->GetAddress() << string(4, ' ')
							<< "�绰��" << i->GetPhone() << endl
							<< "Q Q ��" << i->GetQQ() << string(4, ' ')
							<< "���䣺" << i->GetEmail() << endl << endl;
					}
				}
				if (!b2)
				{
					cout << "û���ҵ����У����Ϣ��\n";
				}
				cout << "����0�˳����ң������������ּ������ң�"; cin >> t;
				system("cls");
			}}
			break;
		case 4: {int t = 1;
			while (t)
			{
				string x; bool b2 = false;
				cout << "������Ժϵ��"; cin >> x;
				for (Alumus* i = su.GetPoint(); i; i = i->next)
				{
					if (i->GetDepartment() == x && i->GetClass() != 0)
					{
						b2 = true;
						cout << "������" << i->GetName() << string(4, ' ')
							<< "ѧ�ţ�" << i->GetNum() << string(4, ' ')
							<< "�Ա�" << i->GetSex() << string(4, ' ')
							<< "���䣺" << i->GetAge() << string(4, ' ')
							<< "�켶��" << i->GetGrade() << endl
							<< "Ժϵ��" << i->GetDepartment() << string(4, ' ')
							<< "�༶��" << i->GetClass() << string(4, ' ')
							<< "��ַ��" << i->GetAddress() << string(4, ' ')
							<< "�绰��" << i->GetPhone() << endl
							<< "Q Q ��" << i->GetQQ() << string(4, ' ')
							<< "���䣺" << i->GetEmail() << endl << endl;
					}
				}
				if (!b2)
				{
					cout << "û���ҵ����У����Ϣ��\n";
				}
				cout << "����0�˳����ң������������ּ������ң�"; cin >> t;
				system("cls");
			}}
			break;
		case 5: {int t = 1;
			while (t)
			{
				string x; bool b2 = false;
				cout << "������ѧ�ţ�"; cin >> x;
				for (Alumus* i = su.GetPoint(); i; i = i->next)
				{
					if (i->GetNum() == x && i->GetClass() != 0)
					{
						b2 = true;
						cout << "������" << i->GetName() << string(4, ' ')
							<< "ѧ�ţ�" << i->GetNum() << string(4, ' ')
							<< "�Ա�" << i->GetSex() << string(4, ' ')
							<< "���䣺" << i->GetAge() << string(4, ' ')
							<< "�켶��" << i->GetGrade() << endl
							<< "Ժϵ��" << i->GetDepartment() << string(4, ' ')
							<< "�༶��" << i->GetClass() << string(4, ' ')
							<< "��ַ��" << i->GetAddress() << string(4, ' ')
							<< "�绰��" << i->GetPhone() << endl
							<< "Q Q ��" << i->GetQQ() << string(4, ' ')
							<< "���䣺" << i->GetEmail() << endl << endl;
					}
				}
				if (!b2)
				{
					cout << "û���ҵ����У����Ϣ��\n";
				}
				cout << "����0�˳����ң������������ּ������ң�"; cin >> t;
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
				cout << "������" << i->GetName() << string(4, ' ')
					<< "ѧ�ţ�" << i->GetNum() << string(4, ' ')
					<< "�Ա�" << i->GetSex() << string(4, ' ')
					<< "���䣺" << i->GetAge() << string(4, ' ')
					<< "�켶��" << i->GetGrade() << endl
					<< "Ժϵ��" << i->GetDepartment() << string(4, ' ')
					<< "�༶��" << i->GetClass() << string(4, ' ')
					<< "��ַ��" << i->GetAddress() << string(4, ' ')
					<< "�绰��" << i->GetPhone() << endl
					<< "Q Q ��" << i->GetQQ() << string(4, ' ')
					<< "���䣺" << i->GetEmail() << endl << endl;
			}
			char yige;
			cout << "����������أ�"; cin >> yige;
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
						cout << "������" << i->GetName() << string(4, ' ')
							<< "ѧ�ţ�" << i->GetNum() << string(4, ' ')
							<< "�Ա�" << i->GetSex() << string(4, ' ')
							<< "���䣺" << i->GetAge() << string(4, ' ')
							<< "�켶��" << i->GetGrade() << endl
							<< "Ժϵ��" << i->GetDepartment() << string(4, ' ')
							<< "�༶��" << i->GetClass() << string(4, ' ')
							<< "��ַ��" << i->GetAddress() << string(4, ' ')
							<< "�绰��" << i->GetPhone() << endl
							<< "Q Q ��" << i->GetQQ() << string(4, ' ')
							<< "���䣺" << i->GetEmail() << endl << endl;
					}
					char yige;
					cout << "����������أ�"; cin >> yige;
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
