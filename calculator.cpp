#include <iostream>
#include <string>

float add(float a, float b)
{
  return a + b;
}

float subtract(float a, float b)
{
  return a - b;
}

float multiply(float a, float b)
{
  return a * b;
}

float divide(float a, float b)
{
  return a / b;
}

int main()
{
  std::string x = "";
  float a = 0, b = 0;
  std::cout << "Welcome to my first calculator!\n";
  while(true)
  {
    std::cout << "Enter 1 to end program\nEnter 2 to sum up\nEnter 3 to subtract\nEnter 4 to multiply\nEnter 5 to divide\n";
    std::cin >> x;
    if(x == "1")
    {
      return 0;
    }
    std::cout << "Input first number: ";
    std::cin >> a;
    while(!std::cin.good())
    {
      std::cin.clear();
      std::cin.sync();
      std::cout << "ERROR: Invalid data type\nEnter first number again: ";
      std::cin >> a;
    }
    std::cout << "Input second number: ";
    std::cin >> b;
    while(!std::cin.good())
    {
      std::cin.clear();
      std::cin.sync();
      std::cout << "ERROR: Invalid data type\nEnter second number again: ";
      std::cin >> b;
    }
    switch(x)
    {
      case "2":
        add(a, b);
        break;
      case "3":
        subtract(a, b);
        break;
      case "4":
        multiply(a, b);
        break;
      case "5":
        divide(a, b);
        break;
    }
  }
  return 0;
}
