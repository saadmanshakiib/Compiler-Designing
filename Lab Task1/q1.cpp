#include<iostream>
using namespace std;
int main(){
    int a[] = {11,21,23,21,56,743,11}; 
    int s = 0;
    for(int x : a) s+= x;
    cout<<s<<endl;
}