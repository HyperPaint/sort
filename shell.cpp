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

void sort(int* array_, int size_, int distance = 1)
{
	int value;
	int index;
	for(int i = 1; i < size_; i++)
	{
		value = array_[i];
		index = i;
		while((index >= distance) && (array_[index - distance] > value))
		{
			array_[index] = array_[index - distance];
			index = index - distance;
		}
		array_[index] = value;
	}
}

int main()
{
	const int size = 4;
	int array[size] = {5,7,9,6};
	printArray(array, size);
	sort(array, size, 4);
	sort(array, size, 2);
	sort(array, size);
	printArray(array, size);
	return 0;	
}
