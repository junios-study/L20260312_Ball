#include <iostream>

using namespace std;


int* Initialize(int* Pocket, int Size);
void Shuffle(int* Pocket, int Size);
void Pick(int* Pocket, int Size, int PickCount);


int main()
{
	int Size = 0;
	int PickCount = 0;

	cin >> Size;
	cin >> PickCount;

	int* Pocket = nullptr;

	Pocket = Initialize(Pocket, Size);

	Shuffle(Pocket, Size);

	Pick(Pocket, Size, PickCount);

	//delete Pocket;
	if (Pocket)
	{
		delete[] Pocket;
		Pocket = nullptr;
	}

	return 0;
}

int* Initialize(int* Pocket, int Size)
{
	srand((unsigned int)time(NULL));

	Pocket = new int[Size];

	for (int i = 0; i < Size; ++i)
	{
		Pocket[i] = i + 1;
	}

	return Pocket;
}

void Shuffle(int* Pocket, int Size)
{
	//Shuffle,, юсюг(rand)
//[][][][]
	for (int i = 0; i < Size * 10; ++i)
	{
		int FirstIndex = rand() % Size;
		int SecondIndex = rand() % Size;

		int Temp = Pocket[FirstIndex];
		*(Pocket+FirstIndex) = Pocket[SecondIndex];
		Pocket[SecondIndex] = Temp;
	}
}

void Pick(int* Pocket, int Size, int PickCount)
{
	if (Size < PickCount)
	{
		return;
	}

	//Pick
	for (int i = 0; i < PickCount; ++i)
	{
		cout << Pocket[i] << ", ";
	}
}