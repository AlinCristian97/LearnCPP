// Integers

#include <iostream>

int main() {

  // // Braced initialization

  // int elephantCount; // Variable may contain random garbage value. WARNING

  // int lionCount{}; // Initializes to 0

  // int dogCount{10};

  // int catCount{15};

  // int domesticatedAnimals {dogCount + catCount}; // Can use expression as initializer

  // // int narrowingConversion {2.9}; // Information Lost. WARNING OR ERROR

  // std::cout << "Elephant count: " << elephantCount << std::endl;
  // std::cout << "Lion count: " << lionCount << std::endl;
  // std::cout << "Dog count: " << dogCount << std::endl;
  // std::cout << "Cat count: " << catCount << std::endl;
  // std::cout << "Domesticated Animals count: " << domesticatedAnimals << std::endl;

  // // Functional initialization

  // int appleCount(5);
  // int orangeCount(10);
  // int fruitCount(appleCount + orangeCount);

  // // int badInitialization(doesnt_exist + doesnt_exist);

  // int narrowingConversion(2.9); // Information Lost. Less safe than braced intialization

  // std::cout << "Apple count: " << appleCount << std::endl;
  // std::cout << "Orange count: " << orangeCount << std::endl;
  // std::cout << "Fruit count: " << fruitCount << std::endl;
  // std::cout << "Narrowing Conversion: " << narrowingConversion << std::endl;

  // Assignment Initialization

  int bikeCount = 2;
  int truckCount = 7;
  int vehicleCount = bikeCount + truckCount;
  int narrowingConversion = 2.9;

  std::cout << "Bike count: " << bikeCount << std::endl;
  std::cout << "Truck count: " << truckCount << std::endl;
  std::cout << "Vehicle count: " << vehicleCount << std::endl;
  std::cout << "Narrowing Conversion: " << narrowingConversion << std::endl;

  // Check the size with sizeof

  std::cout << "sizeof int: " << sizeof(int) << std::endl;
  std::cout << "sizeof truckCount: " << sizeof(truckCount) << std::endl;

  return 0;
}