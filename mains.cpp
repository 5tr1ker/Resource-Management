#include "resourceDetailPage.h"
#include "createResource.h"
#include "functions.h"
#include "formHistory.h"
#include "resourceInfo.h"
#include "resourceList.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	comonResourceManagement::resourceInfo form;	// Project1 - ���� ������Ʈ �̸�
	Application::Run(% form);
}