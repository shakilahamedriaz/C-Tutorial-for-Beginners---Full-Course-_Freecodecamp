//Functions
#include<bits/stdc++.h>
using namespace std;

void sayHi(string name, int age);

int main()
{

    sayHi("mike ", 60);
    sayHi("Shakil ", 60);
    sayHi("Asif ", 60);

    return 0;
}


void sayHi( string name,int age)
{

    cout<< "Hello "<<name<< "You are "<<age<<endl;
}
