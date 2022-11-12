//building a Mad Libs Game.
#include<bits/stdc++.h>
using namespace std;

int main(){

string color, pluralNoun, Celebrity;

cout<< "Enter a color : ";
getline(cin,color);
cout<< "Enter pluralNOun : ";
getline(cin,pluralNoun);
cout<< "Enter celebraty : ";
getline (cin,Celebrity);


cout<<endl;

cout<< "Roses are "<<color<<endl;
cout<< pluralNoun<<" are blue"<<endl;
cout<< "I Love "<<Celebrity<<endl;
return 0;
}
