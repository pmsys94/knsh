CFLAGS += -W -Wall

ifdef debug
	CFLAGS += -ggdb -DDEBUG
else
	CFLAGS += -Werror -O3
endif

app=knsh
libobj=${app}_uif.o sysenv.o

all: run


run: ${app}
	./${app}

dbgrun: ${app}
	gdb ./${app}

${app}: ${app}.o ${libobj}


clean: 
	${RM} -rf *.o ${app} *.out

