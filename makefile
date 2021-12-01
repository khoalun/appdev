OBJ = main.o screen.o sound.o comm.o
APPNAME = sound.out 
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)	-lm		-lcurl		#math library is used

%.o : %.c
	gcc -c -o $@ $<

cc

clean : 
	rm $(APPNAME) $(OBJ) 
r  :
	tar cf sound.tar *.c *.h makefile

