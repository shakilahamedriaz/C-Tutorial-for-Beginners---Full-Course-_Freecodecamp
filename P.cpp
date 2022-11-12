//conditional statements...if/else
#include<bits/stdc++.h>
using namespace std;

int main()
{


    bool isMale = false;  //true...
    bool isTall = false;

    if(isMale && isTall)   // we can use or (||)
    {

        cout<< "YOU are a Male"<<endl;


    }
    else if(isMale && !isTall)
    {

        cout<< "YOU are a short male"<<endl;

    }

    else
    {

        cout<< "YOU are not Male"<<endl;

    }

    return 0;
}
