#ifndef VECTOR_H
#define VECTOR_H

template <typename T>

class Vector
{
    private:
        int size_;                      //Amount of elements currently stored
        int capacity_;                  //Maximum amount of elements that can be stored without realocating
        T* data_;                       //Pointer to the array of elements (can be any type since we are using a template)

        void reserve(int newCapacity)   //Function to reallocate memory when capacity is exceeded
        {
            if (newCapacity <= capacity_) {return;}
                
            T* newData = new T[newCapacity];
            for (int i = 0; i < size_; ++i)
            {
                newData[i] = data_[i];
            }
            delete[] data_;
            data_ = newData;
            capacity_ = newCapacity;
        }

        void shrinkToFit()              //Function to reduce capacity to fit size
        {
            if (size_ < capacity_)
            {
                T* newData = new T[size_];
                for (int i = 0; i < size_; ++i)
                {
                    newData[i] = data_[i];
                }
                delete[] data_;
                data_ = newData;
                capacity_ = size_;
            }
        }

    public:
        Vector();
        ~Vector();

        int getSize() const
        {
            return size_;
        }
        int getCapacity() const
        {
            return capacity_;
        }      

        void addElement(const T& element);
        void removeElement(int index);
};

#endif