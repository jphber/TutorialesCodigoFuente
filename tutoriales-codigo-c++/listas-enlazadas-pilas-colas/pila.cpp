//Creado por: Jean Bernuy - applikdos

#include <stdio.h>
#include <conio.h>
#include <iostream.h>

struct nodo{
   int dato;
   struct nodo *next;       
}*tope=NULL, *auxiliar;

void Apilar(int num){
     auxiliar= new nodo;
     auxiliar->dato=num;
      if(tope==NULL){
       tope=auxiliar;
       auxiliar->next=NULL;                 
      }else{
       auxiliar->next=tope;
       tope=auxiliar;     
      }     
}
void Listado(){    
     cout<<"\nDatos de la Lista\n ";
     auxiliar=tope;
     while(auxiliar!=NULL){
     cout<<auxiliar->dato<<"->";
     auxiliar=auxiliar->next;                 
     }
     cout<<"NULL";
}//fin listado
main(){
     Apilar(20); Apilar(15); Apilar(10); Apilar(5);
     Listado();
     getch();         
       
}
