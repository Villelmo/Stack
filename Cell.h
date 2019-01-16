/* a stack is a simple data type where we add value to the top, remove the value 
	on the top, and can only inspect the top value. */
// we will look into cell classes that hold pointers to both the previous and the next cell
class Cell {
	public:
		Cell(int value, Cell *next);
		// it is possible to implement methods directly in the class definition; they are called inline methods
		int value() const {return m_value;}
		Cell *getNext() const {return m_next;}
		Cell *next() const {return m_next;}

		int getValue() const; 
	private:
		// each cell holds a value and the address of the next cell in the linked list 
		int m_value;
		Cell *m_next;	
};



