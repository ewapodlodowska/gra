#ifndef OBRAZKI_H
#define OBRAZKI_H

#include <string>
#include <wx/image.h>

using namespace std;

// extern - tworzenie jednej wspólnej zmiennej globalnej 
// dostępnej z poziomu wielu plików .cpp
extern wxImage OBRAZKI[5];

void initObrazki();

// typ wyliczeniowy
// kolejne elementy typu enum przyjmują domyślne wartości 0 1 2 ...
// można użyć (int)KOLKO aby otrzymać wartość 0 
// lub
// (int)PUSTY żeby otrzymać wartość 2 itd.
//
// w drugą stronę też to działa
// można napisać
// if( (Obrazek)2 == PUSTY ) { }
// powyższy warunek będzie spełniony
enum Obrazek { KOLKO, KRZYZYK, PUSTY, KOLKO_ZAZNACZONE, KRZYZYK_ZAZNACZONY };

#endif