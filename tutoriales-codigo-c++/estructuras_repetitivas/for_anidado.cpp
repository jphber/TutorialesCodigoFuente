/*----------------BIENVENIDOS APPLIKDOS---------------------------------------
   Creado por: Jean Bernuy
   
   3._Diseñe un algoritmo que dado 4 notas de los examenes de un alumno, 
   eliminar la menor y calcular el promedio de las tres notas restantes.Aplicar
   para N alumnos */
   
#include <iostream.h>   
#include <conio.h>   
   
   main(){
          
   int n,nota,menor,sum;
   float promedio;
   
   cout<<"\nIngrese Cantidad de Alumnos: "; cin>>n;
   
   for(int j=0;j<n;j++){
    sum=0; 
    menor=21;
    for(int k=1;k<=4;k++){
    cout<<"\nIngrese nota: "; cin>>nota;        
    sum+=nota;
    if(nota<menor){
      menor=nota;              
     }
        
    }
    promedio=((sum-menor)/3);
    cout<<"\nEl promedio del alumno "<<j+1<< " es = "<<promedio<<endl;                
   }       
          
    getch();      
   }
