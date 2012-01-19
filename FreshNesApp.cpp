/***************************************************************
 * Name:      FreshNesApp.cpp
 * Purpose:   Code for Application Class
 * Author:    J. Rumble (jonso57@yahoo.co.uk)
 * Created:   2012-01-19
 * Copyright: J. Rumble ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "FreshNesApp.h"
#include "FreshNesMain.h"

IMPLEMENT_APP(FreshNesApp);

bool FreshNesApp::OnInit()
{
    FreshNesFrame* frame = new FreshNesFrame(0L, _("wxWidgets Application Template"));
    
    frame->Show();
    
    return true;
}
