//Creado por: Jean Bernuy - applikdos
#include <conio.h>
#include <stdio.h>
#include <iostream.h>

using namespace std;
struct autos{
   int digito;
}varReg;

 autos v[100];
 int cantidad=0;

string Verificacion(autos &d){
    string texto=" ";
    if(d.digito==5 || d.digito==6){
    texto="Enero-Febrero y Julio-Agosto";                
    }else if(d.digito==7 || d.digito==8){
       texto="Febrero-Marzo y Agosto-Septiembre";                    
       }else if(d.digito==3 || d.digito==4){
       texto="Marzo- Abril y Septiembre-Octubre";                    
       }else if(d.digito==1 || d.digito==2){
       texto="Abril-Mayo y Octubre y Noviembre";                    
       }else{
       texto="Mayo-Junio y Noviembre y Diciembre";                          
       } 
    return texto;     
}
void Ingreso(){
    char opcion;
    do{
    v[cantidad]=varReg;
    cout<<"\nIngrese el ultimo digito de su matricula ==> "; cin>>v[cantidad].digito;
    cout<<"Desea Otro Ingreso s/n: "; cin>>opcion;
    cantidad++;     
   }while(opcion=='s'); 
     
}
void Mostrar(){
   cout<<"\n----------------------------------------------";
   cout<<"\nDigito\tMeses Para Verificacion\n";
   for(int i=0;i<cantidad;i++){  
   varReg=v[i];  
   Verificacion(varReg);
    cout<<"\n"<<varReg.digito<<"\t"<<Verificacion(varReg);  
  }
}
main(){
    Ingreso();
    Mostrar();
       
    getch();       
}
