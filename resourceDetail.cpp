#include "resourceDetail.h"
#include "createResource.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	comonResourceManagement::createResource form;	// Project1 - ���� ������Ʈ �̸�
	Application::Run(% form);
}