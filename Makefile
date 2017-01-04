EXE=robot
CC=g++ -std=c++11
FLAGS=-Wall 
DSRC=src/
DINC=src/

OBJ=$(DOBJ)main.o $(DOBJ)Robot.o $(DOBJ)EtatRobot.o $(DOBJ)Objet.o $(DOBJ)Plot.o $(DOBJ)Position.o $(DOBJ)aVideFacePlot.o $(DOBJ)enChargeFacePlot.o $(DOBJ)EnRoute.o $(DOBJ)Fige.o $(DOBJ)WrongStateException.o $(DOBJ)AfficheurTexte.o $(DOBJ)LecteurFichier.o $(DOBJ)Commande.o $(DOBJ)CommandeRobot.o $(DOBJ)Saisir.o $(DOBJ)Figer.o $(DOBJ)Repartir.o $(DOBJ)aVide.o $(DOBJ)enCharge.o $(DOBJ)Avancer.o $(DOBJ)RencontrerPlot.o $(DOBJ)Tourner.o $(DOBJ)Poser.o $(DOBJ)Peser.o $(DOBJ)EvaluerPlot.o $(DOBJ)DefaireException.o $(DOBJ)DefaireCommande.o

$(EXE):$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(EXE)

$(DOBJ)main.o:$(DSRC)main.cpp 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Robot.o:$(DSRC)Robot.cpp $(DINC)Robot.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)EtatRobot.o:$(DSRC)EtatRobot.cpp $(DINC)EtatRobot.h
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Objet.o:$(DSRC)Objet.cpp $(DINC)Objet.h
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Plot.o:$(DSRC)Plot.cpp $(DINC)Plot.h
	$(CC) $(FLAGS) -c $< -o $@ 


$(DOBJ)Position.o:$(DSRC)Position.cpp $(DINC)Position.h
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)aVideFacePlot.o:$(DSRC)aVideFacePlot.cpp $(DINC)aVideFacePlot.h EtatRobot.o
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)enChargeFacePlot.o:$(DSRC)enChargeFacePlot.cpp $(DINC)enChargeFacePlot.h EtatRobot.o
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)EnRoute.o:$(DSRC)EnRoute.cpp $(DINC)EnRoute.h EtatRobot.o
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Fige.o:$(DSRC)Fige.cpp $(DINC)Fige.h EtatRobot.o
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)WrongStateException.o:$(DSRC)WrongStateException.cpp $(DINC)WrongStateException.h
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)AfficheurTexte.o:$(DSRC)AfficheurTexte.cpp $(DINC)AfficheurTexte.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)LecteurFichier.o:$(DSRC)LecteurFichier.cpp $(DINC)LecteurFichier.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Commande.o:$(DSRC)Commande.cpp $(DINC)Commande.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)CommandeRobot.o:$(DSRC)CommandeRobot.cpp $(DINC)CommandeRobot.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Saisir.o:$(DSRC)Saisir.cpp $(DINC)Saisir.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)RencontrerPlot.o:$(DSRC)RencontrerPlot.cpp $(DINC)RencontrerPlot.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Figer.o:$(DSRC)Figer.cpp $(DINC)Figer.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Repartir.o:$(DSRC)Repartir.cpp $(DINC)Repartir.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Avancer.o:$(DSRC)Avancer.cpp $(DINC)Avancer.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Tourner.o:$(DSRC)Tourner.cpp $(DINC)Tourner.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)aVide.o:$(DSRC)aVide.cpp $(DINC)aVide.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)enCharge.o:$(DSRC)enCharge.cpp $(DINC)enCharge.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Poser.o:$(DSRC)Poser.cpp $(DINC)Poser.h 
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Peser.o:$(DSRC)Peser.cpp $(DINC)Peser.h 
	$(CC) $(FLAGS) -c $< -e $@ 

$(DOBJ)EvaluerPlot.o:$(DSRC)EvaluerPlot.cpp $(DINC)EvaluerPlot.h 
	$(CC) $(FLAGS) -c $< -e $@ 

$(DOBJ)DefaireCommande.o:$(DSRC)DefaireCommande.cpp $(DINC)DefaireCommande.h 
	$(CC) $(FLAGS) -c $< -e $@ 

$(DOBJ)DefaireException.o:$(DSRC)DefaireException.cpp $(DINC)DefaireException.h 
	$(CC) $(FLAGS) -c $< -e $@ 

clean:
	rm -f ./$(DSRC)*~ ./$(DOBJ)*.o ./*~ ./$(DINC)*~ ./$(EXE)

