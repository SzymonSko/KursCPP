main: LManipulacjaStrumieniemCout.o ZadCandCPP.o ZadCinCoutFile.o ZadPetle.o ZadPrzekazywanieTablicKopia.o ZadKcpp.o main.o
	g++ main.o LManipulacjaStrumieniemCout.o ZadCandCPP.o ZadCinCoutFile.o ZadPetle.o ZadPrzekazywanieTablicKopia.o  ZadKcpp.o -o main
	rm -rf *.o

LManipulacjaStrumieniemCout.o: src/LManipulacjaStrumieniemCout.cc
	g++ -c src/LManipulacjaStrumieniemCout.cc -I./include -o LManipulacjaStrumieniemCout.o

ZadCandCPP.o: src/ZadCandCPP.cc
	g++ -c src/ZadCandCPP.cc -I./include -o ZadCandCPP.o

ZadCinCoutFile.o: src/ZadCinCoutFile.cc
	g++ -c src/ZadCinCoutFile.cc -I./include -o ZadCinCoutFile.o

ZadPetle.o: src/ZadPetle.cc
	g++ -c src/ZadPetle.cc -I./include -o ZadPetle.o

ZadPrzekazywanieTablicKopia.o: src/ZadPrzekazywanieTablicKopia.cc
	g++ -c src/ZadPrzekazywanieTablicKopia.cc -I./include -o ZadPrzekazywanieTablicKopia.o

ZadKcpp.o: src/ZadKcpp.cc
	g++ -c src/ZadKcpp.cc -I./include -o ZadKcpp.o

main.o: main.cc
	g++ -c main.cc -I./include -o main.o

clean:
	 rm -rf *.o *.o
cleanall:
	 rm -rf *.o *.o *~ main