#include <windows.h> 

int main()
{
    HANDLE stdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (stdOut != NULL && stdOut != INVALID_HANDLE_VALUE)
    {
        DWORD written = 0;

        const char* message = "Hello World!";

        size_t size = 12;
        WriteConsoleA(stdOut, message, size, &written, NULL);
    }
    return 0;
}
