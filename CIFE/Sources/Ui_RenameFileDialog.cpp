//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: Ui_RenameFileDialog.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "Ui_RenameFileDialog.hpp"


// Declare the bitmap loading function
extern void wxCraftersFLk5UInitBitmapResources();

static bool bBitmapLoaded = false;


Ui_RenameFileDialog::Ui_RenameFileDialog(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size, long style)
    : wxDialog(parent, id, title, pos, size, style) {
    if (!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCraftersFLk5UInitBitmapResources();
        bBitmapLoaded = true;
    }

    sizerRenameFile = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(sizerRenameFile);
    gridBagSizer14 = new wxGridBagSizer(0, 0);
    sizerRenameFile->Add(gridBagSizer14, 1, wxALL | wxEXPAND, WXC_FROM_DIP(4));
    textOldFileName = new wxStaticText(this, wxID_ANY, _("Old File Name:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    gridBagSizer14->Add(textOldFileName, wxGBPosition(0, 0), wxGBSpan(0, 0), wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(4));
    editOldUser = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTE_RIGHT);
    editOldUser->Enable(false);
#if wxVERSION_NUMBER >= 3000
    editOldUser->SetHint(wxT(""));
#endif
    gridBagSizer14->Add(editOldUser, wxGBPosition(0, 1), wxGBSpan(1, 1), wxTOP | wxEXPAND, WXC_FROM_DIP(4));
    editOldFileName = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTE_LEFT);
    editOldFileName->Enable(false);
#if wxVERSION_NUMBER >= 3000
    editOldFileName->SetHint(wxT(""));
#endif
    gridBagSizer14->Add(editOldFileName, wxGBPosition(0, 2), wxGBSpan(0, 1), wxLEFT | wxRIGHT | wxTOP | wxEXPAND | wxALIGN_LEFT, WXC_FROM_DIP(4));
    textNewFileName = new wxStaticText(this, wxID_ANY, _("New File Name:"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    gridBagSizer14->Add(textNewFileName, wxGBPosition(1, 0), wxGBSpan(1, 0), wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(4));
    editNewUser = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTE_RIGHT);
    editNewUser->Enable(false);
#if wxVERSION_NUMBER >= 3000
    editNewUser->SetHint(wxT(""));
#endif
    gridBagSizer14->Add(editNewUser, wxGBPosition(1, 1), wxGBSpan(1, 1), wxTOP | wxEXPAND, WXC_FROM_DIP(4));
    editNewFileName = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTE_LEFT);
    editNewFileName->SetFocus();
#if wxVERSION_NUMBER >= 3000
    editNewFileName->SetHint(wxT(""));
#endif
    gridBagSizer14->Add(editNewFileName, wxGBPosition(1, 2), wxGBSpan(1, 1), wxLEFT | wxRIGHT | wxTOP | wxEXPAND | wxALIGN_LEFT, WXC_FROM_DIP(4));
    checkboxChangeUser = new wxCheckBox(this, wxID_CHANGE_USER, _("change User Number too"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    checkboxChangeUser->SetValue(false);
    gridBagSizer14->Add(checkboxChangeUser, wxGBPosition(2, 0), wxGBSpan(1, 3), wxLEFT | wxTOP | wxEXPAND, WXC_FROM_DIP(4));
    gridBagSizer14->AddGrowableCol(1);
    gridBagSizer14->AddGrowableRow(2);
    sizerButtons = new wxBoxSizer(wxHORIZONTAL);
    sizerRenameFile->Add(sizerButtons, 0, wxALL | wxALIGN_RIGHT, WXC_FROM_DIP(4));
    buttonCancel = new wxButton(this, wxID_CANCEL, _("Cancel"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    sizerButtons->Add(buttonCancel, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));
    buttonOk = new wxButton(this, wxID_OK, _("Ok"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    buttonOk->SetDefault();
    sizerButtons->Add(buttonOk, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));
    SetName(wxT("Ui_RenameFileDialog"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));

    if (GetSizer()) {
        GetSizer()->Fit(this);
    }

    if (GetParent()) {
        CentreOnParent(wxBOTH);
    }
    else {
        CentreOnScreen(wxBOTH);
    }
}

Ui_RenameFileDialog::~Ui_RenameFileDialog() {
}
