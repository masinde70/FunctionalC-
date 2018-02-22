appname := output
CXX := g++
CXXFLAGS := -std=c++11

output: range_based_loop.o
	$(CXX) $(CXXFLAGS) range_based_loop.o -o functional

functional.o: range_based_loop.cpp
	$(CXX) $(CXXFLAGS) -c range_based_loop.cpp

clean:
	rm *.o functional
