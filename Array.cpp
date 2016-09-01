// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.


#include <stdexcept>         // for std::out_of_range exception


template <typename T>
Array <T>::Array (void):
	data_(0),
	cur_size_(0),
	max_size_(0)
{
	
}


template <typename T>
Array <T>::Array (size_t length):
		data_(new T[length]),
		cur_size_(length),
		max_size_(length)
	{
		if (length > 0) {
			for (size_t i=0; i < cur_size_ ; ++i) {
				*(this->data_ + i) = 0;
			}
		}
	}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill):
		data_(new T[length]),
		cur_size_(length),
		max_size_(length)
	{
		for (size_t i=0; i < cur_size_ ; ++i) {
			*(this->data_ + i) = fill;
		}
	}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array):
		data_(new T[array.cur_size_]),
		cur_size_(array.cur_size_),
		max_size_(array.cur_size_)
    {
		 for (size_t i=0; i < cur_size_ ; ++i) {
			 *(this->data_ + i) = array.data_[i];
		 }
	}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void) {
	if (data_ == nullptr) {
		delete []data_;
	}
}

//
// operator =
//
template <typename T>
const Array <T> & Array <T>::operator = (const Array & rhs) {
	if (this != &rhs) {
		
		Array<T> new_array_ (rhs.cur_size_);

		for (size_t i=0; i < rhs.cur_size_ ; i++) {
			*((new_array_.data_)+i) = rhs.data_[i];
		}

		size_t cur_size_new_ = rhs.cur_size_;
		size_t max_size_new_ = rhs.cur_size_; 

		this->cur_size_=cur_size_new_;
		this->max_size_=max_size_new_;
		
		std::swap(data_, new_array_.data_);
	}
	return *this;
}

//
// operator []
//
template <typename T>
T & Array <T>::operator [] (size_t index) {
	if (index >= this->cur_size_) {
		throw std::out_of_range("Specified Index out of range");
	}

	return (this->data_[index]);
}

//
// operator [] 
//
template <typename T>
const T & Array <T>::operator [] (size_t index) const {
		if (index >= this->cur_size_) {
		throw std::out_of_range("Specified Index out of range");
	}
	return (this->data_[index]);
}

//
// get
//
template <typename T>
T Array <T>::get (size_t index) const {
	if(index >= this->cur_size_){
		throw std::out_of_range("Specified Index out of range");
	}
	return (this->data_[index]);
}

//
// set
//
template <typename T>
void Array <T>::set (size_t index, T value) {
	if (index >= this->cur_size_) {
		throw std::out_of_range("Specified Index out of range");
	}

	this->data_[index]=value;	
}
//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size) {
    if (new_size > cur_size_) {
        Array<T> new_array_(new_size);
        for (size_t i=0;i < cur_size_ ; ++i) {
            *(new_array_.data_ + i) = this->data_[i];
        }
        this->cur_size_ = new_size;
        this->max_size_ = new_size;

        std::swap (data_, new_array_.data_);
    }

    else {
        this->cur_size_ = new_size;
    }
}

//
// find (char)
//
template  <typename T>
int Array <T>::find (T value) const {
    return find(value,0);
}

//
// find (char, size_t) 
//
template <typename T>
int Array <T>::find (T val, size_t start) const {
	if(start > this->cur_size_) {
		throw std::out_of_range("Specified	Index out of range");
	}

	// if index is valid, proceed to search
	for (size_t i = start; i < (this->cur_size_); ++i) {
		if(this->data_[i] == val) {
			return i;
		}
	}
	return -1;
}

//
// operator ==
//
template <typename T>
bool Array <T>::operator == (const Array & rhs) const {
	if (this->cur_size_ != rhs.cur_size_) {
		return false;
	}
	for (size_t i = 0; i < this->cur_size_; ++i) {
		if(this->data_[i] != rhs.data_[i]) {
			return false;
		}
	}
	return true;
}

//
// operator !=
//
template <typename T>
bool Array <T>::operator != (const Array & rhs) const {
	return !(*this == rhs);
}

//
// fill
//
template <typename T>
void Array <T>::fill (T value) {
	for ( size_t i = 0; i < (this->cur_size_); ++i ) {
		this->data_[i] = value;
	}
}

