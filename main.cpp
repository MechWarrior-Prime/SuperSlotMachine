#include "frmMain.h"
#include <algorithm> // very powerful library, esp. for sorts, finds and strange stuff
/*
	Super Slot Machine for CLR
	Frank G. Dahncke
	Build 0001
	21-FEB-2020	1.0		creation
*/
using namespace System;
using namespace System::Windows::Forms;

// no [STAThread], b/c it impairs applications with a GUI

//void main(array<String^>^ args) {
void main(void) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//get app window
	SuperSlotMachine::frmMain^ window1 = gcnew SuperSlotMachine::frmMain;

	//start app with window1
	Application::Run(window1);
}