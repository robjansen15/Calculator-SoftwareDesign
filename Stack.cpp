// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

//
// Stack
//
template <typename T>
Stack <T>::Stack (void):
	data_(Array<T>()),
	cur_size_(0),
	alloc_size_(0)
	{}

//

// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack):
		data_(Array<T>(stack.alloc_size_)),
		cur_size_(stack.cur_size_),
		alloc_size_(stack.alloc_size_)
	{
		this->data_ = stack.data_;
	}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void) {}

//
// push
//
template <typename T>
void Stack <T>::push (T element) {
	if (this->cur_size_ == this->alloc_size_) {
		this->data_.resize(this->alloc_size_ + 10);
		this->alloc_size_+=10;
	}

	this->data_[this->cur_size_] = element;
	++this->cur_size_;
}

//
// pop
//

template <typename T>
void Stack <T>::pop (void){
	if (this->cur_size_ == 0) {
		throw empty_exception();
	}
	else {
		--(this->cur_size_);
	}
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs) {
	if (this != &rhs) {
		if (this->alloc_size_ > rhs.cur_size_)
		{
			this->data_ = rhs.data_;
			this->cur_size_ = rhs.cur_size_;
		}
		else {
			this->data_.resize(rhs.cur_size_+10);
			this->alloc_size_ = (rhs.cur_size_+10);
			this->data_ = rhs.data_;
			this->cur_size_=rhs.cur_size_;
		}
	}
	return *this;
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void) {
	this->cur_size_=0;
}

template <typename T>
const T Stack<T>::get_element(size_t index) {
	return this->data_[index];
}