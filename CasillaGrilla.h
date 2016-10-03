#include <iostream>
#include <stdlib.h>

class CasillaGrilla {
   int NYerba; //la cantidad de yerba por casilla  
   char Animal; //por un char sabemos que animal tiene 
   
   public:
   void CrearCasilla (){
      NYerba = rand()%4;
      Animal=' '; // iniciamos con ningún animal
   }
   
   bool UpdateAnimal (char NuevoAnimal){ // le puse bool para que nos confirme que se actualizó, aunque también podría ser void pero interrumpiendo el proceso 
       if (NuevoAnimal == 'c' || NuevoAnimal == 'z' ){
         Animal=NuevoAnimal;
         return true;
       }
      cout << "error ingrese un valor valido";
      return false; 
   }
      
   void UpdateYerba (){
      NYerba=rand()%4; // igual que la anterior hay que llamar a random de 0 a 3
   }

};
