#include "iostream"
using namespace std ;

void BubbleSortIncrease(int numbers[] , int n) ;
void ShowArrey(int numbers[] , int n );


int main(){

    int numbers[] = {1,23,-1,273,42};

    BubbleSortIncrease(numbers , 5 );

    
    ShowArrey(numbers , 5 );

}


void BubbleSortIncrease(int numbers[] , int n ){
    int i , j ;
    for(i = 0 ; i < n - 1 ; ++i ){
        for(j = 0 ; j < n - i - 1 ; ++j ){
            if(numbers[j] > numbers[j + 1]){
                int temp = numbers[j] ;
                numbers[j] = numbers[j + 1];
                numbers[ j+ 1 ] = temp ;
            }
        }
    }
}

void ShowArrey(int numbers[] , int n ){

    for(int i = 0 ; i < n ; ++i ){
        cout << numbers[i] << endl ;
    }
}