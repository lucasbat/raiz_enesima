/* 

Programa em C++ que calcula a raiz enésima de um número;

*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){

	float b,e,ee;

	cout<<"\nDigite a base: ";
	cin>>b;
	cout<<"\nDigite o expoente ";
	cin>>e;
	ee=1/(e*1.0);
	cout<<"\nA raiz "<<e<<" de "<<b<< " é "<<pow(b,ee);

	cout<<"\n\n";
	return 0;

}
