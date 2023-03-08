#include "obrazki.h"

wxImage OBRAZKI[5];

void initObrazki()
{
    const string SCIEZKA_OBRAZKOW = "";
    OBRAZKI[0] = wxImage(SCIEZKA_OBRAZKOW + "kolko.png");
    OBRAZKI[1] = wxImage(SCIEZKA_OBRAZKOW + "krzyzyk.png");
    OBRAZKI[2] = wxImage(SCIEZKA_OBRAZKOW + "pusty.png");
    OBRAZKI[3] = wxImage(SCIEZKA_OBRAZKOW + "kolko_zaznaczone.png");
    OBRAZKI[4] = wxImage(SCIEZKA_OBRAZKOW + "krzyzyk_zaznaczony.png");
}
