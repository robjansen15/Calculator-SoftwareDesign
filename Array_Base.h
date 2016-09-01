// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _ARRAY_BASE_H
#define _ARRAY_BASE_H

#include <cstring>          // for size_t definition

template <typename T>
class Array_Base{
public:
    typedef T type;

    /* Default Constructor */
    Array_Base(void);

    /* Set Length Constructor
     *
     * @param length
     *
     * */
    Array_Base(size_t length);

    /* Set Length Constructor + Fill
     *
     * @param length
     * @param element<T>
     *
     * */
    Array_Base(size_t length, T fill);

    /* Copy Constructor */
    Array_Base(const Array_Base & arr);

    /* Destructor */
    ~Array_Base(void);

    /* Size of Allocated Memeory
     *
     * @return size
     *
     * */
    size_t size (void) const;

    /* [] Operator
     *
     * @param index
     *
     * @Return T
     *
     * */
    T & operator [] (size_t index);

    /* const [] Operator
     *
    * @param index
    *
    * @Return T
    *
    * */
    const T & operator [] (size_t index) const;

    /* Getter
     *
     * @param index
     *
     * @return T
     *
     * */
    T get(size_t index);

    /* Setter
     *
     * @param index
     *
     * */
    void set(size_t index, T value);

    /* Find
     *
     * @param element<T>
     *
     * @return index
     *
     * */
    int find (T element) const;

    /* Find
     *
     * @param elment<T>
     * @param start_index
     *
     * @return index
     *
     * */
    int find (T element, size_t start) const;

    /* == operator
     *
     * @param array<Array_Base>
     *
     * @return bool
     *
     * */
    bool operator == (const Array_Base & rhs) const;

    /* != operator
     *
     * @param array<Array_Base>
     *
     * @return bool
     *
     * */
    bool operator != (const Array_Base & rhs) const;

    /* Fill
     *
     * @param element<T>
     *
     * */
    void fill (T element);





protected:
    T * data_;
    size_t max_size_;

};

#include "Array_Base.inl"
#include "Array_Base.cpp"
#endif
