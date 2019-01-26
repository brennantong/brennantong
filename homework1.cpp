  #include <iostream>
  #include <cmath>
  using namespace std;

  int main() {
    
    cout << "1: Addition" << endl;
    cout << "2: Subraction" << endl;
    cout << "3: Multiplication" << endl;
    cout << "4: Division" << endl;
    cout << "5: Power" << endl;
    cout << "6: Square Root" << endl;
    cout << "7: Absolute Value" << endl;
    cout << "8: Round Down" << endl;
    cout << "9: Round up" << endl;
    cout << "10: Factorial" << endl;
    cout << "Please pick a choice." << endl;

    int choice;
    cin >> choice;

  if(choice == 1)
  {
    float num1, num2;
    cout << "Please enter two numbers to add." << endl;
    cin >> num1;
    cin >> num2;
    
    float addition = num1 + num2;
    
    cout << addition << endl;

  }

  if(choice == 2)
  {
    float num1, num2;
    cout << "Please enter two numbers to subtract." << endl;
    cin >> num1;
    cin >> num2;
    
    float subtraction = num1 - num2;
    
    cout << subtraction << endl;


  }

  if(choice == 3)
  {
    float num1, num2;
    cout << "Please enter two numbers to multiply." << endl;
    cin >> num1;
    cin >> num2;
    
    float multiplication = num1 * num2;
    
    cout << multiplication << endl;


  }

  if(choice == 4)
  {
    float num1, num2;
    cout << "Please enter two numbers to divide." << endl;
    cin >> num1;
    cin >> num2;
    
    float division = num1 / num2;
    
    cout << division << endl;


  }

   if(choice == 5)
  {
    float num1, num2;
    cout << "Please enter two numbers, enter the base first, then the exponent." << endl;
    cin >> num1;
    cin >> num2;
    
    float power = pow(num1, num2);
    
    cout << power << endl;


  }

  if(choice == 6)
  {
    float num1, num2;
    cout << "Please enter a number." << endl;
    cin >> num1;
    
    float squareroot = sqrt(num1);
    
    cout << squareroot << endl;


  }

   if(choice == 7)
  {
    float num1, num2;
    cout << "Please enter a number." << endl;
    cin >> num1;
    
    float absoluteval = abs(num1);
    
    cout << absoluteval << endl;


  }

  if(choice == 8)
  {
    float num1, num2;
    cout << "Please enter a number." << endl;
    cin >> num1;
    
    int roundDown = floor(num1);
    
    cout << roundDown << endl;


  }

  if(choice == 9)
  {
    float num1;
    cout << "Please enter a number." << endl;
    cin >> num1;
    
    int roundUp = ceil(num1);
    
    cout << roundUp << endl;


  }

  if(choice == 10)
  {
    int num1;
    int factorial= 1;
    
    cout << "Please enter a number." << endl;
    cin >> num1;
    
    for(int i = 1; i <=num1; ++i ){
      
      factorial = i * factorial;
    }
    cout << factorial << endl;
    }

  
  }
