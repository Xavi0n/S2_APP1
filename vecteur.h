#ifndef VECTOR_H
#define VECTOR_H

template <typename T>

class Vector
{
    private:
        int size_;                      //Amount of elements currently stored
        int capacity_;                  //Maximum amount of elements that can be stored without realocating
        T* data_;                       //Pointer to the array of elements (can be any type since we are using a template)

        void resize()   //Function to reallocate memory when capacity is exceeded
        {
            int newCapacity = (capacity_ == 0) ? 1 : capacity * 2; // au cas ou capacity == 0
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
        Vector() : data_(nullptr), size_(0), capacity_(1);
        ~Vector(){
            delete[] data_;
        }

        int getSize() const
        {
            return size_;
        }
        int getCapacity() const
        {
            return capacity_;
        }      

        bool addElement(const T& element)
        {
            if(size_ == capacity_){
                resize();
            }
            data_[size_++] = element;
            return 1;
        }


        bool removeElement(int index);
        {
            if(index >= size_)
            {
                return 0; //index n'est pas dans le scope du tableau
            }
            data_[index] = 0;
            return 1;

        }


        void deleteData()
        {
            size_ = 0;
            capacity_ = 0;
            delete[] data_;
        }

        bool VecteurUnused()
        {
            if(size == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        bool getData(int index)
        {
            if(index >= size_)
            {
                return nullptr; //index n'est pas dans le scope du tableau
            }
            return data_[Index];
        }

        void printData (std::ostream& out)
        {
            for (int i = 0; i <= size_; ++i) 
            {
                out << data[i] << " ";
            }
            out << std::endl;
        }



};

#endif
