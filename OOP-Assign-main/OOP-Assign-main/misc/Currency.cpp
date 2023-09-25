//Write a C++ program to swap numbers using friend function.
#include<iostream>
using namespace std;
class Swap {
	int a,b;
	public:
		void get(){
			cout<<"enter value"<<endl;
			cin>>a>>b;
      cout<<"value of a before "<<a<<"value of b after "<<b<<endl;
		}
		void dis(){
			cout<<"value of a after "<<a<<"value of b after "<<b<<endl;
		}
		friend void swapno(Swap *x);
	};
	 void swapno(Swap *x){
		int c;
		c=x->a;
		x->a=x->b;
		x->b=c;
		
	}
	int main(){
		Swap x;
		x.get();
		swapno(&x);
		x.dis();
	}