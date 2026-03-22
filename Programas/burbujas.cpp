#include <iostream>


using namespace std;

int main(){
        int numeros[] = {3,2,1,4,5};
        int i,j,aux;
        int pasos=0;
        int pasosciclo=0;
	for (i=0;i<5;i++){
//pasos+=2;
                for(j=0;j<5;j++){
       			pasos+=2;
                        if(numeros[j] > numeros[j+1]){
                                aux = numeros[j];
                                numeros[j] = numeros[j+1];
                                numeros[j+1] = aux;
                                pasos+=3;
                        }
                pasosciclo++;
  		}            
        pasos++;
        }

        cout<<"orden ascendente: ";
        for(i=0;i<5;i++){
         cout<<numeros[i]<<" ";
        }
        cout<<"\norden descendente: ";
        for(j=4;j>=0;j--){
         cout<<numeros[j]<<" ";
        }
        cout<<"\npasos: "<< pasos <<endl;
        cout<<"pasos ciclo: " <<pasosciclo<<endl;
	
return 0;

}

