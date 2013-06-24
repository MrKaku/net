// testRounding.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "testRounding.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// The one and only application object

CWinApp theApp;

using namespace std;

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{
	int nRetCode = 0;

	HMODULE hModule = ::GetModuleHandle(NULL);

	if (hModule != NULL)
	{
		// initialize MFC and print and error on failure
		if (!AfxWinInit(hModule, NULL, ::GetCommandLine(), 0))
		{
			// TODO: change error code to suit your needs
			_tprintf(_T("Fatal Error: MFC initialization failed\n"));
			nRetCode = 1;
		}
		else
		{
			// TODO: code your application's behavior here.
		}
	}
	else
	{
		// TODO: change error code to suit your needs
		_tprintf(_T("Fatal Error: GetModuleHandle failed\n"));
		nRetCode = 1;
	}
    
    float delta = 1e-7;
    float f = 0.5f;
    printf("%.0f\n", f);

    f = 0.0499999f;
    printf("%.1f\n", f+delta);

    f = 0.005f;   
    printf("%.2f\n", f);

    f = 0.0005f;

    printf("%.3f\n", f);



    
    delta = 1e-7;
    f = 3.55f;
    printf("%.1f\n", f+delta);
    

	return nRetCode;
}
