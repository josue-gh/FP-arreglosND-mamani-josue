#include<iostream>
 using namespace std;
 
 int main(){
 	//asignando valores a la matriz
 	int matriz[3][3] = {
	 {10, 55, 3},
	 {0, 89, 10},
	 {3, 10, 99}
	 };
	 
	//mostramos la matriz 
	cout<<los valores de una matriz 3x3 es: <<endl;
	 for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
	 		cout<<matriz[i][j]<< ;
		 }
		 cout<<endl;
	 }
	 
	 int m, num;
	 
	 cout<<ingrese un numero de la matriz dada <<endl;
	 cin>>num;
	 cout<<endl;
	 cout<<el numero dos se encuentra en: <<endl;
	 for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
	 		m=matriz[i][j];
	 		if(m== num){
	 			cout<<fila: <<i<<, columna: <<j<<endl;
			 }
		 }
	 }
	 return 0;
 } 
