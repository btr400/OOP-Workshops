#include <iostream>
#include <iomanip>
using namespace std;

int main(){

        char name10[10] = "Hello";

        cout.width(2);
        cout<<left<<'|';

        cout.width(20);
        cout<<left<<name10;

        cout<<right<<name10;
        cout<<right<<name10;
        cout<<right<<name10;
        cout<<'|'<<endl;
        cout<<'|'<<endl;
        cout<<'|'<<endl;

}

