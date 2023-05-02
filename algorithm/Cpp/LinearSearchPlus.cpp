#include "iostream"
using namespace std;

/*
    MehrCodeLand
    - - - - - - 
    Linear Search
    Time Comlexity : O(n)
*/


int LinearSearch(int numbers[], int length, int number);


int main()
{

    int numbers[5] = {1,2,3,4,5};
    int length = 5 , number = 3;
    string message = "";

    int result = LinearSearch( numbers, length , number);

    if( result > 0 ){
        message = "index:";
        cout << message << result << endl;
    }else{
        message = "sorry we can find your number";
        cout << message << endl;
    }

}

int LinearSearch(int numbers[], int length, int number) {

    for (int i = 0; i < length; i++)
    {
        if (numbers[i] == number) {
            return i;
        }
    }

    return -10;
}