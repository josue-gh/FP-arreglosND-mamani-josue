#include<iostream>
using namespace std;
main()
{
 
 int matriz[4][4] = {
 {12, 54, 9, 0},
 {5, 90, 32, 99},
 {77, 33, 87, 10},
 {37, 53, 3, 4}
 };
 
 cout<<"la matriz de 4x4 es: "<<endl;
 for (int i=0; i<4; i++){
 	for(int j=0; j<4; j++){
 		cout<<matriz[i][j]<<" ";
	 }
	 cout<<endl;
 }
 
 int numero1, numero2;
 cout<<"ingresa las filas a intercambia "<<endl;
 cout<<"fila a intercambiar 1: ";
 cin>>numero1;
 cout<<endl;
 cout<<"fila a intercambiar 2: ";
 cin>>numero2;
 cout<<endl;
  numero1--;
  numero2--;
  
 for(int i=0; i<4; i++){
 	for(int j=0; j<4; j++){
 		if(i==numero1){
 			cout<<matriz[numero2][j]<<" ";
		 }else if(i==numero2){
		 	cout<<matriz[numero1][j]<<" ";
		 }else{
		 	cout<<matriz[i][j]<<" ";
		 }
	 }
	 cout<<endl;
 }
 return 0;
} 
