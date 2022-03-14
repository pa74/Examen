#include<iostream>
#include<conio.h>
using namespace std;

struct nodo{
	int dato;
	nodo *siguiente;
};

//prototipo de funcion
void agregarpila(nodo *&,int);
void sacarpila(nodo *&,int &);

int main (){
	nodo *pila = NULL;
	int dato;
	char rpt;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		agregarpila(pila,dato);
		
		cout<<"\ndesea agregar otro elemento a PILA(s/n): ";
		cin>>rpt;
	}while((rpt=='s')||(rpt=='s'));
	
	cout<<"\nsacando todos los elementos de la pila: ";
	while(pila != NULL){//mientras no sea el final de la pila
		sacarpila(pila,dato);
		if(pila  != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<" . ";
		}
	}


	getch();
	return 0;
}

void agregarpila(nodo *&pila,int n){
	nodo *nuevo_nodo = new nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\telemento "<<n<<" ha sido agregado a pila correctamente";
}
void sacarpila(nodo *&pila,int &n){
	nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
