#include "Pole.h"
#include "obrazki.h"

extern wxImage OBRAZKI[5];

Pole::Pole(
        wxWindow* parent,
        wxWindowID 	id,
        const wxBitmap& bitmap,
        const wxPoint& pos,
        const wxSize& size,
        long 	style,
        const wxValidator& validator,
        const wxString& name)
        :wxBitmapButton(parent, id, bitmap, pos, size, style, validator, name)
{
        czy_puste = -1;
}

void Pole::SetObrazek(int i)
{
        SetBitmap(wxBitmap(OBRAZKI[i]));
        czy_puste = i;

}
