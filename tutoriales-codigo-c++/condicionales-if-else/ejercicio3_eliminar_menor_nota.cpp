/*----------------BIENVENIDOS APPLIKDOS---------------------------------------
   Creado por: Jean Bernuy
   
   3._Diseñe un algoritmo que dado 4 notas de los examenes de un alumno, 
   eliminar la menor y calcular el promedio de las tres notas restantes.Aplicar
   para N alumnos */
   
#include <iostream.h>   
#include <conio.h>   
   
   main(){
          
   int n,menor,suma,nota;
   float promedio;
   
   cout<<"\nIngrese cantidad de alumnos: "; cin>>n;
   
   for(int j=0;j<n;j++){
    suma=0;
    menor=21;       
    for(int k=1;k<=4;k++){
    cout<<"\nIngrese nota "; cin>>nota;
    suma=suma+nota;        
     if(nota<menor){
     menor=nota;               
     }        
    }       
    promedio=(suma-menor)/3;
    cout<<"\nEL promedio del alumno "<<j+1<<" es: "<<promedio<<endl;       
        
   }

    getch();      
   }
