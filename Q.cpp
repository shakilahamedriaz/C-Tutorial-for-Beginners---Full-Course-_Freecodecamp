#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void getMax(int a, int b, int c)
{
    int result;

    if(a>b && a>c){

        result= a;
    }
    else if(b>a && b>c){

        result =b;
    }
    else{

        result=c;
    }

    return result;
}

int main()
{


   cout<< getMax(40,60,80);


    return 0;
}
