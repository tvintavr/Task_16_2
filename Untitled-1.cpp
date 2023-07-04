#include <iostream>
#include <climits>
#include <limits>

int main() {
  while (true) {
    std::cout<<"Input numerator: ";
    int num;
    std::cin>>num;
    
  
    std::cout<<"Input denomenator: ";
    int denom;
    std::cin>>denom;

    if (std::cin.fail()) {
      std::cout<<"wrong input\n";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    } else {
  
      std::string fractionS=std::to_string(num)+"."+std::to_string(denom);
      
      double fractionD;
      fractionD=std::stod(fractionS);
      
      std::cout<<fractionD<<"\n";
    }
  }
  
  
  

  
}