#include <iostream>

using namespace std;

int Pocket[45] = { 0, };


void Initialize();
void Shuffle();
void Pick();


int main()
{
	Initialize();

	Shuffle();

	Pick();

	return 0;
}

void Initialize()
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 45; ++i)
	{
		Pocket[i] = i + 1;
	}
}

void Shuffle()
{
	//Shuffle,, юсюг(rand)
//[][][][]
	for (int i = 0; i < 45 * 10; ++i)
	{
		int FirstIndex = rand() % 45;
		int SecondIndex = rand() % 45;

		int Temp = Pocket[FirstIndex];
		Pocket[FirstIndex] = Pocket[SecondIndex];
		Pocket[SecondIndex] = Temp;
	}
}

void Pick()
{
	//Pick
	for (int i = 0; i < 6; ++i)
	{
		cout << Pocket[i] << ", ";
	}
}