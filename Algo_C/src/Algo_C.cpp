//============================================================================
// Name        : Algo_C.cpp
// Author      : Mcoder
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void typechec();
void compoenttype();

/*int main() {
	int sum = 0, value = 0;
	//typechec();
	compoenttype();
	// read until end-of-file, calculating a running total of all values read
	while (std::cin >> value)
	sum += value; // equivalent to sum = sum + value
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}*/


void typechec(){
	unsigned int s=0;
	cout<<s;
	char p=-65;
	cout<<p;
	bool b=1;
	cout<<b;
	unsigned ul=42;
	unsigned u2=10;
	cout<<u2-ul;
}


void compoenttype(){
	//pointer.
	int s=10;
	int &p=s;
	cout<<p;
	s=15;
	cout<<p++;

	int val=45;
	int *ps=&val;
	cout<<*ps;   //* print value of pointed by variable.
	cout<<val;
	*ps=5;
	cout<<*ps;   //* print value of pointed by variable.
	cout<<val;



}
