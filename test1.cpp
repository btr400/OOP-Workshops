#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	char name10[10] = "Hello";

	//cout<<"|" << setw(30);

	//cout.width(20);
	//cout<<'|'<<name10<<left<<'|'<<endl;

	//cout.width(20);
	//cout<<'|'<<name10<<right<<'|'<<endl;

	//cout.width(20);
	//cout<<'|'<<name10<<left<<'|'<<endl;

	cout.width(2);
	cout<<left<<'|';
	cout.width(20);
	cout<<left<<name10;
	cout<<right<<name10;
	cout<<'|'<<endl;

	return 0;

}

