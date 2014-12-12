GPP = g++ -O3 -Wall

UTILS = ../../Utilities

M = Main.o
R = OneRecord.o
A = RecordArray.o
O = Operators.o
T = SortRoutines.o
S = Scanner.o
SL = ScanLine.o
U = Utils.o

Aprog: $M $R $A $O $T $S $(SL) $U
	$(GPP) -o Aprog $M $R $A $O $T $S $(SL) $U

Main.o: Main.h Main.cpp
	$(GPP) -c Main.cpp

OneRecord.o: OneRecord.h OneRecord.cpp
	$(GPP) -c OneRecord.cpp

RecordArray.o: RecordArray.h RecordArray.cpp
	$(GPP) -c RecordArray.cpp

Operators.o: Operators.cpp
	$(GPP) -c Operators.cpp

SortRoutines.o: SortRoutines.h SortRoutines.cpp
	$(GPP) -c SortRoutines.cpp

Scanner.o: Scanner.h Scanner.cpp
	$(GPP) -c Scanner.cpp

ScanLine.o: ScanLine.h ScanLine.cpp
	$(GPP) -c ScanLine.cpp

Utils.o: Utils.h Utils.cpp
	$(GPP) -c Utils.cpp
