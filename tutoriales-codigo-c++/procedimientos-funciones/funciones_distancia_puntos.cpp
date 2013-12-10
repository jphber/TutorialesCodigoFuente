//Creado por: Jean Bernuy - applikdos

#include <iostream.h>
#include <conio.h>
#include <math.h>

double Distancia(){
       
      double distancia;
      int x1,x2,y1,y2;
      
      cout<<"Ingrese coordenadas de P1 (x1,y1) ="<<endl;
      cin>>x1>>y1;
      cout<<"Ingrese coordenadas de P2 (x2,y2) ="<<endl;
      cin>>x2>>y2;
      
      distancia=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
      
      return distancia;      
}
main(){
    
   
   cout<<"Distancia = "<<Distancia();
   
   getch();       
       
}
