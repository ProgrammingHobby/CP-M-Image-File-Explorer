//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: Ui_MainWindow.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CPM_IMAGE_FILE_EXPLORER_CIFE_UI_MAINWINDOW_BASE_CLASSES_H
#define _CPM_IMAGE_FILE_EXPLORER_CIFE_UI_MAINWINDOW_BASE_CLASSES_H

// clang-format off
#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/frame.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/panel.h>
#include <wx/gbsizer.h>
#include <wx/stattext.h>
#include <wx/combobox.h>
#include <wx/arrstr.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/splitter.h>
#include <wx/listctrl.h>
#include <wx/statline.h>
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

class Ui_MainWindow : public wxFrame {
    public:
        enum {
            wxID_BUTTON_CLEAR_MESSAGES = 10001,
            wxID_BUTTON_SAVE_MESSAGES = 10002,
            wxID_IMAGE_CONTENTS = 10003,
            wxID_BUTTON_IMAGE_FILE = 10004,
            wxID_IMAGE_TYPE = 10005,
            wxID_CHECK_IMAGE = 10006,
            wxID_CREATE_NEW = 10007,
            wxID_ATTRIBUTES = 10008,
        };
    protected:
        wxMenuBar *menuMainWindow;
        wxMenu *menuFile;
        wxMenuItem *menuItemClose;
        wxMenu *menuEdit;
        wxMenuItem *menuItemCut;
        wxMenuItem *menuItemCopy;
        wxMenuItem *menuItemPaste;
        wxMenuItem *menuItemSelectAll;
        wxMenuItem *menuItemSeparator2;
        wxMenuItem *menuItemRename;
        wxMenuItem *menuItemDelete;
        wxMenuItem *menuItemSeparator3;
        wxMenuItem *menuItemAttributes;
        wxMenuItem *menuItemSeparator4;
        wxMenuItem *menuItemCreateNew;
        wxMenu *menuView;
        wxMenuItem *menuItemRefresh;
        wxMenu *menuTools;
        wxMenuItem *menuItemCheckImage;
        wxMenu *menuHelp;
        wxMenuItem *menuItemAbout;
        wxStatusBar *statusMainWindow;
        wxBoxSizer *sizerMainWindow;
        wxPanel *panelImageFile;
        wxGridBagSizer *sizerImage;
        wxStaticText *textImageType;
        wxBoxSizer *sizerImageType;
        wxComboBox *comboboxImageType;
        wxStaticText *textDiskdefsCount;
        wxStaticText *textImageFile;
        wxTextCtrl *editImageFile;
        wxButton *buttonImageFile;
        wxPanel *panelImageViews;
        wxBoxSizer *sizerImageViews;
        wxSplitterWindow *splitterImageViews;
        wxPanel *splitterPageImageContents;
        wxBoxSizer *sizerImageContents;
        wxListView *listImageContents;
        wxStaticLine *lineImageContents;
        wxTextCtrl *textContentsInfo;
        wxPanel *splitterPageMessages;
        wxBoxSizer *sizerMessages;
        wxBoxSizer *sizerMessagesControl;
        wxButton *buttonClearMessages;
        wxButton *buttonSaveMessages;
        wxStaticLine *lineTextMessages;
        wxPanel *panelTextMessages;
        wxBoxSizer *sizerTextMessages;
        wxTextCtrl *textMessages;

    protected:

    public:
        wxMenuBar *GetMenuMainWindow() {
            return menuMainWindow;
        }
        wxStatusBar *GetStatusMainWindow() {
            return statusMainWindow;
        }
        wxStaticText *GetTextImageType() {
            return textImageType;
        }
        wxComboBox *GetComboboxImageType() {
            return comboboxImageType;
        }
        wxStaticText *GetTextDiskdefsCount() {
            return textDiskdefsCount;
        }
        wxStaticText *GetTextImageFile() {
            return textImageFile;
        }
        wxTextCtrl *GetEditImageFile() {
            return editImageFile;
        }
        wxButton *GetButtonImageFile() {
            return buttonImageFile;
        }
        wxPanel *GetPanelImageFile() {
            return panelImageFile;
        }
        wxListView *GetListImageContents() {
            return listImageContents;
        }
        wxStaticLine *GetLineImageContents() {
            return lineImageContents;
        }
        wxTextCtrl *GetTextContentsInfo() {
            return textContentsInfo;
        }
        wxPanel *GetSplitterPageImageContents() {
            return splitterPageImageContents;
        }
        wxButton *GetButtonClearMessages() {
            return buttonClearMessages;
        }
        wxButton *GetButtonSaveMessages() {
            return buttonSaveMessages;
        }
        wxStaticLine *GetLineTextMessages() {
            return lineTextMessages;
        }
        wxTextCtrl *GetTextMessages() {
            return textMessages;
        }
        wxPanel *GetPanelTextMessages() {
            return panelTextMessages;
        }
        wxPanel *GetSplitterPageMessages() {
            return splitterPageMessages;
        }
        wxSplitterWindow *GetSplitterImageViews() {
            return splitterImageViews;
        }
        wxPanel *GetPanelImageViews() {
            return panelImageViews;
        }
        Ui_MainWindow(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString &title = _("CP/M Image File Explorer"), const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxSize(640, 480), long style = wxDEFAULT_FRAME_STYLE);
        virtual ~Ui_MainWindow();
};

#endif
