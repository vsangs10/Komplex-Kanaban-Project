/*
Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
*/
/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Complex
Author : Vedant Sangani, George Yu, Ted Gershon, Anthony Lu, Vishwa Kumaravel
URL : NA
Description : The complex class for complex numbers, and the functions that can be used upon them
Created : Nov. 28th
Modified : Dec. 11th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#ifndef COMPLASA_H
#define COMPLASA_H

#include <iostream>
//#include <complex>

using namespace std;

class Complex {
    public: 
      double real; //real segment
      double imaginary; //coefficient of the imaginary number

    Complex();
    Complex(double, double);
    //----------------------------------------- OPERATOR OVERLOADS -----------------------------------------------------

    /**
     * Returns the real part of comlpex number
     * @param com The complex number to find the real part of
     * @return complex.real
     * @author George Yue 
     */
    friend double real(Complex);
    /**
     * Returns the imaginary part of complex number
     * @param com The complex number to find the real part of
     * @return complex.imaginary
     * @author Vedant Sangani, George Yu, Ted Gershon, Anthony Lu, Vishwa Kumaravel
     */
    friend double imag(Complex);
  
  
  
  
  
      //------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Vedant Sangani, George Yu, Ted Gershon, Anthony Lu, Vishwa Kumaravel
     */
    friend double abs(Complex);
    friend double arg(Complex);
    friend Complex conj(Complex);
    friend double norm(Complex);
    friend Complex polar(double mag, double ang=0.0);
    friend Complex sin(const complex);
  
  
  
} // Complex class declaration