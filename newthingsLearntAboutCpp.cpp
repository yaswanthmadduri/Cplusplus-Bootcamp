#include <iostream>

int main()
{
    std::cout << "Using cout from namespace std;\n";
    // std is an example of namespace;
    // namespace is a grouping of code; we have many different namespaces; 
    // if many people write different functions with the same name,
    // we can use namespaces at the starting, to distinguish whose code it is.
    
    std::cout << "<< is an operator here. This operator works between std::cout and this string of output \n";

    //cout is an object of the class "ostream" (it handles output stream)
    // ostream has many such objects
    //https://www.geeksforgeeks.org/c-stream-classes-structure/

    std::cout << EXIT_SUCCESS << std::endl; // EXIT_SUCCESS is similar to return 0; it returns 0;
    std::cout << EXIT_FAILURE; // EXIT_FAILURE is similar to return 1; it returns 1;
    // we are being specific here that cout is being called from namespace called "std"


    return 0;
}