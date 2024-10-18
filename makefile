run : bin/programa
	./bin/programa


bin/programa : main.cpp include/foco.hpp include/Persona.hpp
	g++ main.cpp -Iinclude -o bin/programa
