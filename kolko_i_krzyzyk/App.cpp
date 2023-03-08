/***************************************************************
 * Name:      graApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Ewa Podlodowska ()
 * Created:   2021-10-28
 * Copyright: Ewa Podlodowska ()
 * License:
 **************************************************************/

#include "App.h"

//(*AppHeaders
#include "GraDialog.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(graApp);

bool graApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if (wxsOK)
    {
    	GraDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
