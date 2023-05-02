public int BinarySearch(int[] numbers , int left , int right , int number)
{
	// to fihnd number
	int index = left + (right - left) / 2;


	// lucky day
	if (numbers[index] == number)
		return index;

	// if number smaller
	if (numbers[index] < number)
		right = index - 1;

	// else number bigger
	else
		left = index + 1;

	return -10;

}