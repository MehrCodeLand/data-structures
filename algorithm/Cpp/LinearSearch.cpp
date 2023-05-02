#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {1,2,3,4,5};
    int userNumber = 2;

    string message = "";
    bool isFind = false;
    int i = 0 ;
    
    for(i ; i < 5 ; i++)
    {
        if(numbers[i] == userNumber){
            message = "we found it";
            cout << message <<  endl;
            cout << "index:" << i << endl;

            isFind = true;
            break;
        }
    }
    
    if(isFind == false){
        message = "sorry we can find your number!";
        cout << message << endl;
    }

}