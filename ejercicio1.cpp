 #include<iostream>
 using namespace std;
 
 int main(){
 	int matriz_1[3][3];
 	int matriz_2[3][3];
 	//valores de la matriz 1
 	cout<<"ingrese los valores de las matriz 1: "<<endl;
 	for(int i=0; i<3; i++){
 		for(int j=0; j<3; j++){
 			cout<<"ingrese el valor de la posicion "<<i+1 <<" , "<< j+1<<" : ";
 			cin>>matriz_1[i][j];
		 }
		 cout<<endl;
	 }
	 //valores de la matriz 2
	 cout<<endl;
	 cout<<"ingrese los valores de la matriz 2: "<<endl;
	 for(int o=0; o<3; o++){
	 	for(int s=0; s<3; s++){
	 		cout<<"ingrese el valor de la posicion "<<o+1<<" , "<<s+1<<" : ";
	 		cin>> matriz_2[o][s];
		 }
		 cout<<endl;
	 }
	 int suma[3][3];
	 for(int i=0; i<3; i++){
	 	for(int j=0; j<3; j++){
	 		
	 		suma[i][j]= matriz_1[i][j] + matriz_2[i][j];
		 }
	 }
	 
	 cout<<endl;
	 cout<<endl;
	 	for(int i=0; i<3; i++){
	 		
 		for(int j=0; j<3; j++){
 			cout<<matriz_1[i][j]<<" " ;
		 }
	    cout<< " ";
	    
 		for(int j=0; j<3; j++){
 			cout<<matriz_2[i][j]<<" " ;
		 }
		cout<< " ";
		for(int j=0; j<3; j++){
			cout<<suma[i][j]<<" " ;
		}
		cout<<endl;
	 }
	 return 0;
 } 
