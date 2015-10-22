//==========================================================================//
//	该基类为管理员操作类，用于对校友信息的操作								//
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

//----------构造析构函数部分---------------------------------------------------
	ManagerList();
	~ManagerList();


//----------操作函数部分-------------------------------------------------------
	bool Manipulate(string& Manager_Name,				//主要操作函数，在管理员模式下对校友信息进行操作
					string& Manager_Password, 
					bool Judge, 
					AlumusList& AlumusList_Main, 
					ManagerList& ManagerList_Main);
	Manager Add_to_TXT();								//在文本中增加新的管理员
	void Remove_from_Link();							//从链表中将管理员删除
	void Write_to_TXT();								//将信息写入文本
	void Add_to_Link(Manager& a);						//将信息添加入链表
	
	
};

