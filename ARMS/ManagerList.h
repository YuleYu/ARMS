//==========================================================================//
//	�û���Ϊ����Ա�����࣬���ڶ�У����Ϣ�Ĳ���								//
//																			//
//==========================================================================//

#pragma once
#include "Manager.h"
#include "AlumusList.h"
#include<iomanip>
class ManagerList 
//	public Manager, public AlumusList
{
private:
	Manager *Point;
public:

//----------����������������---------------------------------------------------
	ManagerList();
	~ManagerList();


//----------������������-------------------------------------------------------
	bool Manipulate(string& Manager_Name,				//��Ҫ�����������ڹ���Աģʽ�¶�У����Ϣ���в���
					string& Manager_Password, 
					bool Judge, 
					AlumusList& AlumusList_Main, 
					ManagerList& ManagerList_Main);
	Manager Add_to_TXT();								//���ı��������µĹ���Ա
	void Remove_from_Link();							//�������н�����Աɾ��
	void Write_to_TXT();								//����Ϣд���ı�
	void Add_to_Link(Manager& a);						//����Ϣ���������
	
	
};

