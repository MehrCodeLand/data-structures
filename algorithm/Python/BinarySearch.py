def BinarySearch(numbers , left , right , number ):
    
    while left <= right:

        index = left + (right - left )//2;

        # good day
        if numbers[index] == number :
            return index

        # number:smaller
        elif numbers[index] > number :
            right = index - 1

        # number:bigger
        else :
            left = index + 1
            

    return -10 