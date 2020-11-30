#include <windows.h>

int main()
{
    HANDLE stdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (stdOut != NULL && stdOut != INVALID_HANDLE_VALUE)
    {
        WriteConsoleA(stdOut, (const char*) "Hello World!", (size_t) 12, (DWORD) 0, NULL);
    }
    return 0;
}
