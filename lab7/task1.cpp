#include <iostream>
using namespace std;


void ascSort(int num1,int num2,int num3){
    if ((num1 < num2 )&& (num1 < num3)){
        if (num2< num3){
            cout<<num1<< " "<<num2 <<" "<<num3;

        }
        else {
            cout<<num1<<" "<<num3<<" "<<num2;
        }
    }
    else if ((num2< num1)&& (num2< num3)) {
        if (num1 < num3){
            cout<<num2<<" "<<num1 <<" "<<num3;
        }
        else{
            cout<<num2<<" "<<num3<<" "<<num1;

        }

    }
    else if ((num3 <num1)&& (num3< num2)){

        if (num1< num2){
            cout<<num3<<" "<<num1<<" "<< num2;
        }
        else{
            cout<<num3<<" "<<num2<<" "<< num1;
        }
    }
    

}


int main(){
    int num1,num2,num3;
    int flag;
    do{

        cout<<"enter 3 numbers: \n";
        cin>>num1>> num2>>num3;
        ascSort(num1, num2, num3);
        cout<<"\ndo u wanna try again?(1 for yes, 0 for no): ";
        cin>>flag;
        if (flag==0)
        cout<<"goodbye!";

    }
    while(flag==1);


}