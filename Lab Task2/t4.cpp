#include<iostream>
using namespace std;
int main(){
      string s;cin>>s;
    if(s.length()>3){
        cout<<"Invalid";return 0;
    }
    else if(s[0]=='+'&& s[1] =='+'){
            cout<<"valid"<<endl;
            return 0;
        }
        else if((s[1]=='+' && s[2] == '+')){
            cout<<"valid"<<endl;
            return 0;
        }
          else if(s[0]=='-'&& s[1] =='-'){
            cout<<"valid"<<endl;
            return 0;
        }
        else if((s[1]=='-' && s[2] == '-')){
            cout<<"valid"<<endl;
            return 0;
        }
        
    
    else{
        cout<<"Invalid"<<endl;
    }
  }
    
