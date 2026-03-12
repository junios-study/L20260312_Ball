#include <iostream>



using namespace std;

typedef unsigned char			uint8;

//c언어 int 사이즈 달라져서

int main()
{
	int Pocket[45] = { 0, };

	srand((unsigned int)time(NULL));

	//Initialize
	for (int i = 0; i < 45; ++i)
	{
		Pocket[i] = i + 1;
	}

	//Shuffle,, 임의(rand)
	//[][][][]
	for (int i = 0; i < 45 * 10; ++i)
	{
		int FirstIndex = rand() % 45;
		int SecondIndex = rand() % 45;

		int Temp = Pocket[FirstIndex];
		Pocket[FirstIndex] = Pocket[SecondIndex];
		Pocket[SecondIndex] = Temp;
	}

	//Pick
	for (int i = 0; i < 6; ++i)
	{
		cout << Pocket[i] << ", ";
	}



	return 0;
}