#include<iostream>
using namespace std;
int main(){
    string ex = "a = b * c + d / e - f";
    cout<<"Expression : "<<ex;
    cout<<"\nTemp1 = b * c"<<endl;
    cout<<"Temp 2 = d / e"<<endl;
    cout<<"Temp3 = Temp1 + Temp2"<<endl;
    cout<<"a = Temp3 - f\n"<<endl;

    cout<<"Optimized Version : "<<endl;
    cout<<"Temp1 = b * c"<<endl;
    cout<<"Temp2 = Temp1 + d/e"<<endl;
    cout<<"a = Temp2 - f"<<endl;

}