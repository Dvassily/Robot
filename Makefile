EXE=robot
CC=g++ -std=c++11
FLAGS=-Wall 
DSRC=src/
DINC=src/

OBJ=$(DOBJ)main.o $(DOBJ)Robot.o $(DOBJ)EtatRobot.o $(DOBJ)Objet.o $(DOBJ)Plot.o $(DOBJ)Position.o $(DOBJ)aVideFacePlot.o $(DOBJ)enChargeFacePlot.o $(DOBJ)EnRoute.o $(DOBJ)Fige.o $(DOBJ)WrongStateException.o

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

$(DOBJ)aVideFacePlot.o:$(DSRC)aVideFacePlot.cpp $(DINC)aVideFacePlot.h EtatRobot.h EtatRobot.cpp
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)enChargeFacePlot.o:$(DSRC)enChargeFacePlot.cpp $(DINC)enChargeFacePlot.h EtatRobot.h EtatRobot.cpp
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)EnRoute.o:$(DSRC)EnRoute.cpp $(DINC)EnRoute.h EtatRobot.h EtatRobot.cpp
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)Fige.o:$(DSRC)Fige.cpp $(DINC)Fige.h EtatRobot.h EtatRobot.cpp
	$(CC) $(FLAGS) -c $< -o $@ 

$(DOBJ)WrongStateException.o:$(DSRC)WrongStateException.cpp $(DINC)WrongStateException.h EtatRobot.h EtatRobot.cpp
	$(CC) $(FLAGS) -c $< -o $@ 

clean:
	rm -f ./$(DSRC)*~ ./$(DOBJ)*.o ./*~ ./$(DINC)*~ ./$(EXE)

