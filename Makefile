#########################################
# Makefile pour le TP N°2 de C++		#
# Par	Tristan Pourcelot				#
#########################################


## Conf générale
NUM_BINOME=B3213
DOSSIER_SOURCE=src
NOM_EXEC=Main
DEPENDANCES=Fichier.cpp Flot.cpp Identificateur.cpp Occurrences.cpp RefCroisees.cpp
OBJFILES=Fichier.o Flot.o Identificateur.o Occurrences.o RefCroisees.o
## Conf de compilation
CC=g++
CFLAGS=-W -Wall

all : $(NOM_EXEC)

#Construction de l'exécutable
$(NOM_EXEC) :  $(OBJFILES) $(NOM_EXEC).o
	@echo "Compilation finale en cours"
	$(CC) $(CFLAGS) -o $(NOM_EXEC) $(NOM_EXEC).o $(OBJFILES)

%.o: $(DOSSIER_SOURCE)/%.cpp
	@echo "Compil de $<"
	$(CC) $(CFLAGS) -o $@ -c $< 

clean :
	rm -f *.o && rm -f *.out
	cd bin && rm -f *.o && cd ..

.PHONY : clean
