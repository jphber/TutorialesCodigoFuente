/*----------------BIENVENIDOS APPLIKDOS---------------------------------------
   Creado por: Jean Bernuy
   
   2._Diseñe un algoritmo que para identificar si un numero ingresado es primo
   o no lo es */
   
#include "iostream.h"
#include "conio.h"

main(){
       
    int num,divisores;
    
    cout<<"\nIngrese Numero: "; cin>>num;
    
    divisores=0;
    for(int j=1;j<=num;j++){
      if(num%j==0){ 
      divisores++;             
      }          
    }
    if(divisores==2){
                     
    cout<<"\nEl numero ingresado es primo ";                 
    }
    else
    cout<<"\nEl numero no es primo ";  
   getch();    
}
