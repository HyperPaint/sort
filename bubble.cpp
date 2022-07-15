#include <iostream>

using namespace std;

void printArray(const int* array_, int size_)
{
	for(int i = 0; i < size_; i++)
	{
		cout << array_[i] << " ";
	}
	cout << endl;
}

void sort(int* array_, int size_)
{
	for(int i = 0; i <= size_; i++)
	{
		for(int j = size_; j > i; j--)
		{
			if(array_[j - 1] > array_[j])
			{
				swap(array_[j - 1], array_[j]);
			}
		}
	}
}

int main()
{
	const int size = 4;
	int array[size] = {5,7,9,6};
	printArray(array, size);
	sort(array, size);
	printArray(array, size);
	return 0;	
}
