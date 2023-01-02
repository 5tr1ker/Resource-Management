#include "functions.h"
#include "resourceInfo.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	comonResourceManagement::resourceInfo form;
	Application::Run(% form);
}