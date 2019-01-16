#include "Cell.h"

// a cell is initialized with a value and a pointer to the next cell in the linked list. Note that m_next has the 
// value nullptr if the cell is the last cell in the linked list
Cell::Cell(int value, Cell *next)
	:m_value(value),
	m_next(next){
	// empty
}

int Cell::getValue() const {
	return m_value;
}
