#ifndef VECTOR_H
#define VECTOR_H

#include "forme.h"

class Vector
{
    private:
        int size_;                      //Amount of elements currently stored
        int capacity_;                  //Maximum amount of elements that can be stored without realocating
        Forme** data_;                       //Pointer to the array of elements (can be any type since we are using a template)

        void resize()   //Function to reallocate memory when capacity is exceeded
        {
            int newCapacity = (capacity_ == 0) ? 1 : capacity_ * 2; // au cas ou capacity == 0
            Forme* newData = new Forme*[newCapacity];
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
                Forme* newData = new Forme*[size_];
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
        Vector() : data_(nullptr), size_(0), capacity_(1){}
        ~Vector(){
            delete[] data_;
            data_ = nullptr;
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


        bool removeElement(int index)
        {
            if(index >= size_)
            {
                return 0; //index n'est pas dans le scope du tableau
            }
            delete data_[index];   // Libère l'objet pointé
            data_[index] = nullptr; // Met le pointeur à nullptr
            return 1;

        }


        void deleteData()
        {
            for (int i = 0; i < size_; ++i)
            {
                delete data_[i]; // libère chaque Forme*
                data_[i] = nullptr;
            }
            delete[] data_;
            data_ = nullptr;
            size_ = 0;
            capacity_ = 0;
        }

        bool VecteurUnused() const
        {
            if(size_ == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        T getData(int index)
        {
            if(index >= size_)
            {
                return nullptr; //index n'est pas dans le scope du tableau
            }
            return data_[index];
        }

        void printData (std::ostream& out)
        {
            for (int i = 0; i < size_; ++i) 
            {
                if (data_[i] != nullptr)
                {
                    out << *(data_[i]) << " "; // Supposons que Forme a un opérateur<<
                }
                else
                {
                    out << "[vide] ";
                }
            }
            out << std::endl;
        }



};

#endif
