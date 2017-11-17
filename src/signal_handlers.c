#include "signal_handlers.h"
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void catch_sigint(int signalNo)
{
	signal(signalNo,SIG_IGN);
	return;
// TODO: File this!
}

void catch_sigtstp(int signalNo)
{
	signal(signalNo,SIG_IGN);
	return;
	 // TODO: File this!
}
