#include <iostream>
#include <string>


int main()
{
    int number1, number2;
    std::string ops;

    std::cout << "hello welcome to the console calculator" << std::endl;
    std::cout << "enter the first number : ";
    std::cin >> number1;

    std::cout << std::endl;
    std::cout << "plus? minus? multiply? devide?";
    std::cin >> ops;

    std::cout << std::endl;
    std::cout << "enter the second number : ";
    std::cin >> number2;
    
    
    if (ops == "plus")
    {
        std::cout << std::endl;
        std::cout << "the sum of the two number you entered is : " << number1 + number2 << std::endl;
    } 
    else if (ops == "minus")
    {
        std::cout << std::endl;
        std::cout << "the sum of the two number you entered is : " << number1 - number2 << std::endl;
    }
    else if (ops == "multiply")
    {
        std::cout << std::endl;
        std::cout << "the sum of the two number you entered is : " << number1 * number2 << std::endl;
    }
    else if (ops == "devide")
    {
        std::cout << std::endl;
        std::cout << "the sum of the two number you entered is : " << number1 / number2 << std::endl;
    }
    else 
    {
        std::cout << "what do you mean by " << ops << " ?" << std::endl;
    }

    return 0;
}