
// in a stack, we are in interested in its top value only. The default constructor initializes the stack to
// be empty
class Stack{
	public:
		Stack();
		void push(int value); // push adds a value at the top of the stack 
		int top(); // returns the top value
		void pop(); // removes the top value
		int size() const;  // size returns the number of values in the stack 
		bool empty() const; // returns true if the stack is empty
		//int getNext() const;
	private:
		class Cell *m_firstCellPtr; // m_firstCellPtr field is a pointer to the first cell of the linked list holding the values of the stack 
		int m_size; // fields holds the current size of the stack
	
};
