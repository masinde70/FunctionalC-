appname := output
CXX := g++
CXXFLAGS := -std=c++11

output: array.o
	$(CXX) $(CXXFLAGS) array.o -o array

functional.o: array.cpp
	$(CXX) $(CXXFLAGS) -c array.cpp

clean:
	rm *.o array
