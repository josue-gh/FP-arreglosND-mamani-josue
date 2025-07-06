#include<iostream>
using namespace std;
main()
{
 int matriz[5][5] = {
 {1 ,2 ,3 ,4 ,5 },
 {6 ,7 ,8 ,9 ,10 },
 {11,12,13,14,15 },
 {16,17,18,19,20 },
 {21,22,23,24,25 }
 };
 
 cout<<"la matriz 5x5 es: \n";
 for(int i=0; i<5; i++){
 	for(int j=0; j<5; j++){
 		if(matriz[i][j]>9){
 		cout<<matriz[i][j]<<" ";	
		 }else{
		 	cout<<matriz[i][j]<<"  ";
		 }
 		 
	 }
	 cout<<endl;
 }
 
 cout<<"los valores en espiral son: "<<endl;
 int a=0,   b=4;
 int c=0,   d=4;
 
 while(a<=b and c<=d){
  	
  // 1) Fila superior 
        for (int j = c; j <= d; ++j) {
            cout << matriz[a][j] << " ";
        }
        a++;

        // 2) Columna derecha 
        for (int i = a; i <= b; ++i) {
            cout << matriz[i][d] << " ";
        }
        d--;

        // 3) Fila inferior 
        if (a <= b) {
            for (int j = d; j >= c; --j) {
                cout << matriz[b][j] << " ";
            }
            b--;
        }

        // 4) Columna izquierda  
        if (c <= d) {
            for (int i = b; i >= a; --i) {
                cout << matriz[i][c] << " ";
            }
            c++;
        }
 }
 
 return 0;
} 
