#include <iostream>
#include <vector>
using namespace std;

int main() {
    //bandera y numero de veces q se van a leer
	int n,con=0;
	//cuantos numeros se ingresan
    cin >> n;
    //arreglo para analizar cada numero
    vector<int>arre(n);
    //lectura de los numeros
    for(int i=0; i < n; i++){
        cin >> arre[i];
    }
    //comparacion para encontrar un 8
     for (int i = 0; i < n; i++){
         int num = arre[i];
         while (num > 0){
             if (num % 10 == 8){
                con = 1;
                break;//se utiliza para terminar el ciclo al encontrar un 8
             }
             num /= 10;
         }
         if(con == 1)break;//se utiliza para terminar el ciclo al encontrar un 8
     }
     //imprime 1 si hay algun 8 y 0 si no los hay
    cout<< con << endl;
    return 0;
}
