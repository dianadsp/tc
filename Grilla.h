#include <iostream>
class Grilla{
    CasillaGrilla MundoGrilla[10][10];
    public:
    char VerCasilla(int a, int b){
        return MundoGrilla[a][b].VerCasilla();
    }
    int VerYerba(int a, int b){
        return MundoGrilla[a][b].VerYerba();
    }
    void EditCasilla(char Nuevo, int a, int b){
        MundoGrilla[a][b].EditarAnimal(Nuevo);
    }
};

