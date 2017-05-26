#include <Windows.h>

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	BOOL didSucceed = SystemParametersInfo(
		SPI_SETCURSORSHADOW,
		0,
		(PVOID)TRUE,
		SPIF_UPDATEINIFILE + SPIF_SENDCHANGE);

	return didSucceed ? EXIT_SUCCESS : EXIT_FAILURE;
}
