#include <iostream>
using namespace std;
int main(){
    int c1 ,c2,c3;
    

    cout<<"Enter the 1st course grade: " << endl;
    cin>> c1;
    cout<<"enter the 2nd course grade: " << endl;
    cin>> c2;
    cout<<"Enter the 3rd course grade: "<< endl;
    cin>> c3;
    
    int avrg = (c1 + c2 + c3)/3;
    

    if (avrg>=90){

        cout<< "Your grade is A";
    }

    if (avrg>= 70 && avrg <90){
        cout<<"Your grade is B";

    }


    if (avrg >= 50 && avrg < 70){

        cout<<"Your grade is C";

    }

    if (avrg < 50){
        cout<< "Your grade is F";
    }



}