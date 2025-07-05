#include<iostream>
using namespace std;
main()
{
 int matriz[4][4];
 cout<<"ingrese los datos de la matriz 4x4 "<<endl;
 for(int i=0; i<4; i++){
 	for(int j=0; j<4; j++){
 		cout<<"ingrese el valor de la fila "<<i<<" columna "<<j<<" ";
 		cin>>matriz[i][j];
	 }
	 cout<<endl;
 }
 
 cout<<"la matriz dada es: "<<endl;
 for(int i=0; i<4; i++){
 	for(int j=0; j<4; j++){
 		cout<<matriz[i][j]<<" ";
	 }
	 cout<<endl;
 }
 
 cout<<"la matriz rotada 90 grados es: "<<endl;
   for(int j=0; j<4; j++){
 	for(int i=3; i>=0; i--){
 		cout<<matriz[i][j]<<" ";
	 }
	 cout<<endl;
 }
} 
