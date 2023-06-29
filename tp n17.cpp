#include<bits/stdc++.h>
using namespace std;
 
int CalcularFactorial(int numero){
	
 	int factorial=1;
 	for(int i=1; i<=numero; i++){
 		factorial = factorial * i;
	 }
 	return factorial;
 }
 
 int main(){
 	int Numero;
 	
 	cout<<"ingrese un numero : ";
 	cin>>Numero;
 	
 	int Factorial = CalcularFactorial(Numero);
 	
 	cout<<Numero<<"! = "<<Factorial<<endl;
 	return 0;
 }
