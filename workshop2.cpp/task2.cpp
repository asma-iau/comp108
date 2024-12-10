#include <iostream>
using namespace std;

int main(){
    int scores[5]={78, 90,85,92, 88};
    int i=0;

    int sum = 0;

    for (int score : scores){
        sum += score;
    }


    cout<<"the sum of the array elements is: "<<sum<<endl;



    double avrg = sum / 5.0;
    cout<<"the average of the highest array elemnt is: "<< avrg <<endl;


    int maxval=scores[0];
    for (i= 0; i< 5; i++){

        if (scores[i] > maxval){
            maxval = scores[i];
        }
    }
    cout<<"the highest value in the array is: "<< maxval<<endl;

    return 0;

}