#include"boss.h"
#include<string>


//���캯��
Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ�����" << this->m_Id
		<< "\tְ������" << this->m_Name
		<< "\t��λ" << this->getDeptName()
		<< "\t��λְ��:����˾���е�����" << endl;
}

//��ȡ��λ��Ϣ
string Boss::getDeptName()
{
	return string("�ܲ�");
}