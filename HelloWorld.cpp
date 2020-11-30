#include <windows.h>

int main()
{
    HANDLE stdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (stdOut != NULL && stdOut != INVALID_HANDLE_VALUE)
    {
        WriteConsoleA(stdOut, "Hello World!", 12, 0, NULL);
    }
    return 0;
}
