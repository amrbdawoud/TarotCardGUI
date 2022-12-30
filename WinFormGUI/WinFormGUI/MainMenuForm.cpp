#include "MainMenuForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WinFormGUI::MainMenuForm form;
	Application::Run(% form);

}