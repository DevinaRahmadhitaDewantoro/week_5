# Target to compile the object file
reversedArray: reversedArray.o
	g++ reversedArray.o -o reversedArray.exe

# Target to compile the C++ program
reversedArray.o: reversedArray.cpp
	g++ -c reversedArray.cpp -o reversedArray.o

# Target to run the program (interactively)
run: reversedArray
	./reversedArray.exe

# Target to compile the object Test file
reversedArrayTest: reversedArrayTest.o
	g++ reversedArrayTest.o -o reversedArrayTest.exe

# Target to compile the C++ Test program
reversedArrayTest.o: reversedArrayTest.cpp
	g++ -c reversedArrayTest.cpp -o reversedArrayTest.o

# Target to run the Test program
test: reversedArrayTest
	./reversedArrayTest.exe

# Target to clean up compiled files
clean:
	rm -f reversedArray.o reversedArrayTest.o reversedArray.exe reversedArrayTest.exe
