#ifndef GRA_H
#define GRA_H
#include"Pole.h"

class Gra
{
private:
    Pole*** plansza;
    int gracz;

public:
    Gra();
    void resetuj(int gracz);
    void ustawPlansze(Pole***);

    // 0 to jest kólko
    // 1 to jest krzyżykd
    int czyjaTura();

    // -1 gra trwa, 
    // 0 gracz kolko wygrywa, 
    // 1 gracz krzyzyk wygrywa, 
    // 2 remis
    int ustawPole(int w, int k);
    void wyczyscPlansze();

private:

    int czy_gracz_wygral(int w, int k);//-1 gra trwa, 0 gracz wygral, 1 remis
};

#endif // GRA_H
