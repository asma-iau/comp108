#include<iostream>
using namespace std;
int main (){
    int scores[2][3];
    int i, j;
    

    for (i= 0 ; i< 2; i++){
        for (j=0 ; j< 3; j++){
            scores[i][j]= (i + j +3)*2;

            
        }
    }
    for (i=0 ;i<2; i++){
        for (j = 0 ; j < 3; j++){
            cout<<scores[i][j]<<"\t";
        }
    }
    }