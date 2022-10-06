#include <iostream>
#include <windows.h>
using namespace std;

void segundo_despues(int *a,int *b,int *c);

int main(){
	int h,m,s;
	cout<<"*****ejercicio2**"<<endl;
	
	do{
		cout<<"Ingrese la hora: ";
		cin>>h;
	}while((h<0)||(h>23));
	do{
		cout<<"Ingrese los minutos: ";
		cin>>m;
	}while((m<0)||(m>59));
	do{
		cout<<"Ingrese los segundos: ";
		cin>>s;
	}while((s<0)||(s>59));
	
	cout<<"\nLa hora actual es: "<<h<<" horas "<<m<<" minutos "<<s<<" segundos "<<endl;
	segundo_despues(&h,&m,&s);
	
	return 0;
}

void segundo_despues(int *a,int *b,int *c){
	
    if((*c==59)&&(*b!=59)){
    	cout<<"\nY la hora 1 segundo despues es: "<<*a<<" horas "<<*b+1<<" minutos "<<*c*0<<"0"<<" segundos"<<endl;
	}
	else{
		if((*b==59)&&(*c==59)&&(*a!=23)){
		cout<<"\nY la hora 1 segundo despues es: "<<*a+1<<" horas "<<*b*0<<"0"<<" minutos "<<*c*0<<"0"<<" segundos"<<endl;
		}
		else{
			if((*a==23)&&(*b==59)&&(*c==59)){
				cout<<"\nY la hora 1 segundo despues es: "<<*a*0<<"0"<<" horas "<<*b*0<<"0"<<" minutos "<<*c*0<<"0"<<" segundos"<<endl;

			}
			else{
				cout<<"\nY la hora 1 segundo despues es: "<<*a<<" horas "<<*b<<" minutos "<<*c+1<<" segundos"<<endl;

			}
		}
	}	
}