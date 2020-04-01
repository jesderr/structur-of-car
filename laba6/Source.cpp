#include <iostream>

struct automobile
{
	std::string mark;         //марка
	int year_of_issue;		  //год выпуска
	std::string color;		  //цвет
	int run;				  // пробег
	double power;			  //мощность
	std::string transmission; //кпп
	std::string body_type;	  //тип кузова
};


void search(automobile*array, int n)
{
	int f;
	int min=array[0].run;
	for (int i = 0; i < n; i++)
	{
		if (array[i].run < min)
		{
			f = i;
		}
	}
	std::cout << "Brand - " << array[f].mark << " and transmission - " << array[f].transmission << " of the car with lowest mileage" << std::endl;
}

int main()
{
	int n;
	std::cout << "Enter the number of cars to sell" << std::endl;
	std::cin >> n;

	automobile* array = new automobile[n];

	for (int i = 0; i < n; i++)
	{
		std::cout << "Enter brand"  << std::endl;
		std::cin >> array[i].mark;
		std::cout << "Enter year of issue"  << std::endl;
		std::cin >> array[i].year_of_issue;
		std::cout << "Enter color"  << std::endl;
		std::cin >> array[i].color;
		std::cout << "Enter run"  << std::endl;
		std::cin >> array[i].run;
		std::cout << "Enter power"  << std::endl;
		std::cin >> array[i].power;
		std::cout << "Enter transmission"  << std::endl;
		std::cin >> array[i].transmission;
		std::cout << "Enter body type"  << std::endl;
		std::cin >> array[i].body_type;
	}
	std::cout << std::endl;

	search(array, n);

	delete[] array;
	
	return 0;
}