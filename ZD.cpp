//Pointers...= kind of memory address

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age= 22;
    int *pAge= &age;

    double gpa= 3.70;
    double *pGpa= &gpa;

    string name= "Shakil";
    string *pName= &name;


    cout<< pAge<<endl;

    cout<< &gpa<<endl;

    cout<< *&gpa<<endl;



    return 0;
}

