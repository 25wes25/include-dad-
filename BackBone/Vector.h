#ifndef VECTOR_H_
#define VECTOR_H_
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;
/****************************************************
 * class Template: Vector
 * __________________________________________________
 * this templated class creates a dynamic data structure
 * in the for of a queue
 * ---------------------------------------------------
 * In:
 * 	the datatype the list is gonna construct
 *****************************************************/
template<class nodeType>
class Vector
{
private:
    nodeType* Head;
    int size;
    int maxsize;

public:

    Vector();
    ~Vector();
    Vector(const Vector<nodeType>& copy);

    // Mutators
    void Push_Back(nodeType node);
    void dequeue();
    void setMaxSize(int x);

    // Accessors
    nodeType front();
    int getSize();
    bool isempty();
    bool isfull();
    string print();
    void swap(int index1, int index2);
    bool isValidIndex(int index);

    //Everything below is unimplemented
    nodeType& operator[](int x);

    using iterator = nodeType*;
    using const_iterator = const nodeType*;
    iterator begin();
    const iterator begin() const;
    iterator end();
    const iterator end() const;
    iterator insert(iterator p, const nodeType& v);
    iterator erase(iterator p);
};

template<class nodeType>
Vector<nodeType>::Vector(): size{0},maxsize{-1}
{
    Head = new nodeType[0];
}


template<class nodeType>
Vector<nodeType>::~Vector()
{
    size =0;
    maxsize=-1;
    delete []Head;
}
template<class nodeType>
Vector<nodeType>::Vector(const Vector<nodeType>& copy): size{copy.size},maxsize{copy.maxsize}
{
    delete []Head;
    Head = copy.Head;
}
template<class nodeType>
void Vector<nodeType>::setMaxSize(int x)
{
    maxsize = x;
}
template<class nodeType>
void Vector<nodeType>::Push_Back(nodeType node)
{
    if(maxsize==-1||size<maxsize)
    {
        nodeType* temp = new nodeType[size+1];
        temp[0] = node;
        if(!(isempty()))
        {
            for(int i=0; i<size;i++)
            {
                temp[i+1] = Head[i];
            }
        }
        delete []Head;
        Head = temp;
        size++;
    }
    else
    {
        //cout << "**List is full.**"<<endl<<"**"<<node << " was not added to the queue**\n\n";
    }
}
template<class nodeType>
void Vector<nodeType>::dequeue()
{
    if(!isempty())
    {
        nodeType* temp = new nodeType[size-1];
        for(int i=0; i<size-1;i++)
        {
            temp[i] = Head[i];
        }
        delete []Head;
        Head = temp;
        size--;
    }
    else
    {
        //cout << "**Cannot dequeue an empty queue**\n\n";
    }
}
template<class nodeType>
int Vector<nodeType>::getSize()
{
    return size;
}
template<class nodeType>
void Vector<nodeType>::swap(int index1, int index2)
{
    if(isValidIndex(index1)&& isValidIndex(index2))
    {
        nodeType* temp = Head[index1];
        Head[index1] = Head[index2];
        Head[index2] = temp;
    }
    // else do nothing
}
template<class nodeType>
bool Vector<nodeType>::isValidIndex(int index)
{
    return(index>0&&index<size?true:false);
}


template<class nodeType>
nodeType Vector<nodeType>::front()
{
    return Head[size-1];
}
template<class nodeType>
bool Vector<nodeType>::isempty()
{
    if(size>0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
template<class nodeType>
bool Vector<nodeType>::isfull()
{
    if(size<maxsize)
    {
        return false;
    }
    else if(size == maxsize)
    {
        return true;
    }
}
template<class nodeType>
string Vector<nodeType>::print()
{
    ostringstream output;
    cout << "Back of Queue\n";
    for (int i=0; i<size ;i++)
    {
        cout << "Index #" << i << ": contains " << Head[i] << endl;
    }
    cout << "Front of Queue\n";
    return output.str();
}
#endif /* VECTOR_H_ */
