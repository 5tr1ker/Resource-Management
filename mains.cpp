#include "resourceDetailPage.h"
#include "createResource.h"
#include "functions.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	comonResourceManagement::resourceDetailPage form;	// Project1 - ���� ������Ʈ �̸�
	form.ulid = "9625427154";
	Application::Run(% form);
}