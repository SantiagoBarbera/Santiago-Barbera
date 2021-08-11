#include <iostream>
using namespace std;

void mostrarMatriz(int valores[][5], int f, int c){
  for(int m=0;m<f;m++){
    for(int n=0;n<c;n++){
      cout << valores[m][n] << " \t";
    }
        cout << endl;
  }
}               

void transponer(int valores[][5], int f, int c){

  for(int m=0;m<f;m++){
      for(int n=0;n<c;n++){
        cout << valores[n][m] << " \t";
      }
        cout << endl;
  }
}

void mostrar (int valores[], int d){

         for(int n=0;n<d;n++){
             cout << valores[n] << "  ";
          } 
}

void revertir (int valores[], int d){

        for(int i=d-1;i>=0;i--){

            cout << valores[i] << "  ";    
        }
}

//------------------------------------------------------------------
int main(){

   const int d=5;  
   int valores[d];

     cout << "Ingrese un arreglo de 5 elementos" << endl;   
        for(int i=0;i<d;i++){
            cin>>valores[i];
        } 
 
   const int d2=10;
   int valores2[d2];

        cout << "Ingrese un arreglo de 10 elementos" << endl;   
          for(int l=0;l<d2;l++){
            cin>> valores2[l];
          }

           cout << endl;
        cout << "Primer vector cargado" << endl;
          mostrar(valores,d);
            cout << endl;
        cout << "Segundo vector cargado" << endl;
          mostrar(valores2,d2);
            cout << endl;
        cout << "Primer vector revetido" << endl;
          revertir(valores,d);
            cout << endl;
         cout << "Segundo vector revetido" << endl;
          revertir(valores2,d2);
          cout << endl;



    const int filas{5};
    const int columnas{5};
    int matriz[filas][columnas];
       cout << endl;
    cout << "Ingrese los elementos de una matriz de 5x5" << endl;
      for(int f=0;f<filas;f++){
        for(int c=0;c<columnas;c++){
          cout << "Fila " << f << " columna " << c << ": ";
            cin>> matriz[f][c];
        }
      }
        cout << endl;
        cout << "Matriz ingresada" << endl;
        mostrarMatriz(matriz,filas,columnas);
        cout << endl;

        cout << "Matriz transpuesta: " << endl;
        transponer(matriz,filas,columnas);
      

return 0;

}