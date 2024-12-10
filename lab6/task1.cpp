#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int x1, x2, y1,y2, result, flag;

    do{
    cout<<"enter the first point(x1,y1): "<<endl;
    cin>> x1>>y1;

    cout<<"enter the second point (x2,y2)"<<endl;
    cin>>x2>>y2;
    result=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<"the distance between the two points is "<<result<<endl;
    cout<<"do you wanna try again? 1 for yes 0 for no \n";
    cin>>flag;
    if (flag ==0)
    cout<<"end of program!";
    
    }while(flag == 1);
}
//finished in 8.40 sec 