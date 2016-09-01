// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

//
// size
//
template <typename T>
inline
size_t Array <T>::size (void) const{
	return this->cur_size_;
}

//
// max_size
//
template <typename T>
inline
size_t Array <T>::max_size (void) const{
	return this->max_size_;
}
