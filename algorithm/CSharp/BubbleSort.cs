public void BubbleSort(int[] numbers)
{

	int i, j;

	for( i = 0; i < numbers.Length - 1; ++i)
	{
		for(j = 0; j < numbers.Length - i -1; ++j)
		{
			if (numbers[j] > numbers[j + 1])
			{
				int temp = numbers[j + 1];
				numbers[j + 1] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
}