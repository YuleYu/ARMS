//==========================================================================//
//	�û���Ϊ������Ա��Ϣ�࣬���ڹ������ȡ������Ա��Ϣ						//
//																			//
//==========================================================================//

#pragma once
#include<iostream>
#include<string>
using namespace std;

class Manager
{
private:
	string ManagerName;			//���幤����Ա�˺�
	string ManagerPassword;		//���幤����Ա�˺�����
public:

//----------����������������---------------------------------------------------
	Manager(string Name_Temp, string Password_Temp) 
			{ ManagerName = Name_Temp;
			  ManagerPassword = Password_Temp;}

	~Manager();


//----------������������-------------------------------------------------------
	void ChangeManager();									//�޸Ĺ�����Ա�˺�
	void SetNull() { ManagerName = "null"; }				//��������Ա�˺�����Ϊ�գ�����ӹ�����Ա�˺�ʱʹ��
	string GetManagerName() { return ManagerName; }			//��ù�����Ա�˺�
	string GetManagerPassword() { return ManagerPassword; }	//����˺�����

	Manager* next;											//�������ڹ�����Ա������
	

};

