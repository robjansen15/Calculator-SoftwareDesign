// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.


#ifndef _CS507_STACK_H_
#define _CS507_STACK_H_

#include <exception>
#include "Array.h"
#include <iostream>		// For debug function 'printit'.

template <typename T>
class Stack
{
public:
  /// Type definition of the type.
  typedef T type;

  /**
   * @class empty_exception
   *
   * Exception thrown to indicate the stack is empty.
   */
  class empty_exception : public std::exception
  {
  public:
    /// Default constructor.
    empty_exception (void)
      : std::exception () { }

    /**
     * Initializing constructor.
     *
     * @param[in]      msg         Error message.
     */
    empty_exception (const char * msg)
      : std::exception (msg) { }
  };

  /// Default constructor.
  Stack (void);

  /// Copy constructor.
  Stack (const Stack & s);

  /// Destructor.
  ~Stack (void);


  const Stack & operator = (const Stack & rhs);


  void push (T element);


  void pop (void);


  T top (void) const;

  bool is_empty (void) const;


  size_t size (void) const;

  /// Remove all elements from the stack.
  void clear (void);

  const T get_element(size_t index);

private:
  Array<T> data_;
  size_t cur_size_;
  size_t alloc_size_;
};

#include "Stack.inl"
#include "Stack.cpp"

#endif
