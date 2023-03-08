/***************************************************************
 * Name:      graMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Ewa Podlodowska ()
 * Created:   2021-10-28
 * Copyright: Ewa Podlodowska ()
 * License:
 **************************************************************/

#include "GraDialog.h"
#include <wx/msgdlg.h>
#undef _
#define _(s) wxString::FromUTF8(s)

#include "obrazki.h"

 //(*InternalHeaders(GraDialog)
 #include <wx/bitmap.h>
 #include <wx/font.h>
 #include <wx/image.h>
 #include <wx/intl.h>
 #include <wx/string.h>
 //*)

#include <iostream>


//helper functions
enum wxbuildinfoformat {
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f)
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(GraDialog)
const long GraDialog::ID_BITMAPBUTTON3 = wxNewId();
const long GraDialog::ID_BITMAPBUTTON4 = wxNewId();
const long GraDialog::ID_BITMAPBUTTON5 = wxNewId();
const long GraDialog::ID_BITMAPBUTTON6 = wxNewId();
const long GraDialog::ID_BITMAPBUTTON9 = wxNewId();
const long GraDialog::ID_BITMAPBUTTON7 = wxNewId();
const long GraDialog::ID_BITMAPBUTTON8 = wxNewId();
const long GraDialog::ID_BITMAPBUTTON10 = wxNewId();
const long GraDialog::ID_BITMAPBUTTON11 = wxNewId();
const long GraDialog::ID_STATICLINE1 = wxNewId();
const long GraDialog::ID_STATICTEXT1 = wxNewId();
const long GraDialog::ID_STATICTEXT2 = wxNewId();
const long GraDialog::ID_BITMAPBUTTON1 = wxNewId();
const long GraDialog::ID_BITMAPBUTTON2 = wxNewId();
const long GraDialog::ID_BUTTON1 = wxNewId();
const long GraDialog::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(GraDialog, wxDialog)
//(*EventTable(GraDialog)
//*)
END_EVENT_TABLE()



GraDialog::GraDialog(wxWindow* parent, wxWindowID id)
{
    initObrazki();
    srand(time(NULL));

    //(*Initialize(GraDialog)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;
    wxFlexGridSizer* FlexGridSizer3;
    wxFlexGridSizer* FlexGridSizer4;

    Create(parent, wxID_ANY, _("Kolko i krzyzyk"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    FlexGridSizer1 = new wxFlexGridSizer(1, 3, 0, 0);
    FlexGridSizer3 = new wxFlexGridSizer(3, 3, 0, 0);
    przycisk_0x0 = new Pole(this, ID_BITMAPBUTTON3, wxBitmap(OBRAZKI[PUSTY]), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    FlexGridSizer3->Add(przycisk_0x0, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    przycisk_0x1 = new Pole(this, ID_BITMAPBUTTON4, wxBitmap(OBRAZKI[PUSTY]), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    FlexGridSizer3->Add(przycisk_0x1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    przycisk_0x2 = new Pole(this, ID_BITMAPBUTTON5, wxBitmap(OBRAZKI[PUSTY]), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
    FlexGridSizer3->Add(przycisk_0x2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    przycisk_1x0 = new Pole(this, ID_BITMAPBUTTON6, wxBitmap(OBRAZKI[PUSTY]), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
    FlexGridSizer3->Add(przycisk_1x0, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    przycisk_1x1 = new Pole(this, ID_BITMAPBUTTON9, wxBitmap(OBRAZKI[PUSTY]), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
    FlexGridSizer3->Add(przycisk_1x1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    przycisk_1x2 = new Pole(this, ID_BITMAPBUTTON7, wxBitmap(OBRAZKI[PUSTY]), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
    FlexGridSizer3->Add(przycisk_1x2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    przycisk_2x0 = new Pole(this, ID_BITMAPBUTTON8, wxBitmap(OBRAZKI[PUSTY]), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
    FlexGridSizer3->Add(przycisk_2x0, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    przycisk_2x1 = new Pole(this, ID_BITMAPBUTTON10, wxBitmap(OBRAZKI[PUSTY]), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON10"));
    FlexGridSizer3->Add(przycisk_2x1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    przycisk_2x2 = new Pole(this, ID_BITMAPBUTTON11, wxBitmap(OBRAZKI[PUSTY]), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
    FlexGridSizer3->Add(przycisk_2x2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4 = new wxBoxSizer(wxVERTICAL);
    StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(5,-1), wxLI_VERTICAL, _T("ID_STATICLINE1"));
    BoxSizer4->Add(StaticLine1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 30);
    FlexGridSizer1->Add(BoxSizer4, 1, wxALL|wxEXPAND, -10);
    FlexGridSizer4 = new wxFlexGridSizer(5, 1, 0, 0);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Kółko i krzyżyk"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Lucida Sans Unicode"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Wybierz figurę "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Lucida Sans Unicode"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    BoxSizer2->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2 = new wxFlexGridSizer(1, 2, 0, 0);
    obrazekKolko = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(OBRAZKI[KOLKO]), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    FlexGridSizer2->Add(obrazekKolko, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    obrazekKrzyzyk = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxBitmap(OBRAZKI[KRZYZYK]), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    FlexGridSizer2->Add(obrazekKrzyzyk, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    start = new wxButton(this, ID_BUTTON1, _("START"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    wxFont startFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Lucida Sans Unicode"),wxFONTENCODING_DEFAULT);
    start->SetFont(startFont);
    BoxSizer3->Add(start, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    reset = new wxButton(this, ID_BUTTON2, _("RESET"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    wxFont resetFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Lucida Sans Unicode"),wxFONTENCODING_DEFAULT);
    reset->SetFont(resetFont);
    BoxSizer3->Add(reset, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BITMAPBUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::Onprzycisk_0x0Click);
    Connect(ID_BITMAPBUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::Onprzycisk_0x1Click);
    Connect(ID_BITMAPBUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::Onprzycisk_0x2Click);
    Connect(ID_BITMAPBUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::Onprzycisk_1x0Click);
    Connect(ID_BITMAPBUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::Onprzycisk_1x1Click);
    Connect(ID_BITMAPBUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::Onprzycisk_1x2Click);
    Connect(ID_BITMAPBUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::Onprzycisk_2x0Click);
    Connect(ID_BITMAPBUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::Onprzycisk_2x1Click);
    Connect(ID_BITMAPBUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::Onprzycisk_2x2Click);
    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::Ongracz_kolkoClick);
    Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::Ongracz_krzyzykClick);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::OnstartClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&GraDialog::OnresetClick);
    //*)

    przygotujPlansze();
    gra.ustawPlansze(plansza);
    ustawGraczaRozpoczynajacego(0);
    gra_trwa = false;
    SetIcon(wxICON(aaaa));
}
void GraDialog::przygotujPlansze()
{
    plansza = new Pole * *[3];
    for (int i = 0; i < 3; i++)
    {
        plansza[i] = new Pole * [3];
    }
    plansza[0][0] = przycisk_0x0;
    plansza[0][1] = przycisk_0x1;
    plansza[0][2] = przycisk_0x2;
    plansza[1][0] = przycisk_1x0;
    plansza[1][1] = przycisk_1x1;
    plansza[1][2] = przycisk_1x2;
    plansza[2][0] = przycisk_2x0;
    plansza[2][1] = przycisk_2x1;
    plansza[2][2] = przycisk_2x2;
}

GraDialog::~GraDialog()
{
    //(*Destroy(GraDialog)
    //*)
    for (int i = 0; i < 3; i++)
    {
        delete[] plansza[i];
    }
    delete[] plansza;
}

int GraDialog::wykonajRuchKomputera()
{
    // 0 puste
    // 1  kółko
    // 4  krzyżyk
    int tablica[3][3];
    for (int w = 0; w < 3; ++w)
    {
        for (int k = 0; k < 3; ++k)
        {
            if (plansza[w][k]->czy_puste == -1)     // puste pole
                tablica[w][k] = 0;
            else if (plansza[w][k]->czy_puste == 0) // kółko
                tablica[w][k] = 1;
            else                                    // krzyżyk
                tablica[w][k] = 4;
        }
    }

    int wDocelowe, kDocelowe;
    int miejsce;
    int suma;         // suma figur kolumn / wierszy / przekątnych
    int sumaObecna;   // najlepsza suma jaką udało się znaleźć
    int sumaDocelowa; // najlepsza suma jaką próbujemy osiągnąć
    int sumaPoboczna; // suma która będzie dobra ale nie jest najlepsza

    if (gra.czyjaTura() == (int)KOLKO)
    {
        sumaDocelowa = 2;
        sumaPoboczna = 8;
    }
    else if (gra.czyjaTura() == (int)KRZYZYK)
    {
        sumaDocelowa = 8;
        sumaPoboczna = 2;
    }

    if (tablica[1][1] == 0)
    {
        wDocelowe = 1;
        kDocelowe = 1;
        sumaObecna = sumaDocelowa;
    }

    if (sumaObecna != sumaDocelowa)
    {
        // sprawdzanie czy wiersz jest wygrany
        for (int w = 0; w < 3; ++w)
        {
            suma = 0;

            for (int k = 0; k < 3; ++k)
            {
                suma += tablica[w][k];
                if (tablica[w][k] == 0)
                    miejsce = k;
            }

            if (suma == 2 || suma == 8)
            {
                wDocelowe = w;
                kDocelowe = miejsce;
                sumaObecna = suma;
                if (sumaObecna == sumaDocelowa)
                    break;
            }
        }
    }

    if (sumaObecna != sumaDocelowa)
    {
        // sprawdzanie czy kolumna jest wygrana
        for (int k = 0; k < 3; ++k)
        {
            suma = 0;
            for (int w = 0; w < 3; ++w)
            {
                suma += tablica[w][k];
                if (tablica[w][k] == 0)
                    miejsce = w;
            }

            if (suma == 2 || suma == 8)
            {
                kDocelowe = k;
                wDocelowe = miejsce;
                sumaObecna = suma;
                if (sumaObecna == sumaDocelowa)
                    break;
            }
        }
    }

    if (sumaObecna != sumaDocelowa)
    {
        // sprawdzanie przekątnej 1 (TL-BR)
        suma = 0;
        for (int i = 0; i < 3; ++i)
        {
            suma += tablica[i][i];
            if (tablica[i][i] == 0)
                miejsce = i;
        }

        if (suma == 2 || suma == 8)
        {
            wDocelowe = miejsce;
            kDocelowe = miejsce;
            sumaObecna = suma;
        }
    }

    if (sumaObecna != sumaDocelowa)
    {
        // sprawdzanie przekątnej 2 (BL-TR)
        suma = 0;
        for (int i = 0; i < 3; ++i)
        {
            suma += tablica[2 - i][i];
            if (tablica[2 - i][i] == 0)
                miejsce = i;
        }

        if (suma == 2 || suma == 8)
        {
            wDocelowe = 2 - miejsce;
            kDocelowe = miejsce;
            sumaObecna = suma;
        }
    }



    if (sumaObecna != sumaDocelowa && sumaObecna != sumaPoboczna)
    {
        // Algorytm wyznaczający, które pole powinno być zostawione przez komputer
        bool znalezionoRuch = false;
        while (znalezionoRuch == false)
        {
            int a = rand() % 10;
            int b = rand() % 10;
            if(a%2==0)
                {wDocelowe = 0;}
            else
                {wDocelowe = 2;}
            if(b%2==0)
                {kDocelowe = 0;}
            else
                {kDocelowe = 2;}

            if (tablica[wDocelowe][kDocelowe] == 0)
                znalezionoRuch = true;
            else
                {int c = rand() % 4;
                if(c==0)
                {wDocelowe = 1;
                kDocelowe = 0;}
                else if(c==1)
                {
                    wDocelowe = 0;
                    kDocelowe = 1;
                }
                else if(c==2)
                {
                    wDocelowe = 1;
                    kDocelowe = 2;
                }
                else if(c==3)
                {
                    wDocelowe = 2;
                    kDocelowe = 1;
                }
                if (tablica[wDocelowe][kDocelowe] == 0)
                znalezionoRuch = true;
        }
    }
    }

    return gra.ustawPole(wDocelowe, kDocelowe);
}
void GraDialog::kliknietoPrzycisk(int wiersz, int kolumna)
{
    if (gra_trwa == true)
    {
        cout << "Kliknieto przycisk: " << wiersz << ' ' << kolumna << '\n';
        int wynik = gra.ustawPole(wiersz, kolumna);
        sprawdzCzyKoniecGry(wynik);
        if (gra_trwa == false)
            return;

        wynik = wykonajRuchKomputera();
        sprawdzCzyKoniecGry(wynik);
    }
}
void GraDialog::sprawdzCzyKoniecGry(int wynik)
{
    if (wynik == -1)
        return;

    if (wynik == 0)
    {
        wxMessageBox( wxT("Wygrało kółko") );
     //wygralo kolko
    }
    else if (wynik == 1)
    {
        wxMessageBox( wxT("Wygrał krzyżyk") );
     //wygral krzyzyk
    }
    else if (wynik == 2)
    {
        wxMessageBox( wxT("Remis") );
    //remis
    }
    gra_trwa = false;
}

void GraDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}


void GraDialog::OnresetClick(wxCommandEvent& event)
{
    gra.wyczyscPlansze();
    gra_trwa = false;
}
void GraDialog::Onprzycisk_0x0Click(wxCommandEvent& event)
{
    kliknietoPrzycisk(0, 0);
}

void GraDialog::Onprzycisk_0x1Click(wxCommandEvent& event)
{
    kliknietoPrzycisk(0, 1);
}

void GraDialog::Onprzycisk_0x2Click(wxCommandEvent& event)
{
    kliknietoPrzycisk(0, 2);
}

void GraDialog::Onprzycisk_1x0Click(wxCommandEvent& event)
{
    kliknietoPrzycisk(1, 0);
}

void GraDialog::Onprzycisk_1x1Click(wxCommandEvent& event)
{
    kliknietoPrzycisk(1, 1);
}

void GraDialog::Onprzycisk_1x2Click(wxCommandEvent& event)
{
    kliknietoPrzycisk(1, 2);
}

void GraDialog::Onprzycisk_2x0Click(wxCommandEvent& event)
{
    kliknietoPrzycisk(2, 0);
}

void GraDialog::Onprzycisk_2x1Click(wxCommandEvent& event)
{
    kliknietoPrzycisk(2, 1);
}

void GraDialog::Onprzycisk_2x2Click(wxCommandEvent& event)
{
    kliknietoPrzycisk(2, 2);
}


void GraDialog::wybierzGracza(int gracz)
{
    if (gra_trwa == false)
    {
        ustawGraczaRozpoczynajacego(gracz);
    }
}


void GraDialog::Ongracz_kolkoClick(wxCommandEvent& event)
{
    wybierzGracza((int)KOLKO);
}

void GraDialog::Ongracz_krzyzykClick(wxCommandEvent& event)
{
    wybierzGracza((int)KRZYZYK);
}

void GraDialog::OnstartClick(wxCommandEvent& event)
{
    gra_trwa = true;
    gra.resetuj((int)KOLKO);
    if ((Obrazek)kto_zaczyna == KRZYZYK)
        wykonajRuchKomputera();

}

void GraDialog::ustawGraczaRozpoczynajacego(int gracz)
{
    kto_zaczyna = gracz;
    if (gracz == (int)KOLKO)
    {
        obrazekKolko->SetBitmap(OBRAZKI[KOLKO_ZAZNACZONE]);
        obrazekKrzyzyk->SetBitmap(OBRAZKI[KRZYZYK]);
    }
    else if (gracz == (int)KRZYZYK)
    {
        obrazekKolko->SetBitmap(OBRAZKI[KOLKO]);
        obrazekKrzyzyk->SetBitmap(OBRAZKI[KRZYZYK_ZAZNACZONY]);
    }
}
