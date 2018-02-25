appname := output
CXX := g++
CXXFLAGS := -std=c++11

output: vector.o
	$(CXX) $(CXXFLAGS) vector.o -o vector

functional.o: vector.cpp
	$(CXX) $(CXXFLAGS) -c vector.cpp

clean:
	rm *.o vector
