//game......
#include<bits/stdc++.h>
using namespace std;
int main(){
int secretNum=7;
int guess, guesscount=0;
int guessLimit = 5;
bool outOfGuesses = false;

    while (secretNum !=guess && !outOfGuesses){

        if(guesscount< guessLimit){
        cout<< "Enter guess: "<<"\n";
        cin>>guess;
        guesscount++;
    }else{

    outOfGuesses = true;

    }
    }
    if(outOfGuesses){

        cout<< "YOU lose!";
    }else

   cout<< "YOU WIN"<<endl;

return 0;
}
