#include<iostream>
using namespace std;

void suma(int *, int*, int *);

int main(){
    int x, y, z;
    cout<<"Ingresa el primer sumando: "; cin>>x;
    cout<<"Ingresa el segundo sumando: "; cin>>y;
    suma(&x, &y, &z);
    cout<<"El resultado de la suma es: "<<z;
    return 0;
}

void suma(int *a, int *b, int *c){
    *c = *a + *b;
}

int*resta(int *p, int *q){
    int *r;
    cout<<"Direccion apuntada por r: "<<r<<endl;
    *r = *p - *q;
    return r;
}
