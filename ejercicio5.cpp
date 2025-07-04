#include<iostream>
using namespace std;
main()
{
 int matriz[4][4];
 
 cout<<"ingrese los valores de la matriz 4x4 "<<endl;
 for(int i=0; i<4; i++){
 	for (int j=0; j<4; j++){
 		cout<<"fila "<<i<<" columna "<<j<<" : ";
 		cin>>matriz[i][j];
	 }
	 cout<<endl;
 }
 
 return 0;
} 
