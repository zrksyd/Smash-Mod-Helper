#pragma once
#include "SmashData.h"
#include "HelperStructures.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>
using std::vector;

class MainFrame : public wxFrame
{
private:
	// Data Variables
	SmashData data;

	// Settings
	Settings settings;

	// GUI Parts
	wxPanel* panel;
	wxMenuBar* menuBar;
	wxMenuItem* inkMenu;
	wxMenuItem* deskMenu;

	wxBrowse browse;
	wxListBox* charsList;
	wxCheckBox** fileTypeBoxes;
	wxInitSlots initSlots;
	wxFinalSlots finalSlots;
	wxButtons buttons;
	wxLogTextCtrl* log;
	wxTextCtrl* logWindow;
	wxStatusBar* statusBar;

	string initPath;

	// Reset Helpers
	void resetFileTypeBoxes();
	void resetButtons();

	// Getters
	wxArrayString getSelectedFileTypes();
	bool isFileTypeSelected();

	// Settings
	void readSettings();
	void updateSettings();

	// Test Function
	void onTestPressed(wxCommandEvent& evt);

	// Updaters/Modifiers
	void updateFileTypeBoxes();
	void updateButtons();
	void updateInkMenu();

	// Bind Functions
	void togglePRCOutput(wxCommandEvent& evt);
	void toggleBaseReading(wxCommandEvent& evt);
	void toggleNameReading(wxCommandEvent& evt);
	void toggleInkReading(wxCommandEvent& evt);
	void onBrowse(wxCommandEvent& evt);
	void onCharSelect(wxCommandEvent& evt);
	void onFileTypeSelect(wxCommandEvent& evt);
	void onModSlotSelect(wxCommandEvent& evt);
	void onUserSlotSelect(wxCommandEvent& evt);
	void onMovePressed(wxCommandEvent& evt);
	void onDuplicatePressed(wxCommandEvent& evt);
	void onDeletePressed(wxCommandEvent& evt);
	void onLogPressed(wxCommandEvent& evt);
	void onConfigPressed(wxCommandEvent& evt);
	void onBasePressed(wxCommandEvent& evt);
	void onInkPressed(wxCommandEvent& evt);
	void onDeskPressed(wxCommandEvent& evt);
	void onPrcPressed(wxCommandEvent& evt);
	void onMenuClose(wxCommandEvent& evt);
	void onClose(wxCloseEvent& evt);

	// Destructor
	~MainFrame();

public:
	// Constructor
	MainFrame(const wxString& title);
};