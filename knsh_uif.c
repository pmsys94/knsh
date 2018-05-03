#include "knsh_uif.h"

void uifr(){

	char ustdi[1000];
	showPrompt();
	int rt;
	while(fgets(ustdi, 1000, stdin)){
		if(strcmp(ustdi, "quit") || strcmp(ustdi, "exit")){
			break;
		} else {
			printf("something is working here...");	
		}
		putchar('\n');
		showPrompt();
	}

}

void showPrompt(){
	if(tupwd != NULL){
		printf("nouser@host> ");
	} else {
		printf("%s@host> ", tupwd->pw_name);
	}
}
