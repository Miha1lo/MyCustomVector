#include <iostream>
#include "MyVector.h"


int main()
{
	std::cout << "\n";
	std::cout << "******************************\n";
	std::cout << "********MyCustomVector********\n";
	std::cout << "******************************\n";
	std::cout << "\n";

	//Initialize vector - testVector1
	VectorLib::MyVector<int> testVector1(40);
	for (int i = 1; i <= 20; ++i) {
		testVector1.push_back(i);
	}

	testVector1.printData();
	std::cout << "Lenght: " << testVector1.getLength() << "\n";
	std::cout << "Capacity: " << testVector1.getCapacity() << "\n";

	std::cout << "******************************\n";

	testVector1.resize(10, std::nothrow);
	std::cout << "Lenght: " << testVector1.getLength() << "\n";
	std::cout << "Capacity: " << testVector1.getCapacity() << "\n";
	testVector1.printData();

	std::cout << "******************************\n";

	testVector1.resize(15, std::nothrow);
	std::cout << "Lenght: " << testVector1.getLength() << "\n";
	std::cout << "Capacity: " << testVector1.getCapacity() << "\n";
	testVector1.printData();
	
	////Initialize vector - testVector2
	VectorLib::MyVector<int> testVector2(10);
	for (int i = 21; i <= 30; ++i) {
		testVector2.push_back(i);
	}

	testVector2.printData();
	std::cout << "Lenght: " << testVector2.getLength() << "\n";
	std::cout << "Capacity: " << testVector2.getCapacity() << "\n";

	std::cout << "******************************\n";

	VectorLib::MyVector<int> resultVector = testVector1 + testVector2;

	resultVector.printData();
	std::cout << "Lenght: " << resultVector.getLength() << "\n";
	std::cout << "Capacity: " << resultVector.getCapacity() << "\n";

	std::cout << "******************************\n";

	resultVector.push_back(99);	//should get here message that vector full

	std::cout << "******************************\n";
	std::cout << "Testing Iterator:\n";

	for (auto it = testVector1.begin(); it != testVector1.end(); ++it)
	{
		std::cout << *it << " ";
	}
}
