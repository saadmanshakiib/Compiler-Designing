#include<iostream>
#include<fstream>
using namespace std;
int main(){
  int mark;string name;
  cout<<"Enter Name : "<<endl;
  getline(cin,name);
  cout<<"Enter the Mark : "<<endl;
  cin>>mark;

    ofstream writefile("t.txt");
    writefile<<name<<endl;
    writefile<<mark<<endl;
    writefile.close();

    ifstream readfile("t.txt");
        
    int readMark;string readName;

    getline(readfile,readName);
    readfile>> readMark;
    readfile.close();

    cout<<"Reading From File : "<<readName<<endl;
    cout<<"Mark : "<<readMark<<endl;
    

}