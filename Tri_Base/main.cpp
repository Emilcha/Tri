#include <iostream>

int tri_(int* const& data, const int sz)
{
	
	return 0;
}

void print_list(int* const& data, const int sz)
{
	for (int i = 0; i < sz; i++)
	{
		std::cout << data[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int mes_donnees[13]{ 5,2,20,4,11,16,6,25,2,5,7,9,10 };
	print_list(mes_donnees, 13);
	tri_(mes_donnees, 13);
	print_list(mes_donnees, 13);
	return 0;
}