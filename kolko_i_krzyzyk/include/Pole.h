#ifndef POLE_H
#define POLE_H
#include "wx/bmpbuttn.h"
#include "wx/image.h"

using namespace std;

class Pole : public wxBitmapButton
{
public:
    static string obrazki[5];

    int czy_puste; //założymy, że -1 to puste

    Pole(
        wxWindow* parent,
        wxWindowID 	id,
        const wxBitmap& bitmap,
        const wxPoint& pos = wxDefaultPosition,
        const wxSize& size = wxDefaultSize,
        long 	style = wxBU_AUTODRAW,
        const wxValidator& validator = wxDefaultValidator,
        const wxString& name = wxButtonNameStr
    );

    void SetObrazek(int i);
};

#endif // POLE_H
