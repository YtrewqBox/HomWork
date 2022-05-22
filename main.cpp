#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


struct age
{
	int ag = 0;
	int height = 0;
	int arr[3] = {};
};

struct Aboba
{
	age Age;
	void In()
	{
		cout << "Age: ";
		cin >> Age.ag;
		cout << "Height: ";
		cin >> Age.height;

		cout << "Day: ";
		cin >> Age.arr[0];
		cout << "Month: ";
		cin >> Age.arr[1];
		cout << "Year: ";
		cin >> Age.arr[2];
	}

	void AgeShow()
	{
		cout << "Age: " << Age.ag << endl;
		cout << "Height " << Age.height << endl;
		cout << "AbobA DR: ";
		for (int i = 0; i < 3; i++)
		{
			cout << Age.arr[i] << " ";
		}
		cout << endl << endl;
	}
};

struct Bobus
{
	age Age;
	void In()
	{
		cout << "Age: ";
		cin >> Age.ag;
		cout << "Height: ";
		cin >> Age.height;

		cout << "Day: ";
		cin >> Age.arr[0];
		cout << "Month: ";
		cin >> Age.arr[1];
		cout << "Year: ";
		cin >> Age.arr[2];
	}

	void AgeShow()
	{
		cout << "Age: " << Age.ag << endl;
		cout << "Height " << Age.height << endl;
		cout << "Nancy DR: ";
		for (int i = 0; i < 3; i++)
		{
			cout << Age.arr[i] << " ";
		}
		cout << endl << endl;
	}
};

struct Abiba
{
	age Age;
	void In()
	{
		cout << "Age: ";
		cin >> Age.ag;
		cout << "Height: ";
		cin >> Age.height;

		cout << "Day: ";
		cin >> Age.arr[0];
		cout << "Month: ";
		cin >> Age.arr[1];
		cout << "Year: ";
		cin >> Age.arr[2];
	}

	void AgeShow()
	{
		cout << "Age: " << Age.ag << endl;
		cout << "Height " << Age.height << endl;
		cout << "Nancy DR: ";
		for (int i = 0; i < 3; i++)
		{
			cout << Age.arr[i] << " ";
		}
		cout << endl << endl;
	}
};

struct Biobab
{
	age Age;
	void In()
	{
		cout << "Age: ";
		cin >> Age.ag;
		cout << "Height: ";
		cin >> Age.height;

		cout << "Day: ";
		cin >> Age.arr[0];
		cout << "Month: ";
		cin >> Age.arr[1];
		cout << "Year: ";
		cin >> Age.arr[2];
	}

	void AgeShow()
	{
		cout << "Age: " << Age.ag << endl;
		cout << "Height " << Age.height << endl;
		cout << "Nancy DR: ";
		for (int i = 0; i < 3; i++)
		{
			cout << Age.arr[i] << " ";
		}
		cout << endl << endl;
	}
};

template<typename A>
void SaveToFile(A obj, string filemame)
{
	fstream file(filemame, ios::out | ios::binary);
	if (file.is_open())
	{
		file.write((char*)&obj, sizeof(A));
		cout << "Saved!" << endl;

	}
	else
	{
		cout << "Error" << endl;
	}
}

template<typename A>
void LoadFormFile(A obj, string filemame)
{
	fstream file(filemame, ios::out | ios::binary);
	if (file.is_open())
	{
		file.read((char*)&obj, sizeof(A));
		cout << "Load!" << endl;

	}
	else
	{
		cout << "Error" << endl;
	}
}

int main()
{
	age Age;
	Aboba one;
	one.In();
	one.AgeShow();
	Bobus two;
	two.In();
	two.AgeShow();
	Abiba three;
	three.In();
	three.AgeShow();
	Biobab four;
	four.In();
	four.AgeShow();

	LoadFormFile<Aboba>(one, "Ceha.bin");
	LoadFormFile<Bobus>(two, "Nancy.bin");
	LoadFormFile<Abiba>(three, "Ann.bin");
	LoadFormFile<Biobab>(four, "Albi.bin");
	SaveToFile<Aboba>(one, "Ceha.bin");
	SaveToFile<Bobus>(two, "Nancy.bin");
	SaveToFile<Abiba>(three, "Ann.bin");
	SaveToFile<Biobab>(four, "Albi.bin");
}
