#include "mainWindow.h"

using namespace serverControl;


[STAThreadAttribute]
int main() {


	Application::Run(gcnew mainWindow());



	return 0;
}
