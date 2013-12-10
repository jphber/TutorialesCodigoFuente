//Creado por: Jean Bernuy - applikdos
#include <stdio.h>
#include <conio.h>
#include <iostream.h>

struct nodo{
  int dato;
  struct nodo  *sig;       
       
}*inicio=NULL,*ult=NULL,*aux;

void  Agregar_Elementos(int num){
    aux= new nodo;  
    aux->dato=num;
    if(inicio==NULL){
     inicio=ult=aux; 
     aux->sig=NULL;                                
    }else{
    aux->sig=NULL;
    ult->sig=aux;
    ult=aux;     
    }       
}
void Listado(){
  cout<<"\nDatos en Cola: \n";
  aux=inicio;
  while(aux!=NULL){
   cout<<aux->dato<<"--->";
   aux=aux->sig;                  
  }     
   cout<<"NULL";  
}

main(){
      Agregar_Elementos(5);
      Agregar_Elementos(10);
      Agregar_Elementos(15);
      Agregar_Elementos(20);     
      Listado();
      getch(); 
}
