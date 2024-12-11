#include <iostream>
#include <string>
using namespace std;
int main(){
    const string Fav_fruit= "Kiwi";
    string guess;
    

    cout<<"----the fruit guessing game----"<<endl;


    do {
        cout<<"guess my favorite fruit --> ";
        cin>> guess;
        if (guess != Fav_fruit)
        cout<<"try again ^ ^"<<endl;


    }while(guess != Fav_fruit);
    cout<<"----correct!!----"<<endl;
    cout<<"asma";

    return 0;





}