// we test the stack by pushing, topping and popping some values 
#include <string>
#include <iostream>

using namespace std;

#include "Cell.h"
#include "Stack.h"

int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);

	cout << "top" << s.top() << ", size " << s.size() << ", empty " << (s.empty() ? "true" : "false") << endl;
	
	s.pop();
	s.pop();
	s.push(4);
	cout << "top" << s.top() << ",size " << s.size() << ",empty " << (s.empty() ? "true":"false") << endl;
}
