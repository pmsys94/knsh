#ifndef SYSENV_H
#define SYSENV_H

	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h>
	#include <errno.h>
	#include <sys/types.h>
	#include <pwd.h>

	struct passwd *tupwd;
	uid_t uuid;

	void* userInit();
	int logWrite(char* str);

#endif
