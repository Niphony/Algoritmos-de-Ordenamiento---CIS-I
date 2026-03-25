#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int M, N;

int MaximosDul(
    const vector<int>
        &cajas) { // acordate, se usa el vector para añadir en el metodo y el &
                  // tal para definir el nombre de ese vector
  int n = cajas.size(); // se usa long para que sea mas preciso - esto obtiene
                        // el tamaño de la matriz
  if (n == 0)
    return 0; // si la caja esta vacia devuelve nadota
  if (n == 1)
    return cajas[0]; // si la caja esta llena se devuelve su misma posicion

  int anter = cajas[0];
  int datras = 0;

  for (int i = 1; i < n; i++) {
    int act = max(anter, datras + cajas[i]);
    datras = anter;
    anter = act;
  }
  return anter;
}

int main() {
  while (cin >> M >> N && (M != 0 || N != 0)) { //Aca este while compurbe que mientras N y M valores que entran sean mayores que cero se ejecute la suma de comprobacion del for
                                                //para claro mayoria del numero xd
    vector<int> resulfila(M);
    for (int i = 0; i < M; i++) {
      vector<int> filatemp(N);
      for (int j = 0; j < N; j++) {
        cin >> filatemp[j];
      }
      resulfila[i] = MaximosDul(filatemp); //el resultado de la fila en el vector se compara con el temp
    }
    int total = MaximosDul(resulfila); //la variable que contiene el total del resultado de la final despues de parsarle el i y la temporal
    cout << "El max de dulces sera de: " << total<< endl;
  }
  return 0;
}
