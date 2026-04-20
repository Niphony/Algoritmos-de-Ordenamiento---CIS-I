#include <iostream>

using namespace std;

struct Nodo{ //estructura de tronco con dos nodos (izq y derecha)
  int dato;
  Nodo *der;
  Nodo *izq;
};


class base{ //Clase abatracta donde se modifican los nodos invocados

  public:
int nodo(int var, int var2){

 Nodo* nodo1 = new Nodo();
 Nodo* nodo2 = new Nodo();

 //
 // int var;
 // int var2;
 //

 nodo1->dato = var;
 nodo1->der = nodo2; //como el nodo apunta al otro
 nodo1->izq = nullptr; 
 nodo2->dato = var2 ;
 nodo2->izq = nodo1;
 nodo2->der = nullptr;


    cout<<"Datos en el nodo 1: "<< nodo1->dato <<endl;
    cout<<"Datos del 2 nodo (accediendo desde el 1): " <<nodo1->der->dato<<endl;
    cout<<"Datos del 1 nodo (accediendo desde el 2): " <<nodo2->izq->dato<<endl;
return 0;

}

};


int main(){ //Aca solo se define el valor de entrada
   base eje;
   int n;
   int n2;

  cout<< "Pon el numero de datos para el nodo 1 necesitado: "<<endl;
  cin>> n;
  
  cout<< "Pon el numero de datos para el nodo 2 necesitado: "<<endl;
  cin>> n2;

    eje.nodo(n, n2); //se llama a las clases para poder hacer el input y que salga el resultado

 
}






