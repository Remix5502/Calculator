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
  int x = 0, y = 0;
  float a = 0, b = 0;
  std::cout << "Welcome to my first calculator!\n\n";
  while(true)
  {
    std::cout << "Enter 1 to end program\nEnter 2 to sum up\nEnter 3 to subtract\nEnter 4 to multiply\nEnter 5 to divide\n";
    std::cin >> x;
    while(std::cin.good() == 0)
    {
        std::cin >> x;
        std::cin.clear();
        std::cin.sync();
        std::cout << "ERROR: Invalid data type\nEnter option again: ";
        std::cin >> x;
    }
    if(x == 1)
    {
      break;
      return 0;
    }
    std::cout << "Input first number: ";
    std::cin >> a;
    while(!std::cin.good() == 0)
    {
      std::cin.clear();
      std::cin.sync();
      std::cout << "ERROR: Invalid data type\nEnter first number again: ";
      std::cin >> a;
    }
    std::cout << "Input second number: ";
    std::cin >> b;
    while(!std::cin.good() == 0)
    {
      std::cin.clear();
      std::cin.sync();
      std::cout << "ERROR: Invalid data type\nEnter second number again: ";
      std::cin >> b;
    }
    switch(x)
    {
      case 2:
        std::cout << add(a, b);
        break;
      case 3:
        std::cout << subtract(a, b);
        break;
      case 4:
        std::cout << multiply(a, b);
        break;
      case 5:
        std::cout << divide(a, b);
        break;
    }
  }
  return 0;
}
