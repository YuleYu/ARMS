//==========================================================================//
//	�û���ΪУ����Ϣ�࣬���ڹ�������ȡУ����Ϣ								//
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
	string  AlumusName;			//��������
	string	AlumusNum;			//����ѧ��
	char	AlumusSex;			//�����Ա�ͨ��m/f���зֱ棩
	int		AlumusAge;			//��������
	int		AlumusGrade;		//����켶
	string	AlumusDepartment;	//����Ժϵ
	int		AlumusClass;		//����༶
	string	AlumusAddress;		//����ͨѶ��ַ
	string	AlumusPhone;		//����绰
	string	AlumusQQ;			//����QQ
	string	AlumusEmail;		//����Email

public:

//----------����������������---------------------------------------------------
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

//----------������������-------------------------------------------------------
	string	GetName()		{ return AlumusName; }			//���У������
	string	GetNum()		{ return AlumusNum; }			//���У��ѧ��
	char	GetSex()		{ return AlumusSex; }			//���У���Ա�
	int		GetAge()		{ return AlumusAge; }			//���У������
	int		GetGrade()		{ return AlumusGrade; }			//���У�ѽ켶
	string	GetDepartment()	{ return AlumusDepartment; }	//���У��Ժϵ
	int		GetClass()		{ return AlumusClass; }			//���У�Ѱ༶
	string	GetAddress()	{ return AlumusAddress; }		//���У��ͨѶ��ַ
	string	GetPhone()		{ return AlumusPhone; }			//���У�ѵ绰
	string	GetQQ()			{ return AlumusQQ; }			//���У��QQ
	string	GetEmail()		{ return AlumusEmail; }			//���У�ѵ�������

	void SetClass_0() { AlumusClass = 0; }					//�����е���Ϣ�����洢���ڴ�ʱ��ͨ�����ð༶Ϊ0������ɾ����У����Ϣ�����Ρ�

	Alumus* next;											//��������

	void operator = (Alumus &Temp);							//���ز�����

	
};

