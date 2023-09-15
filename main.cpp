#include <iostream>

#include "singly_linked_list.h"

int main() {
	auto help = linked_list::Singly_Linked_List<int>();
	int i = 2;
	help.push_back(i);
	help.push_back(2);
	help.push_back(4);
	help.push_back(3);
	help.insert(99, 3);
	help.update(99, 1);
	std::cout << help;
	return 0;
}