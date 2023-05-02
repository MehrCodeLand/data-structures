

#include <iostream>
using namespace std;


/*
	MehrCodeLand
	- - - - - -
	Binary Search
	Time Comlexity : O( Logn )
*/




int BinarySearch(int numbers[], int x, int l, int r);

int main()
{
	int numbers[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int number = 4;
	int lentgh = sizeof(numbers) / sizeof(numbers[0]);

	int result = BinarySearch(numbers,9, 0, lentgh - 1);
	
	if (result < 0) {
		cout << "we cant find this number" << endl ;
	}
	else
	{
		cout << "INDEX:" << result << endl;
	}



}


int BinarySearch(int numbers[], int number, int left, int right)
{
	while (left <= right) {
		int index = left + (right - left) / 2;
		int xx = numbers[2];
		// we found number!
		if (numbers[index] == number)
			return index;

		// if number smaller
		if (numbers[index] > number)
			right = index - 1;

		// if number bigger
		else
			left = index + 1;

	}

	return -10;
}
