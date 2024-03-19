#include "MainForm.h"
#include "Zavd1.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab5::MainForm form;
	Application::Run(% form);
}
