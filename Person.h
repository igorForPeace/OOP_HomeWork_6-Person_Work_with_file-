#pragma once
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

class Person
{
private:
	string name;
	string surname;
	string patronymic;
	int age;
	int height;
	double weight;
	bool isWork;
public:

	Person(string name, string surname, string patronymic, int age, int height, double weight, bool isWork)
	{
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
		this->age = age;
		this->height = height;
		this->weight = weight;
		this->isWork = isWork;
	}
	Person():Person("�����", "���������", "����������" , 26, 192, 83.2, 1) {}

	void Show()
	{
		cout << "���: " << name << endl;
		cout << "�������: " << surname << endl;
		cout << "��������: " << patronymic << endl;
		cout << "�������: " << age << endl;
		cout << "����: " << height << endl;
		cout << "���: " << weight << endl;
		cout << "��������?: "<<boolalpha<<isWork<< endl;
	}

	string GetName() const
	{
		return name;
	}

	string GetSurname() const
	{
		return surname;
	}

	string GetPatronymic() const
	{
		return patronymic;
	}

	int GetAge() const
	{
		return age;
	}

	int GetHeight() const
	{
		return height;
	}

	double GetWeight() const
	{
		return weight;
	}

	bool GetIsWork() const
	{
		return isWork;
	}

};
