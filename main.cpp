// created along this guideline: https://www.codeproject.com/Articles/721062/Cplusplus-CLI-for-Beginners
// under guidance of Wenzel Hilbig of alfatraining

#include "frmMain.h"
#include <algorithm> // very powerful library, esp. for sorts, finds and strange stuff
/*
	Super Slot Machine for CLR
	Frank G. Dahncke
	Build 0014
	21-FEB-2020	1.0		creation
	25-FEB-2020	1.1		images
	26-FEB-2020	1.1.1	call CalculatorCLR
	02-MAR-2020 1.2		statistics
	05-MAR-2020	1.2.1	sound
*/

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Reflection;

[assembly:AssemblyVersionAttribute("1.2.1.14")] ;
[assembly:AssemblyFileVersionAttribute("1.2.1.14")] ;

// no [STAThread], b/c it impairs applications with a GUI
[STAThread] //needed for Clipboard actions

//void main(array<String^>^ args) {
void main(void) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//get app window
	SuperSlotMachine::frmMain^ window1 = gcnew SuperSlotMachine::frmMain;

	//start app with window1
	Application::Run(window1);
}