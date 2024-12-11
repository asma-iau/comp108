#include <iostream>
#include <cstring>
using namespace std;
int main(){
    const char fav_fruit[]= "kiwi";
    char guess[50];

    cout<<"can u guess my favorite fruit? :P"<<endl;

     for (int i = 1; i <= 10 ; ++i){
            cout<<"Guess #"<<i <<endl;
            cin>>guess;
            if (strcmp(guess, fav_fruit)== 0){
            cout<<"---------u guessed it right!!-----------"<<endl; 
            break;
        }
        }
       cout <<"asma alshamrani";
   

    
}