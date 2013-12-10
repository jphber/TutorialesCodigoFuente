//------------VOLUMEN DEL CILINDRO-------------------
//Creado por: Jean Bernuy - applikdos

#include <iostream.h>
#include <conio.h>
#include <math.h>

double Volumen_Cil(double a, double r, double p){
    double vol;
    vol=p*pow(r,2)*a;
    return vol;    
    
}
main(){
  double h,radio,pi,v;
  pi=3.1416;   
       
  cout<<"Ingrese Altura del Cilindro: "; cin>>h;
  cout<<"Ingrese Radio del Cilindro: "; cin>>radio;
  v=Volumen_Cil(h,radio,pi);  
  
  cout<<"El volumen del cilindro es = "<<v;     
       
  getch();     
       
}
