#include<bits/stdc++.h>
using namespace std;

int power(int baseNUm, int pownum){
  int result = 1;

  for(int i=1; i<= pownum; i++){

    result= result*baseNUm;

  }
return result;

}


int main(){

 cout<<power(4,5)<<endl;


return 0;
}
