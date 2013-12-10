//Creado por: Jean Bernuy - applikdos

#include "iostream.h"
#include "conio.h"

float Funcion(int acu,int con ){
 float promedio;
 
 promedio=acu/con;
 
 return promedio;   
}
main(){
   
 int n,acu,con;
 double salario,total;

 cout<<"Ingrese cantidad de trabajadores "; cin>>n;
 acu=0;
 con=0;
 for(int j=1;j<=n;j++){
 cout<<"Ingrese salario de trabajador "<<j<<": "; cin>>salario;
 acu+=salario;
 con++;
 }
 total=Funcion(acu,con);
 cout<<"El promedio total de salarios de los trabajadores es = "<<total;
  
  getch();   
     
}
