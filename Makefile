.PHONY : clean all
targets = hello world
sources = main.c message.c
objects = main.o message.o
all : $(targets)
	@echo "all done"

$(targets) : $(objects)
	gcc -o $@ $^

%.o : %.c
	gcc -c $< 

# message.o : message.c
# 	gcc -c message.c

clean:
	rm -f *.o 
	rm -f hello*