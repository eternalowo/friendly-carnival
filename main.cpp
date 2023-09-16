#include <iostream>
#include <chrono>

#include "singly_linked_list.h"

int main() {

	auto singly_one = linked_list::Singly_Linked_List<int>();

	singly_one.insert_back(3);
	singly_one.insert_back(4);
	singly_one.insert_back(5);
	singly_one.insert_back(6);

	singly_one.insert_forward(55);
	singly_one.insert_forward(-55);

	std::cout << singly_one << std::endl;

	return 0;
}
