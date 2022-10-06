#include<iostream>
using namespace std:
	void intercambio(int *, int *);
	int main(){
		int num1, num2;
		
		cout<<"Digita el primer numero: ";
		cin>>num1;
		cout<<"Digita el segundo numero: ";
		cin>>num2;
		intercambio(&num1, &num2);
		cout<<"Intercambio de valores: "<<endl
		cout<<"Primer numero: "<<num1<<endl;
		cout<<"Segundo numero: "<<num2<<endl;
		
		return 0;
	}
	void intercambio(int *n1, int *n2){
		int aux;
		
		aux = *n1;
		*n1 = *n2;
		*n2 = aux;
	}