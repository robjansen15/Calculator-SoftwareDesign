// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

template <typename T>
Array_Iterator<T>::Array_Iterator(Array <T> & a, int postfixptr)
	: 	a_ (a),
		cur_loc_ (0),
		max_size_(postfixptr)
	{}


template <typename T>
Array_Iterator<T>::~Array_Iterator(void) {}


template <typename T>
bool Array_Iterator<T>::is_done (void){
	return this->cur_loc_ >= this->max_size_;
}

template <typename T>
bool Array_Iterator<T>::advance (void) {
	++this->cur_loc_;
	return true;
}

template <typename T>
T Array_Iterator<T>::operator * (void) {
	return this->a_.get(this->cur_loc_);
}

template <typename T>
T * Array_Iterator<T>::operator -> (void) {
	return &this->a_.get(this->cur_loc_);
}
