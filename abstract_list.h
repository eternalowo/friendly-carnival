#ifndef ABSTRACT_LIST_H_
#define ABSTRACT_LIST_H_

#include "list_node.h"

namespace linked_list {

	template<typename T>
	class AbstractList {

	public:
		virtual void insert(T value, T ins) = 0;
		virtual void remove(T value) = 0;
		virtual T pop(T value) = 0;
		virtual ListNode<T>* get(T value) const = 0;
		virtual void update(T value_old, T value_new) const = 0;

	private:
		virtual std::size_t size() const = 0;
		virtual bool is_empty() const = 0;
	};

}; // namespace linked_list

#endif