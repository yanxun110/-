#pragma once
#include<iostream>
using namespace std;
#include "worker.h"
#include"workerManager.h"
#include<string>

class Employee : public Worker
{
public:
	//���캯��
	Employee(int id,string name,int dId);


	//��ʾ������Ϣ
	virtual void showInfo();


	//��ȡ��λ��Ϣ
	virtual string getDeptName();

};