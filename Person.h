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
	Person():Person("Игорь", "Плахотнюк", "Витальевич" , 26, 192, 83.2, 1) {}

	void Show()
	{
		cout << "Имя: " << name << endl;
		cout << "Фамилия: " << surname << endl;
		cout << "Отчество: " << patronymic << endl;
		cout << "Возраст: " << age << endl;
		cout << "Рост: " << height << endl;
		cout << "Вес: " << weight << endl;
		cout << "Работает?: "<<boolalpha<<isWork<< endl;
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
