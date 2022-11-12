//Switch statement.
#include<bits/stdc++.h>
#include<cmath>
using namespace std;


string getDayofWeek(int dayNum){

string dayName;

switch(dayNum){

  case 0:
    dayName = "sunday";
    break;
  case 1:
    dayName= "monday";
    break;
  case 2:
    dayName= "tuesday";
    break;
  case 3:
    dayName= "wednesday";
    break;
  case 4:
    dayName = "Thursday";
    break;
  case 5:
    dayName= "Friday";
    break;
  case 6:
    dayName = "Saturday";
    break;

  default:
    dayName = "Invalid numer";

}



return dayName;
}


int main(){

cout<< getDayofWeek(cin>>);


return 0;
}
