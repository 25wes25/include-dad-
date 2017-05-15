#ifndef Vector_H_
#define Vector_H_
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <algorithm> // std::copy

using namespace std;

template <class Type>
class Vector
{
    private:
        Type* elem;	// Pointer to the elements (or 0)
        int size_v;	// Size of the Vector
        int space;	// Number of elements plus number of free slots (total size including empty slots)
    public:
        Vector();							// Default Constructor
        explicit Vector(int s);				// Alternate Explicit Constructor
        Vector(const Vector<Type>& src);    // Copy Constructor
        ~Vector();							// Destructor

        // Mutators
        void resize(int newsize);
        void push_back(Type element);
        void reserve(int newalloc);


        // Accessors
        int size() const;
        int capacity() const;

        // Operator Overloads
        Vector<Type>& operator=(const Vector<Type>& src);
        Type& operator[](int n);
        const Type& operator[](int n) const;

        // Iterators
        using iterator = Type*;
        using const_iterator = const Type*;
        iterator begin();
        const_iterator begin() const;
        iterator end();
        const_iterator end() const;
        iterator insert(iterator p, const Type& val); 	// Insert a new element val before i

        iterator erase(iterator p);						// Remove element pointed to by i
};

/*
 * ************************* Constructors/Destructors *************************
 */

template<class Type> // Default Constructor
Vector<Type>::Vector() : size_v{0}, elem{nullptr}, space{0} {}

template<class Type> // Alternate Explicit Constructor
Vector<Type>::Vector(int s) : size_v{s}, elem{new Type[s]}, space{s}
{
    for (int i=0; i<size_v; ++i)
    {
        elem[i] = 0; // elements are initialized
    }
}

template<class Type> // Copy Constructor
Vector<Type>::Vector(const Vector& src) : size_v{src.size_v}, elem{new Type[src.size_v]}, space{src.space}
{
    copy(src.elem, src.elem + size_v, elem); 	// copy elements - std::copy() algorithm
}

template<class Type> // Destructor
Vector<Type>::~Vector() {delete[] elem;}

/*
 * ****************************** Mutators ************************************
 */

template<class Type>
void Vector<Type>::resize(int newsize)
{
    reserve(newsize);
    for (int i=size_v; i<newsize; ++i)
    {
        elem[i] = 0; // initialize new elements
    }
    size_v = newsize;
}

template<class Type>
void Vector<Type>::push_back(Type element)
{
    if (space == 0)
    {
        reserve(8); // start with space for 8 elements
    }
    else if (size_v == space)
    {
        reserve(2*space); // get more space
    }
    elem[size_v] = element;	// add element at end
    ++size_v; // increase the size (size_v is the number of elements)
}

template<class Type>
void Vector<Type>::reserve(int newalloc)
{
    if (newalloc <= space)
    {
        return; // never decrease allocation
    }
    Type* temp = new Type[newalloc]; // allocate new space
    for (int i=0; i<size_v; ++i)
    {
        temp[i] = elem[i]; // copy old elements
    }
    delete[] elem; // deallocate old space
    elem = temp;
    space = newalloc;
}

/*
 * **************************** Accessors *************************************
 */

template<class Type>
int Vector<Type>::size() const {return size_v;}

template<class Type>
int Vector<Type>::capacity() const {return space;}

/*
 * ************************** Operator Overloads ******************************
 */

template<class Type>
Vector<Type>& Vector<Type>::operator=(const Vector<Type>& src)
{
    Type* temp = new Type[src.size_v]; // allocate new space
    copy(src.elem, src.elem + src.size_v, temp); // copy elements - std::copy() algorithm
    delete[] elem; // deallocate old space
    elem = temp; // now we can reset elem
    size_v = src.size_v;
    return *this; // return a self-reference
}

template<class Type>
Type& Vector<Type>::operator[](int n) {return elem[n];}

template<class Type>
const Type& Vector<Type>::operator[](int n) const {return elem[n];}

/*
 * **************************** Iterators *************************************
 */

template<class Type>
typename Vector<Type>::iterator Vector<Type>::begin()
{
    if (size_v == 0)
    {
        return nullptr;
    }
    return &elem[0];
}

template<class Type>
typename Vector<Type>::const_iterator Vector<Type>::begin() const
{
    if (size_v == 0)
    {
        return nullptr;
    }
    return &elem[0];
}

template<class Type>
typename Vector<Type>::iterator Vector<Type>::end()
{
    if (size_v == 0)
    {
        return nullptr;
    }
    return &elem[size_v];
}

template<class Type>
typename Vector<Type>::const_iterator Vector<Type>::end() const
{
    if (size_v == 0)
    {
        return nullptr;
    }
    return &elem[size_v];
}

template<class Type>
typename Vector<Type>::iterator Vector<Type>::insert(iterator i, const Type& val)
{
    int index = i - begin();
    if (size() == capacity())
    {
        reserve(size()==0 ? 8 : 2*size()); // make sure we have space
    }
    ++size_v;
    iterator ii = begin() + index; // the place to put value
    for (iterator pos=end()-1; pos!=ii; --pos)
    {
        *pos = *(pos-1); // copy element one position to the right
    }
    *(begin() + index) = val; // insert value
    return ii;
}

template<class Type>
typename Vector<Type>::iterator Vector<Type>::erase(iterator i)
{
    if (i == end())
    {
        return i;
    }
    for (iterator pos=i+1; pos!=end(); ++pos)
    {
        *(pos-1) = *pos; // copy element one position to the left
    }
    delete (end()-1);
    --size_v;
    return i;
}
#endif /* Vector_H_ */
