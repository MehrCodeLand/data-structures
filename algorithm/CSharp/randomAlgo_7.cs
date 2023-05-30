// Convert 10001 to 11

public int RandomAlgo_7(int number)
{
    var result = 0;
    if (number == 0)
        return result;

    var myNumber = number;
    var tenPower = 1;

    while (myNumber != 0)
    {
        var r = myNumber % 10;
        if (r == 0)
        {
            myNumber /= 10;
        }
        else
        {
            // if ( r != 0 )
            result = tenPower * r + result;
            tenPower *= 10;
            myNumber /= 10;
        }
    }

    return result;
}