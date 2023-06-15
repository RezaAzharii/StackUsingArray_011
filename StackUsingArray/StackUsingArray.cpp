#include <iostream>
#include <string>
using namespace std;

class Program {
private:
	string stack_array[5];
	int top;
public:
	Program() {
		top = -1;
	}

	string push(string element) {							//
		if (top == 4) {
			cout << "Stack is full" << endl;
			return "";
		}

		top++;
		stack_array[top] = element;

		cout << endl;
		cout << element << " ditambahkan(pushed)" << endl;

		return element;
	}

	void POP() {
		if (empty()) {
			cout << "\nStack is empty. Cannot pop." << stack_array[5] << endl;
			return;
		}
		cout << "\nThe popped element is : " << stack_array[5] << endl;
		top--;

	}

	
};