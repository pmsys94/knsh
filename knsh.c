#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <pwd.h>


int main(int argc, char* argv[], char* envp[]){

	struct passwd *tupwd;
	uid_t uuid = getuid();
	tupwd = getpwuid(uuid);
	
	if(tupwd == NULL){
		fprintf(stderr, "Error on initiating the shell\n");
		return EXIT_FAILURE;
	}
	printf("Wellcome %s\n", tupwd->pw_name);

	return EXIT_SUCCESS;
}
