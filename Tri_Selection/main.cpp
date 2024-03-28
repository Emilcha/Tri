#include <iostream>

static int tri_selection(int* const &data, const int sz)
{
	for (int i = 0; i <= sz - 2; i++)
	{
		int min = i;
		for (int j = i + 1; j <= sz - 1; j++)
		{
			if (data[j] < data[min]) { min = j; };
		}
		if (min != i) 
		{
			int temp = data[min];
			data[min] = data[i];
			data[i] = temp;
		}
	}
	return 0;
}

static void print_list(int* const& data, const int sz)
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
	tri_selection(mes_donnees, 13);
	print_list(mes_donnees, 13);
	return 0;
}