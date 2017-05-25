#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Phone3;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Phone3::MyForm form;
	Application::Run(%form);
}