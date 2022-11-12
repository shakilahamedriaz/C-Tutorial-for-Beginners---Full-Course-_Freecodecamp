#include<bits/stdc++.h>
using namespace std;
int main(){

int secretNum= 5;
int guess;


do{
    cout<< "Enter guess : "<<endl;
    cin>>guess;

}
while(secretNum !=guess);

cout<< "YOU WIN"<<endl;


return 0;
}
