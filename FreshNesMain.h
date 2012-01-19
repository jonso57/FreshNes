/***************************************************************
 * Name:      FreshNesMain.h
 * Purpose:   Defines Application Frame
 * Author:    J. Rumble (jonso57@yahoo.co.uk)
 * Created:   2012-01-19
 * Copyright: J. Rumble ()
 * License:
 **************************************************************/

#ifndef FRESHNESMAIN_H
#define FRESHNESMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "FreshNesApp.h"

class FreshNesFrame: public wxFrame
{
    public:
        FreshNesFrame(wxFrame *frame, const wxString& title);
        ~FreshNesFrame();
    private:
        enum
        {
            idMenuQuit = 1000,
            idMenuAbout
        };
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};


#endif // FRESHNESMAIN_H
