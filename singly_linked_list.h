#ifndef SINGLY_LINKED_LIST_H_
#define SINGLY_LINKED_LIST_H_

#include "abstract_list.h"

namespace linked_list {

	template <typename T>
	class Singly_Linked_List : public AbstractList<T> {

	public:
		Singly_Linked_List() : _head(nullptr), _list_size(0) {};
		
		void insert_back(T value) {

			std::unique_ptr<ListNode<T>> node = std::make_unique<ListNode<T>>(std::move(value));

			if (is_empty())
				_head = std::move(node);
			else {
				ListNode<T>* current = _head.get();

				while (current->next)
					current = current->next.get();

				current->next = std::move(node);
			}
			_list_size++;
		};

		void insert_forward(T value) {

			std::unique_ptr<ListNode<T>> node = std::make_unique<ListNode<T>>(std::move(value));

			if (is_empty())
				_head = std::move(node);
			else {
				node->next = std::move(_head);
				_head = std::move(node);
			}
			_list_size++;
		};

		void insert(T value, T ins) override {

			std::unique_ptr<ListNode<T>> node = std::make_unique<ListNode<T>>(std::move(value));
			
			if (is_empty())
				_head = std::move(node);
			else {
				ListNode<T>* current = _head.get();

				while (current && current->value != ins)
					current = current->next.get();

				if (current) {
					node->next = std::move(current->next);
					current->next = std::move(node);
				}
			}
			_list_size++;
		};

		void remove(T value) override {

			if (!is_empty()) {

				ListNode<T>* current = _head.get();

				while (current && current->value != value) 
					current = current->next.get();

				if (current) {
					current->next = std::move(current->next->next);
					_list_size--;
				}
			}
		};

		T pop(T value) override {
				
			T result = T();

			if (!is_empty()) {

				ListNode<T>* current = _head.get();

				while (current && current->value != value) 
					current = current->next.get();

				if (current) {
					result = current->value;
					current->next = std::move(current->next->next);
					_list_size--;
				}

			}
			return result;
		};

		void update(T value_old, T value_new) override {

			if (!is_empty()) {

				ListNode<T>* current = _head.get();

				while (current->value != value_old && current->next.get())
					current = current->next.get();

				current->value = value_new;
			};
		}

		friend std::ostream& operator<<(std::ostream &out, const Singly_Linked_List& list) {

			if (list.is_empty())
				out << "List is empty";
			else {
				ListNode<T>* current = list._head.get();
				while (current->next) {
					out << current->value << " -> ";
					current = current->next.get();
				}
				out << current->value;
			}
			return out;
		}

		std::size_t size() const override { return _list_size; };

		private:

		std::unique_ptr<ListNode<T>> _head;
		std::size_t _list_size;

		bool is_empty() const override { return _head == nullptr; }
	};

}; // namespace linked_list

#endif