#include "MyForm.h"

using namespace MyHouseKeepingBook;

[STAThreadAttribute]

int main() {
	Application::Run(gcnew MyForm());
	return 0;
}