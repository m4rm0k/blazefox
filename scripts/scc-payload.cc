// Axel '0vercl0k' Souchet - 13-October-2018
// scc.exe --arch x64 --platform windows scc-payload.cc
void main() {
    STARTUPINFOA Si;
    PROCESS_INFORMATION Pi;
    memset(&Si, 0, sizeof(Si));
    Si.cb = sizeof(Si);
    CreateProcessA(
        NULL,
        "calc",
        NULL,
        NULL,
        false,
        0,
        NULL,
        NULL,
        &Si,
        &Pi
    );
    ExitProcess(1337);
}
