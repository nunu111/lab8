#include<iostream>
using namespace std;

char before(char x){
	if (x-1 == '@')
	{
		return '['-1;
	}
	if (x-1 <= 'Z' && x-1 > '@' )
	{
		return x-1;
	}
	return '0';
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
