/***************************************************************
 * Name:      graApp.h
 * Purpose:   Defines Application Class
 * Author:    Ewa Podlodowska ()
 * Created:   2021-10-28
 * Copyright: Ewa Podlodowska ()
 * License:
 **************************************************************/

#ifndef GRAAPP_H
#define GRAAPP_H

#include <wx/app.h>

class graApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // GRAAPP_H
