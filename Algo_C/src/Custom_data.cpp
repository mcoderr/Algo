/*
 * Custom_data.cpp
 *
 *  Created on: 03-Jun-2019
 *      Author: Nividous
 */

#include <iostream>
#include <string>

using namespace std;
void incremet();

inline void strinops(){
	string s;
	/*while(getline(cin,s)){
		if(s.empty()){
			break;
		}
	}*/
	getline(cin,s);
	cout<<"Value of "<<s;
}


struct sales_data{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

};


int main(){
	//incremet();
	//sales_data s;
	//cin>>s.bookNo;
	//cout<<s.bookNo;
	strinops();
	return 0;

}

void incremet(){

	int i=0;
	for(i=0;i<10;++i){
		cout<<i;
	}
	cout<<" After "<<i++;
	cout<<" 2 "<<i;
	cout<<" After "<<++i;
	cout<<" 3 "<<i;
}

