#include<iostream>
#include<cmath>
using namespace std;
void addition(int a, int b){
	cout<<"Addition is:"<<a+b<<endl;	
}
void subtraction(int a, int b){
	cout<<"Subtraction is:"<<a-b<<endl;
}
void division(int a , int b){
	cout<<"Division is:"<<a/b<<endl;
}
void multiplication(int a, int b){
	cout<<"Multiplication is:"<<a*b<<endl;
}
	void mod(int a, int b){
	cout<<"Module is:"<<a%b<<endl;
}
void sqrt(int a, int b){
	cout<<"Square root of a:"<<sqrt(a)<<endl;
	cout<<"Square of root of b:"<<sqrt(b)<<endl;
}
void logar(int a, int b){
	cout<<"Logarithm of a:"<<log(a)<<endl;
	cout<<"Logarithm of b:"<<log(b)<<endl;
}
int main()
{
	int a;
	int b;
	cin>>a>>b;
	char c;
	cout<<"Enter a operator:";
	cin>>c;
	addition(a,b);
	subtraction(a,b);
	division(a,b);
	multiplication(a,b);
	mod(a,b);
	sqrt(a,b);
	logar(a,b);
	}

