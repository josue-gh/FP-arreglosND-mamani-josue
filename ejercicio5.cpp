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
 
 cout<<"la matriz dada es: "<<endl;
 for(int i=0; i<4; i++){
 	for (int j=0; j<4; j++){
 		
 		cout<<matriz[i][j]<<" ";
	 }
	 cout<<endl;
 }
 
int max=matriz[0][0];
for(int i=0; i<4; i++){
	for(int j=0; j<4; j++){
		if(max<matriz[i][j]){
			max=matriz[i][j];
		}
	}
}


int min=matriz[0][0];
for(int i=0; i<4; i++){
	for(int j=0; j<4; j++){
		if(min>matriz[i][j]){
			min=matriz[i][j];
		}
	}
}
cout<<endl;
cout<<"el valor maximo de la matriz es: "<<max<<endl;
cout<<"el valor minimo de la matriz es: "<<min<<endl;

 
 return 0;
} 
