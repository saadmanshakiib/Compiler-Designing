#include<iostream>
#include<stack>
using namespace std;
int main(){
   while(1){
     string in;
    cout<<"Enter String : "<<endl;
    cin>>in;
stack<char> s;

for(char c : in){
    if(c == '(') s.push(c);
    else if(c == ')') {
        if(s.empty()){
            cout<<"Rejcted"<<endl;
        }
        s.pop();
    }
}

if(s.empty()) cout<<"Accepted"<<endl;
else cout<<"Rejected"<<endl;
   }


}

//////
/*
user input = a+(b-v)*c
*/