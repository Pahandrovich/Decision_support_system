#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Decisionsupportsystemprog02::MyForm form; //WinFormsTest - ��� ������ �������
	Application::Run(%form);
}