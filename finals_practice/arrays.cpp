#include <iostream>
using namespace std;

int main (){
    int i, j;

    int score[2][3];

    for (i= 0;i<2;i++){
        for (j=0; j< 3; j++){
            score[i][j]= (i + j+ 3)* 2;
        }
       }

    for (i =0; i< 2; i++){
        for (j= 0; j< 3; j++){
            cout<<score[i][j] - j<<"\t";
        }

        cout<<endl;
    }



    }