CFLAGS += -W -Wall

ifdef debug
	CFLAGS += -ggdb -DDEBUG
else
	CFLAGS += -Werror -O3
endif

app=knsh

all: run


run: ${app}
	./${app}

dbgrun: ${app}
	gdb ./${app}

${app}: ${app}.o


clean: 
	${RM} -rf *.o ${app} *.out

