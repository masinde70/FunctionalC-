#include<iostream>
#include<sstream>
#include<string>

using namespace std;

class Employee {
	private:
		string name;
		double pay;
	public:
		Employee() {
			name = "";
			pay = 0;
		}
	    Employee (string empName, double payRate) {
		   name =  empName;
		   pay = payRate;
		}
		
		string getName() const{
			return name;
		}

		void setName(string empName) {
			name = empName;
		}
		
		double getPay() {
			return pay;
		}

		void setPay(double payRate) {
			pay = payRate;
		}

		string toString() {
			stringstream stm;
			stm << name << " : " << pay;
			return stm.str();
		}
};

int main() {
 Employee emp1("Masinde ", 455500);
 Employee emp2("Mari ", 100000);
 cout << emp1.toString() <<endl;
 cout << emp2.toString() <<endl;

 return 0;

}
