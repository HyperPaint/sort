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
	int value;
	int index;
	for(int i = 1; i < size_; i++)
	{
		value = array_[i];
		index = i;
		while((index > 0) && (array_[index - 1] > value))
		{
			array_[index] = array_[index - 1];
			index--;
		}
		array_[index] = value;
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
