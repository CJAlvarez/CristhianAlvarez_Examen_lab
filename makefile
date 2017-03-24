main.exe: main.o Ser.o Marina.o Piratas.o Revolucionarios.o FrutaDiablo.o Paramecia.o Zoan.o Logia.o
	g++ main.o Ser.o Marina.o Piratas.o Revolucionarios.o FrutaDiablo.o Paramecia.o Zoan.o Logia.o -o run -std=c++0x

main.o: main.cpp Ser.o
	g++ main.cpp -c -std=c++0x

Ser.o: Ser.h Ser.cpp
	g++ Ser.cpp -c -std=c++0x

Marina.o: Marina.h Marina.cpp Ser.h
	g++ Marina.cpp -c -std=c++0x

Piratas.o: Piratas.h Piratas.cpp Ser.h
	g++ Piratas.cpp -c -std=c++0x

Revolucionarios.o: Revolucionarios.h Revolucionarios.cpp Ser.h
	g++ Revolucionarios.cpp -c -std=c++0x

FrutaDiablo.o: FrutaDiablo.h FrutaDiablo.cpp
	g++ FrutaDiablo.cpp -c -std=c++0x

Paramecia.o: Paramecia.h Paramecia.cpp FrutaDiablo.h
	g++ Paramecia.cpp -c -std=c++0x

Zoan.o: Zoan.h Zoan.cpp FrutaDiablo.h
	g++ Zoan.cpp -c -std=c++0x

Logia.o: Logia.h Logia.cpp FrutaDiablo.h
	g++ Logia.cpp -c -std=c++0x