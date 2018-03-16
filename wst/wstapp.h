#ifndef WST_APP_H
#define WST_APP_H

#include "wsthttp.h"

class AgoraRecorder;

class WstApp
{
public:
    WstApp();
    ~WstApp();

    int Run();
    int Run(int argc, char ** argv);

private:
    int     parseOption(int argc, char ** argv);
    void    initSignals();
    int     daemon();

protected:
    void mainThread();
    void sub1Thread();
    void sub2Thread();
    static void fSignalHandler(int signum);


private:
    // quit flag
    static bool _is_quit;
};

#endif // WST_APP_H