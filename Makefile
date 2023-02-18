A4:	main.o Control.o View.o Date.o Guest.o Room.o RoomArray.o Hotel.o Reservation.o Recorder.o GuestRecorder.o StayRecorder.o UpgradeRecorder.o ResManager.o
	g++ -o A4 main.o Control.o View.o Date.o Guest.o Room.o RoomArray.o Hotel.o Reservation.o Recorder.o GuestRecorder.o StayRecorder.o UpgradeRecorder.o ResManager.o

main.o:		main.cc Control.h
		g++ -c main.cc

Control.o: 	Control.cc Control.h 
		g++ -c Control.cc

View.o: 	View.cc View.h
		g++ -c View.cc

Date.o: 	Date.cc Date.h
		g++ -c Date.cc

Guest.o: 	Guest.cc Guest.h 
		g++ -c Guest.cc
		
Room.o: 	Room.cc Room.h 
		g++ -c Room.cc

RoomArray.o: 	RoomArray.cc RoomArray.h
		g++ -c RoomArray.cc

Hotel.o: 	Hotel.cc Hotel.h
		g++ -c Hotel.cc

Reservation.o: 	Reservation.cc Reservation.h
		g++ -c Reservation.cc

Recorder.o: 	Recorder.cc Recorder.h
		g++ -c Recorder.cc
	
GuestRecorder.o: GuestRecorder.cc GuestRecorder.h 
		g++ -c GuestRecorder.cc
	
StayRecorder.o: StayRecorder.cc StayRecorder.h 
		g++ -c StayRecorder.cc
		
UpgradeRecorder.o: UpgradeRecorder.cc UpgradeRecorder.h 
		g++ -c UpgradeRecorder.cc
		
ResManager.o: 	ResManager.cc ResManager.h 
		g++ -c ResManager.cc
	
clean:
	rm -f *.o A4
