ELF=read_sysinfo

all:
	gcc -o ${ELF} main.c

clean:
	rm ${ELF}
