#include "SignandHash.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void Hashform(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    AntiVirusGUI::SignandHash form;
    Application::Run(% form);
}
