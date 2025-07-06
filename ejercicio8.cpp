#include<iostream>
using namespace std;
main()
{
 int matriz[5][5] = {
 {1, 2, 3, 4, 5 },
 {6, 7, 8, 9, 0 },
 {1, 2, 3, 4, 5 },
 {6, 7, 8, 9, 0 },
 {1, 2, 3, 4, 5 }
 };
 
 cout<<"la matriz 5x5 es: \n";
 for(int i=0; i<5; i++){
 	for(int j=0; j<5; j++){
 		cout<<matriz[i][j]<<" ";
	 }
	 cout<<endl;
 }
 
 
 
 return 0;
} 
