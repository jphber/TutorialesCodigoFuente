//Creado por: Jean Bernuy - applikdos
#include "iostream.h"
#include "conio.h"

int num[100],n;
void Ordenar_Seleccion(){
    int temp;
    for(int j=0;j<n-1;j++){
    for(int k=j+1;k<n;k++){
      if(num[k]<num[j]){
      temp=num[k];
      num[k]=num[j];
      num[j]=temp;                  
      }        
    }              
    }
}
void Muestra_Vector(){
   for(int t=0;t<n;t++){
   cout<<num[t]<<"\t";        
   }       
}
main(){
   cout<<"\nIngrese cantidad de numeros "; cin>>n;
   for(int i=0;i<n;i++){
   cout<<"Ingrese numero: "; 
   cin>>num[i];        
   }
   cout<<"Antes de Ordenar:"<<endl;
   Muestra_Vector();
   Ordenar_Seleccion();
   cout<<"\nOrdenamiento Metodo Seleccion: "<<endl;
   Muestra_Vector();
   getch();       
}
