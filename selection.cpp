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
	int index;
	for(int i = 0; i < size_; i++)
	{
		index = i;
		for(int j = i + 1; j < size_; j++)
		{
			if(array_[j] < array_[index])
			{
				index = j;
			}
		}
		swap(array_[i], array_[index]);
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
