// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _ARRAY_ITERATOR_H_
#define _ARRAY_ITERATOR_H_

#include "Array.h"

template <typename T>
class Array_Iterator
{
public:
	typedef T type;

	//constructor
	Array_Iterator (Array<T> & s, int postfixptr);

	//destructor
	~Array_Iterator (void);

	//is itteration done
	bool is_done (void);

	//itterates to next
	bool advance (void);

	//* op
	T operator * (void);

	//-> op
	T * operator -> (void);

private:
	Array <T> a_;
	size_t cur_loc_;
	size_t max_size_;
};

#include "Array_Iterator.cpp"

#endif