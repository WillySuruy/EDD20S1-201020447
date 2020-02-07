/*
	lista simple que almacena informacion de estudiante
*/

#include <iostream>
#include<stdlib.h>
#include<string>

using namespace std;

//estructura
struct Nodo
{
	int id;
	int carne;
	string nombre;
	Nodo *siguiente;
	
};
//prototipos
void insertarLista(Nodo *&lista, int id,int carn, string nom );
void mostrarLista(Nodo *lista);
void BuscarenLista(Nodo *lista, int id);
void menu();

Nodo *lista = NULL;
		int ids, cat;
		string nombre; 
int main(int argc, char const *argv[])
{
	menu();		


	return 0;
}

void menu(){
	int opc, dato;
	do{
cout<<"\n:::::MENU::::"<<endl;
cout<<"1. Insertar a lista"<<endl;
cout<<"2. Mostrar lista"<<endl;
cout<<"3. Buscar en  lista"<<endl;
cout<<"4. Eliminir nodo de lista"<<endl;
cout<<"5.Salir";
cin>>opc;

	switch (opc){
		case 1: 
			cout<<"ingrese id:";
			cin>>ids;
			cout<<"ingrese carnet:";
			cin>>cat;
			cout<<"ingrese nombre:";
			cin>>nombre;
			insertarLista(lista, ids, cat,nombre);
			break;
		case 2: 
			mostrarLista(lista);
			break;
		case 3:
			cout<<"ingrese el ID  a Buscar:";
			cin<<dato;
			BuscarenLista(lista, dato);
	}

	}while(opc!=5);

}

void insertarLista(Nodo *&lista, int n_id,int carn, string nom ){

	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->id = n_id;
	nuevo_nodo->carne = carn;
	nuevo_nodo-> nombre = nom;

	Nodo *aux1= lista;
	Nodo *aux2;

		if(lista ==aux1){
			lista = nuevo_nodo;
		}
		nuevo_nodo->siguiente=aux1;
	
}
void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual =lista;
	while(actual!=NULL){
		cout<<actual->id<<" ";
		cout<<actual->carne<<" ";
		cout<<actual->nombre<<"-> ";
		actual= actual->siguiente;
	}
}
void BuscarenLista(Nodo *lista, int idb){
	bool encontrado= false;

	Nodo *actual = new Nodo();
	actual = lsita;

	while((actual !=NULL) && (actual->id <= idb)) {
		if(actual -> id == idb){
			encontrado=true;
		}
		actual = actual->siguiente;
	}

if (encontrado == true )
{
	cout<<"Si se a encontrado en la lista el nodo buscado ";
}else{

	cout<<"El id buscado no se encuentra en la lista"p;
	}

}