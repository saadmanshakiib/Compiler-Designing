#include<iostream>
using namespace std;
int main(){
    string in;
    cout<<"Enter String : "<<endl;
    cin>>in;
    char state = 'A';
    for(char x : in){
        if(state == 'A'){
            state = (x == '0') ? 'A' : 'B';// if the char contains 0 set state = A
        }
        else if(state == 'B'){
            state = (x == '0') ? 'A' : 'B'; // if the char contains 1 set state = B
        }
    }
    if(state == 'B') cout<<"Accepted (Ends With 1)"<<endl;
    else cout<<"Rejected (Ends With 0)"<<endl;
}
