#include "array.h"
#include <iostream>
#include <cstddef>
#include <ostream>

template<class T>
class Array {
	public :
    		T* data;      
    		size_t size; 
		int index;
	public:
    		Array<T>(T _size);
    		~Array<T>();

    		T& operator[](T index);
		T& at(T index);
};

template<class T>
Array<T>::Array(T _size) : size(_size) {
	data = new T[_size];
}

template<class T>
Array<T>::~Array() {
	delete[] data;
}


template<class T>
T& Array<T>::operator[](T index) {
       	return data[index];
}

template<class T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr) {
    	for (size_t i = 0; i < arr.size; ++i) {
        	os << arr.data[i] << ' ';
    	}
    	return os;
}

template<class T>
T& Array<T>::at(T index) {
	if (index < size) {
        	return data[index];
    	}
}

int main() {
		Array<int> arr(5);
		arr[0] = 10;
		arr[4] = 5;
		std::cout << arr << std::endl;
		return 0;
}
