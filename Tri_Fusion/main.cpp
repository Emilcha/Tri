#include <iostream>


// I gave up on this one (for now).


const int* tri_fusion(int* const& data, const int sz)
{
	if (sz <= 1) { return data; }
	else { return fusion(); }
	return 0;
}

const int* fusion(
	int* const& dataHalf1, const int sz1,
	int* const& dataHalf2, const int sz2
) {
	if (sz1 == 0) { return dataHalf2; }
	if (sz2 == 0) { return dataHalf1; }
	if (dataHalf1[0] <= dataHalf2[0])
	{
		int* tempConcat = new int[sz2 + 1];


	} else {

	}
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
	tri_fusion(mes_donnees, 13);
	print_list(mes_donnees, 13);
	return 0;
}