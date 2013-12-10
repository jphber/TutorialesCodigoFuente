//Creado por: Jean Bernuy - applikdos
#include <conio.h>
#include <stdio.h>
#include <iostream.h>

struct autos{
   
   char nombre[25];
   double costo;
   double PagoTenencia;
}varReg;

 autos v[100];
 int cantidad=0;

void Verificar_Pago(autos &d){
     if(d.costo>=250000){
         d.PagoTenencia=d.costo*0.13;                
     }else{
     d.PagoTenencia=d.costo*0.08;      
     }   
}
void Ingreso(){
    char opcion;
    do{
    v[cantidad]=varReg;
    cout<<"\nNombre del Propietario ==> "; cin>>v[cantidad].nombre;
    cout<<"\nCosto del Auto ==> "; cin>>v[cantidad].costo;
    Verificar_Pago(varReg);
    cout<<"Desea Otro Ingreso s/n: "; cin>>opcion;
    cantidad++;     
   }while(opcion=='s'); 
     
}
void Mostrar(){
   cout<<"\n-------------------------------------------------------";
   cout<<"\nNombre\tCosto\tPago\n";
   cout<<"\n-------------------------------------------------------";
   for(int i=0;i<cantidad;i++){  
   varReg=v[i];  
   Verificar_Pago(varReg);
    cout<<"\n"<<varReg.nombre<<"\t"<<varReg.costo<<"\t"<<varReg.PagoTenencia<<endl;  
  }
}
main(){
    Ingreso();
    Mostrar();
       
    getch();       
}
