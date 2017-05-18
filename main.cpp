#include <iostream>                             // Import the basic input/output stream library  // Import conio, a c header file (Google it!)
#include <limits>                               // Import limits library to display min / max values for data type
                                                // Whitespace is ignore by the compiler, so use it to structure your code in a readable manner
using namespace std;                            // Tells the compiler we are using the namespace std, see line 8

int main()                                      // All C++ programs need an entry point, main() is it, int means it returns an integer when it ends, this is used for error handling 0 = OK, 1(other number) = problem
{                                               // Start of main()
    int a, b, c, d;                             // Defining four variables of the same type at once (integer here)
    int w = 40, x = 20, y =10, z = 5;           // Defining and assigning four variable of the same type at once (ints)
    int aw, bx = 5, cy, dz = 10;                // Defining four variables and only assigning two at time of definition

    cout << "a: " << a << endl;                 // These four variables will hold strange, seemingly random number in them, even though we have only defined them and not assigned the a value
    cout << "b: " << b << endl;                 // This is because defining a variable allocates it a memory address but importantly does no clear that address as well, so the values
    cout << "c: " << c << endl;                 // held are "leftovers" from previous assignments to that address by any other programs on the system.
    cout << "d: " << d << endl;                 // This means best practice dictates you always assign a variable a value when you define it.

    unsigned char uc1;                          // a 1 byte signed integer, holds 0 to 255, usually used to hold a value referring to an ASCII character
    signed char c1;                             // a 1 byte unsigned integer, holds -128 to 127
    unsigned int ui1;                           // a 4 byte unsigned integer, holds 0 to 4294967295
    signed int i1;                              // a 4 byte signed integer, holds -2147483648 to 2147483647
    unsigned short int us1;                     // a 2 byte unsigned integer, holds 0 to 65535, can be assigned with the short keyword alone
    signed short int s1;                        // a 2 byte signed integer, holds -32768 to 32767, can be assigned with short keyword alone
    unsigned long long ul1;                     // an 8 byte signed integer, holds -9223327036854775808 to 9223372036854775807 (declared twice to get over platform dependent values)
    signed long long l1;                        // an 8 byte unsigned integer, holds 0 to 18446744073709551615 (declared twice to get over platform dependent values)
    float f1;                                   // a 4 byte floating point, holds between 1.17549 x 10 to the -38 to 3.40282 x 10 to the 38
    double d1;                                  // an 8 byte floating point, holds between 2.22507 x 10 to the -308 to 1.79769 x 10 to the 308
    long double ld1;                            // a 12 byte floating point, holds between 3.3621 x 10 to the -4932 to 1.18973 * 10 to the 4932
    bool b1;                                    // a 1 byte boolean, can hold from 0 to 255 but any number other than 0 is defined as true and 0 is false
    void *v1;                                   // a strange data type which is best avoided as it overrides the inbuilt type behaviour - just don't do it!! The * is a pointer to the variable as a void on its own is nothing but now it is a pointer to where "nothing" is stored.
    wchar_t wc1;                                // a 2 byte unsigned integer (traditionally, can be as small as 1 byte or as large as 4 and signed or unsigned, confusing, I know). Used to represent character sets with more that 255 codes (unicode for example)

    cout << "Unsigned char size: " << sizeof(uc1) << " min / max: " << cout << numeric_limits<unsigned char>::min() << " " << cout << numeric_limits<unsigned char>::max() << endl;
    cout << "Signed char size: " << sizeof(c1) << " min / max: " << cout << numeric_limits<signed char>::min() << " " << cout << numeric_limits<signed char>::max() << endl;
    cout << "Unsigned int size: " << sizeof(ui1) << " min / max: " << cout << numeric_limits<unsigned int>::min() << " " << cout << numeric_limits<unsigned int>::max() <<  endl;
    cout << "Signed int size: " << sizeof(i1) << " min / max: " << cout << numeric_limits<signed int>::min() << " " << cout << numeric_limits<signed int>::max() <<  endl;
    cout << "Unsigned short int size: " << sizeof(us1) << " min / max: " << cout << numeric_limits<unsigned short int>::min() << " " << cout << numeric_limits<unsigned short int>::max() <<  endl;
    cout << "Signed short int size: " << sizeof(s1) << " min / max: " << cout << numeric_limits<signed short int>::min() << " " << cout << numeric_limits<signed short int>::max() <<  endl;
    cout << "Unsigned long size: " << sizeof(ul1) << " min / max: " << cout << numeric_limits<unsigned long>::min() << " " << cout << numeric_limits<unsigned long>::max() <<  endl;
    cout << "Signed long size: " << sizeof(l1) << " min / max: " << cout << numeric_limits<signed long>::min() << " " << cout << numeric_limits<signed long>::max() <<  endl;
    cout << "float size: " << sizeof(f1) << " min / max: " << cout << numeric_limits<float>::min() << " " << cout << numeric_limits<float>::max() <<  endl;
    cout << "double size: " << sizeof(d) << " min / max: " << cout << numeric_limits<double>::min() << " " << cout << numeric_limits<double>::max() <<  endl;
    cout << "long double size: " << sizeof(ld1) << " min / max: " << cout << numeric_limits<long double>::min() << " " << cout << numeric_limits<long double>::max() <<  endl;
    cout << "bool size: " << sizeof(b) << " min / max: " << cout << numeric_limits<bool>::min() << " " << cout << numeric_limits<bool>::max() <<  endl;
    cout << "void size: " << sizeof(v1) <<  " min / max: How do you show min / max for nothing?" << endl;
    cout << "wchar_t size: " << sizeof(wc1) << " min / max: " << cout << numeric_limits<wchar_t>::min() << " " << cout << numeric_limits<wchar_t>::max() <<  endl;

    cin.get();                                  // End of main()
}