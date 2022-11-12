#include<bits/stdc++.h>
using namespace std;
int main()
{

    string phrase = "Giraffe Academy";
    phrase[0] = 'S';

    cout<< phrase<<"\n";

    cout<< phrase.find("Academy", 0)<<endl;
      //this function is use for find the actual location of the mentioned word or sentece;

    cout<< phrase.substr(8,3)<<endl;
 //use for specific input from specific location


    return 0;

}
