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
size_t Stack <T>::size (void) const{
	return (this->cur_size_);
}

//
// top
//
template <typename T>
inline
T Stack <T>::top (void) const{
	if (this->cur_size_ > 0){
		return this->data_[cur_size_-1];
	}
	else
	{
		throw empty_exception();
	}
}

//
// is_empty
//
template <typename T>
inline
bool Stack <T>::is_empty (void) const{
	return ((this->cur_size_ == 0)?true:false);
}
