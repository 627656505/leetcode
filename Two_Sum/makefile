leet1 : Test.o twoSum.o \
		bubbleSort.o
	cc -o leet1 -g Test.o twoSum.o \
		bubbleSort.o  

Test.o : Test.c twoSum.h
	cc -c -g Test.c
twoSum.o : twoSum.c bubbleSort.h 
	cc -c -g twoSum.c
bubbleSort.o : bubbleSort.c 
	cc -c -g bubbleSort.c
clean :
	del  leet1 Test.o twoSum.o \
		bubbleSort.o