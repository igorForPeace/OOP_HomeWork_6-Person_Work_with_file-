#include <iostream>
#include "Person.h"
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	Person p;
	string path = "file.txt";
	int a;
	cout << "Меню: " << endl;
	cout << "1 - запись в файл\n2 - чтение из файла" << endl;
	cin >> a;
	if (a==1)
	{
		ofstream out;
		out.open(path);
		if (!out.is_open())
		{
			cout << "Файл не открыт" << endl;
		}
		else
		{
			cout << "файл открыт!" << endl;
			out << p.GetSurname() << "\n" << p.GetName() << "\n" << p.GetPatronymic()
				<< "\nвозраст: " << p.GetAge() << "\nрост: " << p.GetHeight()
				<< "\nвес: " << p.GetWeight() << "\nработает?: " << boolalpha << p.GetIsWork() << "\n";
		}
		out.close();
	}
	else
	{
		ifstream in;
		in.open(path);
		if (!in.is_open())
		{
			cout << "Файл не открыт" << endl;
		}
		else
		{
			cout << "файл открыт!" << endl;
			char ch;
			while (in.get(ch))
			{
				cout << ch;
			}
		}
		in.close();
	}
	return 0;
}











/*ofstream out;

	out.open(path);
	if (!out.is_open())
	{
		cout << "Error!" << endl;
	}
	else
	{
		out << p.GetName() << "\n" << p.GetSurname() << "\n" << p.GetPatronymic()<<"\n"<< p.GetAge() << endl;
	}

	out.close();*/

	/*ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "ERROR" << endl;
	}
	else
	{
		cout << "File is open" << endl;
		char ch;
		while (fin.get(ch))
		{
			cout << ch;
		}
	}
	fin.close();*/



	/*setlocale(LC_ALL, "RUSSIAN");
	string path = "myFile.txt";

	fstream fs;
	fs.open(path, fstream::in | fstream::out);*/

