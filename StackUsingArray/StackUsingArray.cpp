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

	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >> 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	Program s;

	while (true)
	{
		cout << endl;
		cout << "\n***Stack Menu***\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Display\n";
		cout << "4. Exit\n";
		cout << "\nEnter your choice: ";
		string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
		switch (ch) {
		case '1': {
			cout << "\nEnter an element: ";
			string element;
			getline(cin, element);
			s.push(element);
			break;
		}
		case '2':
			if (s.empty()) {
				cout << "\nStack is empty." << endl;
				break;
			}
			s.POP();
		case '3':
			s.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\nInvalid choice." << endl;
			break;

		}
	}
}