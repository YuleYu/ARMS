//==========================================================================//
//	该基类为工作人员信息类，用于构造和提取工作人员信息						//
//																			//
//==========================================================================//

#pragma once
#include<iostream>
#include<string>
using namespace std;

class Manager
{
private:
	string ManagerName;			//定义工作人员账号
	string ManagerPassword;		//定义工作人员账号密码
public:

//----------构造析构函数部分---------------------------------------------------
	Manager(string Name_Temp, string Password_Temp) 
			{ ManagerName = Name_Temp;
			  ManagerPassword = Password_Temp;}

	~Manager();


//----------操作函数部分-------------------------------------------------------
	void ChangeManager();									//修改工作人员账号
	void SetNull() { ManagerName = "null"; }				//将工作人员账号设置为空，在添加工作人员账号时使用
	string GetManagerName() { return ManagerName; }			//获得工作人员账号
	string GetManagerPassword() { return ManagerPassword; }	//获得账号密码

	Manager* next;											//建立关于工作人员的链表
	

};

