#include <iostream>
using namespace std;
int main(){

    int age, height, weight;
    char gender;
    

    cout<<"How old are you?"<< endl;
    cin>>age;
    
    cout<<"How tall are you?"<< endl;
    cin>> height;

    cout<<"How much do you weigh?"<< endl;
    cin>> weight;

    cout<<"Are you a female or a male (f or m)?"<<endl;
    cin>> gender;

    float cals = 6.25* height + 10*weight - age *5;

    if (gender =='f' || gender == 'F'){
        cals= cals -161;
        cout<<"calories: "<<cals <<endl;

    }
    if (gender =='m' || gender =='M' ){
        cals = cals +5;

        cout<<"calories: "<< cals<<endl;
    }



}

