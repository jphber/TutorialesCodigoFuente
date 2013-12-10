//Creado por: Jean Bernuy - applikdos
#include "iostream.h"
#include "conio.h"

int num[100],n;
/*void Ordenar_Burbuja(){
  int temp;
  for(int i=0;i<n;i++){
   for(int k=n-1;k>0;k--){
      if(num[k]<num[k-1]){
      temp=num[k];
      num[k]=num[k-1];
      num[k-1]=temp;                    
      }              
   }             
  }        
}*/
void Ordena_Burbuja(){
       bool intercambios=false;
       int i=1,aux;
    do {
         intercambios=false;
         for(int j=1;n-1;j++){
           if(num[j]>num[j+1]){
           aux=num[j]; 
           num[j]=num[j+1];
           num[j+1]=aux;
           intercambios=true;
           }
         }
        i=i+1;

    }while(intercambios && i<=n-1);
}
void Muestra_Vector(){
   for(int t=0;t<n;t++){
   cout<<num[t]<<" ";        
   }    
      
}
main(){
   cout<<"\nIngrese cantidad de numeros "; cin>>n;
   for(int i=0;i<n;i++){
   cout<<"Ingrese numero: "; 
   cin>>num[i];        
   }
   cout<<"\nAntes de Ordenar: "<<endl;
   for(int j=0;j<n;j++){
   cout<<num[j]<<" ";        
   }
 
   Ordena_Burbuja();
   cout<<"\nOrdenamiento Metodo Burbuja: "<<endl;
   Muestra_Vector();
   getch();       
}
