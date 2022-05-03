app:	main.o
	g++ main.o -o app 

main.o:	main.cpp  maths.h 
	g++ -c main.cpp

clean: 
	rm *.o app
