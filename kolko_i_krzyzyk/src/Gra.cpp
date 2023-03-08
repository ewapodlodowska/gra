#include "Gra.h"
#include "obrazki.h"

Gra::Gra()
{

}

void Gra::resetuj(int gracz)
{
    wyczyscPlansze();
    this->gracz = gracz;
    for (int w = 0; w < 3; w++)
    {
        for (int k = 0; k < 3; k++)
        {
            plansza[w][k]->czy_puste = -1;
        }
    }
}

void Gra::ustawPlansze(Pole*** plansza)
{
    this->plansza = plansza;
}



int Gra::ustawPole(int w, int k)
{
    if (plansza[w][k]->czy_puste == -1)
    {
        plansza[w][k]->SetObrazek(gracz);
        int wynik = czy_gracz_wygral(w, k);
        if (wynik == -1) {
            gracz = (gracz + 1) % 2;
            return -1;
        }
        if (wynik == 0)return gracz;
        else return 2;
    }
    return -1;
}

int Gra::czyjaTura()
{
    return gracz;
}

// zwrócić -1 jeśli gra ciągle trwa
// zwrócić 0 jeśli gracz wygrał
// zwrócić 1 jeśli jest remis
int Gra::czy_gracz_wygral(int w, int k)
{
    bool gracz_wygral = true;

    // sprawdzanie czy wiersz jest wygrany
    for (int i = 1; i < 3; ++i)
    {
        if (plansza[w][i]->czy_puste != plansza[w][i - 1]->czy_puste)
        {
            gracz_wygral = false;
            break;
        }
    }
    if (gracz_wygral) return 0;

    gracz_wygral = true;
    // sprawdzanie czy kolumna wygrała
    for (int i = 1; i < 3; ++i)
    {
        if (plansza[i][k]->czy_puste != plansza[i - 1][k]->czy_puste)
        {
            gracz_wygral = false;
            break;
        }
    }
    if (gracz_wygral) return 0;

    if (w == k)
    {
        gracz_wygral = true;
        // Sprawdzanie przekątnej 1
        for (int i = 1; i < 3; ++i)
        {
            if (plansza[i][i]->czy_puste == -1 ||
                plansza[i][i]->czy_puste != plansza[i - 1][i - 1]->czy_puste)
            {
                gracz_wygral = false;
                break;
            }
        }
        if (gracz_wygral) return 0;
    }
    else if (w == 2 - k)
    {

        gracz_wygral = true;
        // Sprawdzanie przekątnej 2
        for (int i = 1; i < 3; ++i)
        {
            if (plansza[2 - i][i]->czy_puste == -1 ||
                plansza[2 - i][i]->czy_puste != plansza[2 - i + 1][i - 1]->czy_puste)
            {
                gracz_wygral = false;
                break;
            }
        }
        if (gracz_wygral) return 0;
    }

    // do tej pory gracz nie wygrał więc sprawdzam czy jest możliwy jakikolwiek ruch
    for (int w = 0; w < 3; ++w)
    {
        for (int k = 0; k < 3; ++k)
        {
            // jeśli istnieje puste pole to gra ciągle trwa
            if (plansza[w][k]->czy_puste == -1)
                return -1;
        }
    }
    // jeśli nie ma żadnego pustego pola wystąpił remis
    return 1;
}


void Gra::wyczyscPlansze()
{
    for (int w = 0; w < 3; w++)
    {
        for (int k = 0; k < 3; k++)
        {
            plansza[w][k]->SetObrazek((int)PUSTY);
        }
    }
}
