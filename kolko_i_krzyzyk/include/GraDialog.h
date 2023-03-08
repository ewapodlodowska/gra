/***************************************************************
 * Name:      graMain.h
 * Purpose:   Defines Application Frame
 * Author:    Ewa Podlodowska ()
 * Created:   2021-10-28
 * Copyright: Ewa Podlodowska ()
 * License:
 **************************************************************/

#ifndef GRAMAIN_H
#define GRAMAIN_H
#include "Pole.h"
#include "Gra.h"

 //(*Headers(GraDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
//*)

class GraDialog : public wxDialog
{
private:
    Pole*** plansza;
    Gra gra;
    int kto_zaczyna;
    bool gra_trwa;

public:

    GraDialog(wxWindow* parent, wxWindowID id = -1);
    virtual ~GraDialog();

private:

    // metoda musi zostać wykonana w konstruktorze
    // przed wykonaniem jakiejkolwiek czynności
    // z polami planszy
    void przygotujPlansze();

    void kliknietoPrzycisk(int w, int k);
    void wybierzGracza(int gracz);

    void ustawGraczaRozpoczynajacego(int gracz);
    int wykonajRuchKomputera();
    void sprawdzCzyKoniecGry(int wynik);

    //(*Handlers(GraDialog)
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnBitmapButton1Click(wxCommandEvent& event);
    void OnBitmapButton6Click(wxCommandEvent& event);
    void Onprzycisk_1x1Click(wxCommandEvent& event);
    void Onprzycisk_1x2Click(wxCommandEvent& event);
    void Onprzycisk_1x3Click(wxCommandEvent& event);
    void Onprzycisk_2x1Click(wxCommandEvent& event);
    void Onprzycisk_2x2Click(wxCommandEvent& event);
    void Onprzycisk_2x3Click(wxCommandEvent& event);
    void Onprzycisk_3x1Click(wxCommandEvent& event);
    void Onprzycisk_3x2Click(wxCommandEvent& event);
    void Onprzycisk_3x3Click(wxCommandEvent& event);
    void OnButton1Click(wxCommandEvent& event);
    void OnresetClick(wxCommandEvent& event);
    void Onprzycisk_1x1Click1(wxCommandEvent& event);
    void Onprzycisk_0x0Click(wxCommandEvent& event);
    void Onprzycisk_0x1Click(wxCommandEvent& event);
    void Onprzycisk_0x2Click(wxCommandEvent& event);
    void Onprzycisk_1x0Click(wxCommandEvent& event);
    void Onprzycisk_2x0Click(wxCommandEvent& event);
    void Ongracz_kolkoClick(wxCommandEvent& event);
    void Ongracz_krzyzykClick(wxCommandEvent& event);
    void OnstartClick(wxCommandEvent& event);
    //*)

    //(*Identifiers(GraDialog)
    static const long ID_BITMAPBUTTON3;
    static const long ID_BITMAPBUTTON4;
    static const long ID_BITMAPBUTTON5;
    static const long ID_BITMAPBUTTON6;
    static const long ID_BITMAPBUTTON9;
    static const long ID_BITMAPBUTTON7;
    static const long ID_BITMAPBUTTON8;
    static const long ID_BITMAPBUTTON10;
    static const long ID_BITMAPBUTTON11;
    static const long ID_STATICLINE1;
    static const long ID_STATICTEXT1;
    static const long ID_STATICTEXT2;
    static const long ID_BITMAPBUTTON1;
    static const long ID_BITMAPBUTTON2;
    static const long ID_BUTTON1;
    static const long ID_BUTTON2;
    //*)

    //(*Declarations(GraDialog)
    Pole* przycisk_0x0;
    Pole* przycisk_0x1;
    Pole* przycisk_0x2;
    Pole* przycisk_1x0;
    Pole* przycisk_1x1;
    Pole* przycisk_1x2;
    Pole* przycisk_2x0;
    Pole* przycisk_2x1;
    Pole* przycisk_2x2;
    wxBitmapButton* obrazekKolko;
    wxBitmapButton* obrazekKrzyzyk;
    wxButton* reset;
    wxButton* start;
    wxStaticLine* StaticLine1;
    wxStaticText* StaticText1;
    wxStaticText* StaticText2;
    //*)

    DECLARE_EVENT_TABLE()
};

#endif // GRAMAIN_H
