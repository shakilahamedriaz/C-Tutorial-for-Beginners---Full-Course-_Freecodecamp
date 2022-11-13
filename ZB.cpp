//2D arrays.....
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numberGrid[3][2] ={

    { 1, 2},{ 3, 4},{ 5, 6} //three rows and 2 column

    };

     for(int i=0; i<3; i++){

        for(int j=0; j<2; j++){

            cout<<numberGrid[i][j]<<endl;
        }
     }


    return 0;
}

