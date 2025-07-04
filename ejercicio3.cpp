 #include<iostream>
using namespace std;
main()
{
 int matriz[4][4]; 
 
 cout<<ingrese los datos de la matriz: <<endl;
 for(int i=0; i<4; i++){
 	for(int j=0; j<4; j++){
 	cout<<matriz [<<i<<]<<[<<j<<]: ;
	 cin>>matriz[i][j];	
	 }
 cout<<endl;
 }
 
 int suma=0;
 for(int i=0; i<4; i++){
 	for(int j=0; j<4; j++){
 		cout<<matriz[i][j]<< ;
 		if(i==j){
 			suma=suma+matriz[i][j];
		 }
	 }
	 cout<<endl;
 }
 cout<<la suma de la diagonal de la matriz es: <<suma;
	 
} 
