//Creado por: Jean Bernuy - applikdos

#include <conio.h>
#include <iostream.h>
#include <math.h>
//area del circulo a=pi*r2

void Area_Circulo(double r, double p){
    double area;
    area=p*pow(r,2);
    cout<<"El area del circulo es = "<<area; 
     
}
main(){
   double radio,pi;
   pi=3.1416;
   cout<<"Ingrese el radio del circulo: "; cin>>radio;
   Area_Circulo(radio,pi);
 
      
  getch();     
       
}
