#include<iostream>

using namespace std;

int main(){

	int len,wid;
	cout<<"Enter a length and width of a rectangle: ";
	cin>>len>>wid;
	int per = 2*(len+wid);
	int area = len * wid;
	cout<<"Area is "<< area << endl;
	cout<<"Perimeter is " << per << endl;
}
