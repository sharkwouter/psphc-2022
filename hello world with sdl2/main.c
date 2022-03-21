#include <SDL.h>
#include <pspdebug.h>
#include <pspdisplay.h>

int main(int argc, char *argv[])
{
    pspDebugScreenInit();

    while(1)
    {
        pspDebugScreenSetXY(0, 0);
        pspDebugScreenPrintf("Hello World!");
        sceDisplayWaitVblankStart();
    }

    return 0;
}