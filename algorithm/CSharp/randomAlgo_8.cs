public void RandomAlgo_8(int[] numbers, int n)
{
    // find Max number 
    // and find count of them 
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j + 1];
                numbers[j + 1] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    Console.WriteLine($"max number is {numbers[n - 1]}");

    for (int i = 0; i < n - 1; ++i)
    {
        var counter = 0;
        var compNum = numbers[i];
        for (int j = 0; j < n - 1; ++j)
        {
            if (compNum == numbers[j + 1])
            {
                ++counter;
            }
        }

        Console.WriteLine($"{compNum} : {counter}");
    }
}