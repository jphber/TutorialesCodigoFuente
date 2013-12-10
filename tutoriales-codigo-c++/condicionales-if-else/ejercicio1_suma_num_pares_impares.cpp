/*----------------BIENVENIDOS APPLIKDOS---------------------------------------
   Creado por: Jean Bernuy
   
   Diseñe un algoritmo que dados como datos 10 numeros enteros, obtenga
   la suma de los numeros pares y el promedio de los numeros impares,
   ademas indique cuantos ceros se ingresaron */

#include "iostream.h"
#include "conio.h"
#include "math.h"

main(){
       
    float sumpar,sumimp;
    int conceros,conimp,num,k;
    
    k=0;
    conceros=0;
    conimp=0;
    sumimp=0;
    sumpar=0;
    
    while(k<10){
    cout<<"\nIngrese numero entero: "; cin>>num;
                
    if(num!=0){
      if(pow(-1,num)>0){
      sumpar=sumpar+num;                  
      }
      else{
      sumimp=sumimp+num;
      conimp++;        
      }                   
    }
    else
    conceros++;
    k++;                            
    }
    
    cout<<"\nLa suma de numeros pares es = "<<sumpar;
    cout<<"\nEl promedio de numeros impares es = "<<(sumimp/conimp)<<endl;
    cout<<"\nLa cantidad de ceros es = "<<conceros;
    
  
  getch();     
}
