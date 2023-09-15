#ifndef LIST_NODE_H_
#define LIST_NODE_H_

#include <utility>
#include <memory>

namespace linked_list {

	template<typename T>
	class ListNode {

	public:
		explicit ListNode(T data) : value(std::move(data)), next(nullptr) {};
		T value;
		std::unique_ptr<ListNode<T>> next;
	};

}; // namespace linked_list
#endif