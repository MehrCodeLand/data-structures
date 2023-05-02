public int linearsearch(int[] numbers , int number)
{
	for (int i = 0; i < numbers.length; i++)
		if (numbers[i] == number)
			return i;

	return -10;

}