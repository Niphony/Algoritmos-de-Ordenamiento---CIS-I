#include <iostream>

using namespace std;

int partition(int num[], int in, int f);
int pasos = 0;
int pasosciclo = 0;
void quickSort(int num[], int in, int f);


void quickSort(int num[], int in, int f) {
	pasos++;
    if (in < f) {
	pasos++;
        int aux = partition(num, in, f); //Creacion de Particion
	pasos++;
        quickSort(num, in, aux - 1); //Por parte izq
	pasos++;
        quickSort(num, aux + 1, f); //Por parte derecha
	pasos+=2;
    }
	
}

int partition(int num[], int in, int f) {
    pasos++;	
    int aux = num[f]; //Pivote num final
    pasos++;
    int i = in - 1;
    pasos++;
    for (int j = in; j < f; j++) { //For comparativo
	pasosciclo++;
        if (num[j] < aux) {
	    pasos++;
            i++;
	    int j = rand () % (i+1);
            pasos++;
            swap(num[i], num[j]); // Swap
	pasos++;
        }
	pasos++; 
    }
    swap(num[i + 1], num[f]); //Swap final pivote
    pasos++;
    return i + 1;
}


int main() {
    int numeros[100];
    int n = 100;

    quickSort(numeros, 0, n - 1);

    cout << "pasos: "<< pasos << " " <<endl;
    cout << "ciclo: "<< pasosciclo << " ";
    return 0;
}
