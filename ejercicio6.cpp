#include<iostream>
using namespace std;
main()
{
 
 int matriz[6][6] = {
 {12 , 54 , 6  , 9  , 7  , 6},
 {0 ,  13 , 87 , 99 , 19 , 3},
 {43 , 3  , 65 , 77 , 81 , 22},
 {9  , 78 , 66 , 45 , 65 , 1},
 {2  , 7  , 34 , 76 , 81 , 3},
 {33 , 49 , 37 , 53 , 12 , 0}
};

 cout<<"la matriz 6x6 es: "<<endl;
 for(int i=0; i<6; i++){
 	for(int j=0; j<6; j++){
 		cout<<matriz[i][j]<<" ";
	 }
	 cout<<endl;
 }
 
 cout<<endl;
 cout<<"la matriz reflejada es: "<<endl;
 for(int i=0; i<6; i++){
 	for(int j=5; j>=0; j--){
 		cout<<matriz[i][j]<<" ";
	 }
	 cout<<endl;
 }
 
 return 0;
} 
