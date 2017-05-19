Examen1:    main.o Disenos.o Esculturas.o Literatura.o Obras.o Pintura.o
       g++ main.o Disenos.o Esculturas.o Literatura.o Obras.o Pintura.o -o main

main.o: main.cpp Disenos.h Esculturas.h Literatura.h Obras.h Pintura.h
    g++ -c main.cpp

Obras.o:    Obras.cpp Obras.h
    g++ -c Obras.cpp

Disenos.o:  Disenos.cpp Disenos.h Obras.h
    g++ -c Disenos.cpp

Esculturas.o:   Esculturas.cpp Esculturas.h Obras.h
    g++ -c Esculturas.cpp

Literatura.o:   Literatura.cpp Literatura.h Obras.h
    g++ -c Literatura.cpp

Pintura.o:      Pintura.cpp Pintura.h Obras.h
    g++ -c Pintura.cpp

clean:  
            rm -f *.o .main
