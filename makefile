# Makefile pour VectorTest

# Nom de l'exécutable
test-Vector: test-Vector.o forme.o
	g++ -o test-Vector test-Vector.o forme.o

# Fichier objet compilé depuis le fichier de test et le header vecteur
test-Vector.o: mainTest.cpp vecteur.h forme.h
	g++ -g -c mainTest.cpp -o test-Vector.o

forme.o: forme.cpp coordonnee.h forme.h
	g++ -g -c forme.cpp -o forme.o

# Nettoyage des fichiers temporaires et exécutable
clean:
	rm -f *.o test-Vector

