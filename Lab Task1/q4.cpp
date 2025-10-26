#include<iostream>
using namespace std;
int main(){
   string input;
   cout<<"Enter Arithmatic Expression"<<endl;
   cin>>input;
   for(char c : input){
    if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%'){
        cout<<c<<" ";
        }
   }

}