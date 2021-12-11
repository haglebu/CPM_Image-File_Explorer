//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: Ui_RenameFileDialog.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CPM_IMAGE_FILE_EXPLORER_CIFE_UI_RENAMEFILEDIALOG_BASE_CLASSES_H
#define _CPM_IMAGE_FILE_EXPLORER_CIFE_UI_RENAMEFILEDIALOG_BASE_CLASSES_H

// clang-format off
#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/gbsizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
    #include <wx/persist.h>
    #include <wx/persist/toplevel.h>
    #include <wx/persist/bookctrl.h>
    #include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
    #undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
    #define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
    #define WXC_FROM_DIP(x) x
#endif

// clang-format on

class Ui_RenameFileDialog : public wxDialog {
    public:
        enum {
            wxID_CHANGE_USER = 10001,
        };
    protected:
        wxBoxSizer *sizerRenameFile;
        wxGridBagSizer *gridBagSizer14;
        wxStaticText *textOldFileName;
        wxTextCtrl *editOldUser;
        wxTextCtrl *editOldFileName;
        wxStaticText *textNewFileName;
        wxTextCtrl *editNewUser;
        wxTextCtrl *editNewFileName;
        wxCheckBox *checkboxChangeUser;
        wxBoxSizer *sizerButtons;
        wxButton *buttonCancel;
        wxButton *buttonOk;

    protected:

    public:
        wxStaticText *GetTextOldFileName() {
            return textOldFileName;
        }
        wxTextCtrl *GetEditOldUser() {
            return editOldUser;
        }
        wxTextCtrl *GetEditOldFileName() {
            return editOldFileName;
        }
        wxStaticText *GetTextNewFileName() {
            return textNewFileName;
        }
        wxTextCtrl *GetEditNewUser() {
            return editNewUser;
        }
        wxTextCtrl *GetEditNewFileName() {
            return editNewFileName;
        }
        wxCheckBox *GetCheckboxChangeUser() {
            return checkboxChangeUser;
        }
        wxButton *GetButtonCancel() {
            return buttonCancel;
        }
        wxButton *GetButtonOk() {
            return buttonOk;
        }
        Ui_RenameFileDialog(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString &title = _("Rename File"), const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE);
        virtual ~Ui_RenameFileDialog();
};

#endif
