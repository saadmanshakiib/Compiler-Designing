#include <iostream>
#include <string>
using namespace std;
int main() {
    string obj1[2] = {"add", "subtract"};
    string obj2[2] = {"multiply", "divide"};

    cout<<"Object File 1:"<<endl;
    for(int i = 0; i < 2; i++){
        cout << " - " << obj1[i]<<endl;
    }
    cout << "Object File 2 :"<<endl;
    for(int i = 0; i < 2; i++){
        cout << " - " << obj2[i]<<endl;
    }

    cout<<"Executable :"<<endl;
    for(int i = 0; i < 2; i++){
        cout << " - " << obj1[i] << "()"<<endl;
    }
    for (int i = 0; i < 2; i++) {
        cout << " - " << obj2[i] << "()\n";
    }

    return 0;
}
