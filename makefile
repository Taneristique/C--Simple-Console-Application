app: 
	g++ main.o -o app 

install:
	cp conio.h /usr/include/

uninstall:
	rm /usr/include/conio.h

main.o:main.cpp  maths.h 
	$ (CC) -c main.cpp

clean: 
	rm -rf *.o app