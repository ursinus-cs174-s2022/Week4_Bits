CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: num2binary mynum2binary binary2num mybinary2num cmdargs

num2binary: num2binary.cpp
	$(CC) $(CFLAGS) -o num2binary num2binary.cpp

mynum2binary: mynum2binary.cpp
	$(CC) $(CFLAGS) -o mynum2binary mynum2binary.cpp

binary2num: binary2num.cpp
	$(CC) $(CFLAGS) -o binary2num binary2num.cpp

mybinary2num: mybinary2num.cpp
	$(CC) $(CFLAGS) -o mybinary2num mybinary2num.cpp

cmdargs: cmdargs.cpp
	$(CC) $(CFLAGS) -o cmdargs cmdargs.cpp

clean:
	rm num2binary mynum2binary binary2num mybinary2num cmdargs