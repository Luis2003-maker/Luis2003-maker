#include<iostream>

using namespace std;
    int b;
    int ep;
    int P=0;

int main(){
    cout << "Calcular la potencia: " << endl;
    cout << "Ingrese la base ";
    cin >> b;
    cout << "Ingrese el exponente ";
    cin >> ep;
int x=1;
while (x<ep){
	if (P<b){
		P=b*b;
	}
	else{
		P=P*b;
		}
	x++;
	}
cout << "El resultado de la potencia es: " << P << endl;
return 0;
}
