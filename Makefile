appname := output
CXX := g++
CXXFLAGS := -std=c++11

output: begin_end.o
	$(CXX) $(CXXFLAGS) begin_end.o -o functional

functional.o: begin_end.cpp
	$(CXX) $(CXXFLAGS) -c begin_end.cpp

clean:
	rm *.o functional
	
