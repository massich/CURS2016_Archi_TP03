# MPLAB IDE generated this makefile for use with GNU make.
# Project: tp03.mcp
# Date: Fri May 27 13:09:20 2016

AS = MPASMWIN.exe
CC = mcc18.exe
LD = mplink.exe
AR = mplib.exe
RM = rm

tp03.cof : tp3.o
	$(LD) /p18F4550 /l"C:\MCC18\lib" "tp3.o" /u_CRUNTIME /u_DEBUG /o"tp03.cof" /M"tp03.map" /W

tp3.o : tp3.c ../../../../Program\ Files\ (x86)/Microchip/mplabc18/v3.40/h/delays.h iq.h ../../../../Program\ Files\ (x86)/Microchip/mplabc18/v3.40/h/adc.h iq_adc.h tp3.c ../../../../Program\ Files\ (x86)/Microchip/mplabc18/v3.40/h/p18cxxx.h ../../../../Program\ Files\ (x86)/Microchip/mplabc18/v3.40/h/p18f4550.h ../../../../Program\ Files\ (x86)/Microchip/mplabc18/v3.40/h/pconfig.h
	$(CC) -p=18F4550 "tp3.c" -fo="tp3.o" -D__DEBUG -Ou- -Ot- -Ob- -Op- -Or- -Od- -Opa-

clean : 
	$(RM) "tp3.o" "tp03.cof" "tp03.hex"

