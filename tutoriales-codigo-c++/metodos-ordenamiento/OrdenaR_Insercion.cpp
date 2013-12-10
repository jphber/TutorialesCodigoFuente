//Creado por: Jean Bernuy - applikdos
#include "iostream.h"
#include "conio.h"

int num[100],n;
void Ordenar_Insercion(){
  int temp;
  for(int i=1;i<n;i++){
   temp=num[i];
   for(int j=i;(j>0)&&(temp<num[j-1]);j--){
   num[j]=num[j-1];
   num[j-1]=temp;                                    
   }     
  }     
}
void Muestra_Vector(){
   for(int t=0;t<n;t++){
   cout<<num[t]<<" ";        
   }    
      
}
main(){
   cout<<"Ingrese cantidad de numeros "; cin>>n;
   for(int i=0;i<n;i++){
   cout<<"Ingrese numero: "; 
   cin>>num[i];        
   }
   cout<<"Antes de Ordenar: "<<endl;
   for(int j=0;j<n;j++){
   cout<<num[j]<<" ";        
   }
 
   Ordenar_Insercion();
   cout<<"Ordenamiento Metodo Insercion: "<<endl;
   Muestra_Vector();
   getch();       
}
