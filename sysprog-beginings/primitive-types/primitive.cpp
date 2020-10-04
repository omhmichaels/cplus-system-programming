#include <iostream>
#include <limits>

int main()
{
    // CHAR
    std::cout << "\n\n-------------\nCHAR: \n" << int(std::numeric_limits<char>::min()) << "\t-\t" << int(std::numeric_limits<char>::min()) << "\n size (Byte) =" << sizeof(wchar_t) << std::endl;
    
    // WIDE CHAR
    std::cout << "\n\n-------\nWCHAR_T: \n" << std::numeric_limits<wchar_t>::min() << "\t-\t" << std::numeric_limits<wchar_t>::max() << "\n size (Byte) =" << sizeof (wchar_t) << std::endl;
    
    // Int
    std::cout << "\n\n-------\nINT: \n " << std::numeric_limits<int>::min() << "\t-\t" << std::numeric_limits<int>::max() << "\n size (Byte) =" << sizeof (int) << std::endl;
    
    // Bool
    std::cout << "\n\n-------\nbool: \n " << std::numeric_limits<bool>::min() << "\t-\t" << std::numeric_limits<bool>::max() << "\n size (Byte) =" << sizeof (bool) << std::endl;
    
    // floating point types
    std::cout << "\n\n-------\nfloat: \n " << std::numeric_limits<float>::min() << "\t-\t" << std::numeric_limits<float>::max() << "\n size (Byte) =" << sizeof (float) << std::endl;
    
    // Doubles
    std::cout << "\n\n-------\ndouble: \n " << std::numeric_limits<double>::min() << "\t-\t" << std::numeric_limits<double>::max() << "\n size (Byte) =" << sizeof (double) << std::endl;

    return 0;
}