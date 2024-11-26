#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int checking(int x, int y){
    if (y == x){
        return 1;
    }
    else if (y > x){
        return 0;
    }
    else {
    return -1;}
    
}
int main(){
    int rand_number,guess, result;
    srand(time(0));
    rand_number = rand() % 100 + 1;



    do {
        cout<<"enter your guess(1 - 100): ";
        cin>>guess;

        result = checking(rand_number,guess);
        if (result == 1){
            cout<<"Congratulations! You guessed the number!"<<endl;
        }
        else if (result == 0){
            cout<<"Your guess is too high! try again "<<endl;
        }
        else {
            cout<<"Your guess is too low! try again "<<endl;
            }
    }while(result != 1);
    return 0;
}
