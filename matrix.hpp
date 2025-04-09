//matrix.hpp

/*
    Everything in matrix.hpp was given by the EECS348
    github lab. 
    this class declaration is a header file to
    define a bunch of classes that will be needed
    in order to finish the lab. the actual implementation
    of these will be found in matrix.cpp and main.cpp

    I used this header file as checklist to make sure I have
    everyhing in my matrix.cpp, comments explaining
    each function is in matrix.cpp
*/

#ifndef __MATRIX_HPP__
#define __MATRIX_HPP__

#include <cstdint>
#include <vector>

template <typename T> class Matrix //I made class into a template class by placing template <typename T> in front of the class
{
    public:
    std::size_t size;
    std::vector<std::vector<T>> data; //this was pre-initialized in the github but I changed the vector values from an int to a T variable so it can take int and doubles

    Matrix(std::size_t N);
    Matrix(std::vector<std::vector<T>> nums);//done

    Matrix<T> operator+(const Matrix<T> &rhs) const;//done
    Matrix<T> operator*(const Matrix<T> &rhs) const;//done
    void set_value(std::size_t i, std::size_t j, T n);//Replaced the integer parameter with T so that way it can take in both the ineger and Double type
    T get_value(std::size_t i, std::size_t j) const;//replaced the function type to return T instead of int because it needs to return either an integer or a double
    int get_size() const; //This one doesnt get turned into T because its just a counter. and the counter will never be a double
    T sum_diagonal_major() const;//replaced the function type to return T instead of int because it needs to return either an integer or a double
    T sum_diagonal_minor() const;//replaced the function type to return T instead of int because it needs to return either an integer or a double
    void swap_rows(std::size_t r1, std::size_t r2);//done
    void swap_cols(std::size_t c1, std::size_t c2);//done
    void print_matrix() const; //Done
};

#endif // __MATRIX_HPP__