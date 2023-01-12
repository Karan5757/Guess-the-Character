#include <iostream>
using namespace std;

int main(){
 
 char c;
  cout<<"Enter the Character: ";
  cin>>c;
  if(c>=65 && c<=90){
    cout<<"It's a Upper case";
      }
  else if(c>=97 && c<=122){
    cout<<"It's a lower case";
  }
  else if(c>=48 && c<=57){
    cout<<"It's numeric";
  }
  else{
    cout<<"Invalid character";
  }
  }
