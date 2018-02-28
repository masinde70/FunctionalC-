ppname := output
CXX := g++
CXXFLAGS := -std=c++11

output: Employee.o
	$(CXX) $(CXXFLAGS) Employee.o -o Employee

Employee.o: Employee.cpp
	$(CXX) $(CXXFLAGS) -c Employee.cpp

clean:
	rm *.o Employee
                 
