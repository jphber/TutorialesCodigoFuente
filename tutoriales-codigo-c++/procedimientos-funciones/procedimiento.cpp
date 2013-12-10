//Creado por: Jean Bernuy - applikdos

#include "iostream.h"
#include "conio.h"
#include "math.h"


void Procedimiento(){
    int num;
    double raiz;
    cout<<"\Ingrese numero: "; cin>>num;
    raiz=sqrt(num);     
    cout<<"\nLa raiz cuadrada es = "<<raiz; 
     
}
void Cuadrado(){
    int num;
    double cuadrado;
    cout<<"\nIngrese numero: "; cin>>num;
    cuadrado=pow(num,2);
    cout<<"\nEl cuadrado del numero es= "<<cuadrado;     
     
}
main(){

    Procedimiento();
    Cuadrado();
    
    
     getch();    
}
