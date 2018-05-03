#include "sysenv.h"

void* userInit(){
	uuid = getuid();
	tupwd = getpwuid(uuid);
	return tupwd;
}

int logWrite(char* str){

	return 0;	
}
