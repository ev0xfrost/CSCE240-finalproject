GPP = g++ -O3 -Wall

UTILS = ../../Utilities

M = Main.o
R = OneRecord.o
A = RecordArray.o
O = Operators.o
S = Scanner.o
SL = ScanLine.o
U = Utils.o

Aprog: $M $R $A $O $S $(SL) $U
	$(GPP) -o Aprog $M $R $A $S $(SL) $U

Main.o: Main.h Main.cpp
	$(GPP) -c Main.cpp

OneRecord.o: OneRecord.h OneRecord.cpp
	$(GPP) -c OneRecord.cpp

RecordArray.o: RecordArray.h RecordArray.cpp
	$(GPP) -c RecordArray.cpp

Operators.o: Operators.cpp
	$(GPP) -c Operators.cpp

Scanner.o: $(UTILS)/Scanner.h $(UTILS)/Scanner.cpp
	$(GPP) -c $(UTILS)/Scanner.cpp

ScanLine.o: $(UTILS)/ScanLine.h $(UTILS)/ScanLine.cpp
	$(GPP) -c $(UTILS)/ScanLine.cpp

Utils.o: $(UTILS)/Utils.h $(UTILS)/Utils.cpp
	$(GPP) -c $(UTILS)/Utils.cpp
