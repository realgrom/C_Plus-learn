#include<iostream>
using namespace std;
int main(){
    const int ArSize=20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name,ArSize);
    cout << name;
    return 0;
}