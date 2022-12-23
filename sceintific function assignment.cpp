#include<iostream>
#include<cmath>
using namespace std;
void addition(int a, int b){
	cout<<"the sum is:"<<a+b<<endl;	
}
void subtraction(int a, int b){
	cout<<"the subtraction is:"<<a-b<<endl;
}
void division(int a , int b){
	cout<<"the division is:"<<a/b<<endl;
}
void multiplication(int a, int b){
	cout<<"the multiplication is:"<<a*b<<endl;
	}
	void mod(int a, int b){
		cout<<"the mode is:"<<a%b<<endl;
	}
	void square(int a, int b){
		cout<<sqrt(a)<<endl;
		cout<<sqrt(b)<<endl;
	}
	void logar(int a, int b){
		cout<<log(a)<<endl;
		cout<<log(b)<<endl;
	}
int main()
{
	int a;
	int b;
	cin>>a>>b;
	char c;
	cout<<"Enter a operator:";
	cin>>c;
	if(c=='+')
	addition(a,b);
	else if(c=='-')
	subtraction(a,b);
	else if(c=='/')
	division(a,b);
	else if (c=='*')
	multiplication(a,b);
	else if(c=='%')
	mod(a,b);
	else if(c=='s')
	square(a,b);
	else if(c=='l')
	logar(a,b);
	else
	cout<<"Invalid operator:"<<endl;
	return 0;
	
}

