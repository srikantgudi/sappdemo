#this file has been generated automatically by the
#sappeur compiler. If you want to change anything,
#please rename this file. It will be overwritten on the
#next sappeur compiler run.

OBJECTS=placementNew.o staticData.o determStackMemory.o suchoi.o QuickMath.o System.o AppMain.o generative_impls.o mapping.o main.o threadFunctions.o
QuickMath.o:QuickMath.cpp
System.o:System.cpp
AppMain.o:AppMain.cpp


$(OBJECTS):header.h
header.h:mapping.h
CC = gcc
VPATH=/Users/srikantgudi/SappeurM1/cppMapping

INCLUDE=-I/usr/include/unicode -I/Users/srikantgudi/SappeurM1/cppMapping -I. -I.. 

LDLIBS=-lstdc++ -lm
.SUFFIXES: .o .cpp
OPT=-g
MISC_OPT=-DSPR_USE_PTHREAD_MUTEX_LOCKS=1 -DLINUX_SAPPEUR=1 -DSPR_DEBUG=1 -DSPR_PTHREAD=1 -pthread
.cpp.o:
	$(CC) $(OPT) $(MISC_OPT) -DGCC_X86 $(INCLUDE) -c $<
all:$(OBJECTS)
	$(CC) $(OPT) $(MISC_OPT) -o sprprog.exe $^ $(LDLIBS)
clean:
	rm *.o sprprog.exe
