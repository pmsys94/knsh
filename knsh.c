#include <sys/wait.h>
#include "sysenv.h"
#include "knsh_uif.h"
#include "knsh_proc.h"

int main(int argc, char* argv[], char* envp[]){
	
	if(userInit() == NULL){
		char errInit[] = "Error on initiating the shell\0";
		logWrite(errInit);
		fprintf(stderr, "%s\n", errInit);
		return EXIT_FAILURE;
	}
	if(argc > 1){
		
	} else {
		pid_t p = fork();
		switch(p){
			case CHILD:{
				char* args[2] = {"/bin/uname\0", "-a\0"};
				execvp(args[0], args);
				char err_p_uname_exec[] = "Error: on running :\0";
				fprintf(stderr, "%s %s\n", err_p_uname_exec, args[0]);
				logWrite("Error running uname\0");
				break;
			}
			case FAILURE:{
				char err_p_uname[] = "Error: cold not fork for uname\0";
				fprintf(stderr, "%s\n", err_p_uname);
				logWrite(err_p_uname);
				break;
			}
			default: {
				wait(NULL);
			}
		}
		uifr();
	}

	return EXIT_SUCCESS;
}
