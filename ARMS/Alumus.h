//==========================================================================//
//	该基类为校友信息类，用于构造与提取校友信息								//
//																			//
//==========================================================================//

#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

class Alumus
{
private:
	string  AlumusName;			//定义姓名
	string	AlumusNum;			//定义学号
	char	AlumusSex;			//定义性别（通过m/f进行分辨）
	int		AlumusAge;			//定义年龄
	int		AlumusGrade;		//定义届级
	string	AlumusDepartment;	//定义院系
	int		AlumusClass;		//定义班级
	string	AlumusAddress;		//定义通讯地址
	string	AlumusPhone;		//定义电话
	string	AlumusQQ;			//定义QQ
	string	AlumusEmail;		//定义Email

public:

//----------构造析构函数部分---------------------------------------------------
	Alumus(string	AName_Temp,	
			string  ANum_Temp,
			char	ASex_Temp,			
			int		AAge_Temp,			
			int		AGrade_Temp,		
			string	ADepartment_Temp,	
			int		AClass_Temp,		
			string	AAddress_Temp,		
			string	APhone_Temp,		
			string	AQQ_Temp,			
			string	AEmail_Temp)		
		{
			AlumusName		= AName_Temp;
			AlumusNum		= ANum_Temp;
			AlumusSex		= ASex_Temp;
			AlumusAge		= AAge_Temp;
			AlumusGrade		= AGrade_Temp;
			AlumusDepartment= ADepartment_Temp;
			AlumusClass		= AClass_Temp;
			AlumusAddress	= AAddress_Temp;
			AlumusPhone		= APhone_Temp;
			AlumusQQ		= AQQ_Temp;
			AlumusEmail		= AEmail_Temp;
		}

	Alumus();
	~Alumus();

//----------操作函数部分-------------------------------------------------------
	string	GetName()		{ return AlumusName; }			//获得校友名字
	string	GetNum()		{ return AlumusNum; }			//获得校友学号
	char	GetSex()		{ return AlumusSex; }			//获得校友性别
	int		GetAge()		{ return AlumusAge; }			//获得校友年龄
	int		GetGrade()		{ return AlumusGrade; }			//获得校友届级
	string	GetDepartment()	{ return AlumusDepartment; }	//获得校友院系
	int		GetClass()		{ return AlumusClass; }			//获得校友班级
	string	GetAddress()	{ return AlumusAddress; }		//获得校友通讯地址
	string	GetPhone()		{ return AlumusPhone; }			//获得校友电话
	string	GetQQ()			{ return AlumusQQ; }			//获得校友QQ
	string	GetEmail()		{ return AlumusEmail; }			//获得校友电子邮箱

	void SetClass_0() { AlumusClass = 0; }					//当所有的信息都还存储于内存时，通过设置班级为0来将被删除的校友信息“屏蔽”

	Alumus* next;											//建立链表

	void operator = (Alumus &Temp);							//重载操作符

	
};

