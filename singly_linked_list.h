#ifndef SINGLY_LINKED_LIST_H_
#define SINGLY_LINKED_LIST_H_

#include "abstract_list.h"

namespace linked_list {

	template <typename T>
	class Singly_Linked_List : public AbstractList<T> {
	public:
		Singly_Linked_List() : _head(nullptr) {};
		
		void push_back(T value) {

			std::unique_ptr<ListNode<T>> node = std::make_unique<ListNode<T>>(std::move(value));

			if (is_empty())
				_head = std::move(node);
			else {
				ListNode<T>* current = _head.get();
				while (current->next)
					current = current->next.get();
				current->next = std::move(node);
			}
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

		};

		void remove(T value) override {

			if (!is_empty()) {

				ListNode<T>* current = _head.get();
				ListNode<T>* previous = nullptr;

				while (current && current->value != value) {
					previous = current;
					current = current->next.get();
				}

				if (current) {
					if (previous) {
						previous->next = std::move(current->next);
					}
					else {
						_head = std::move(current->next);
					}
					current->next = nullptr;
				}
			}
		};

		T pop(T value) override {

			if (!is_empty()) {

				ListNode<T>* current = _head.get();
				ListNode<T>* previous = _head.get();

				while (current->value != value && current->next.get()) {
					previous = current;
					current = current->next.get();
				}

				if (current) {

					if (previous)
						previous->next = std::move(current->next);
					else
						_head = std::move(current->next);

					T res = current->value;
					current->next = nullptr;
					return res;
				}
			}

			return T();
		};

		ListNode<T>* get(T value) const override {

			if (!is_empty()) {

				ListNode<T>* current = _head.get();

				while (current->next->value != value && current->next.get())
					current = current->next.get();

				return current->next.get();
			};
		};

		void update(T value_old, T value_new) const override {

			if (!is_empty()) {

				ListNode<T>* current = _head.get();

				while (current->value != value_old && current->next.get())
					current = current->next.get();
				current->value = value_new;
			};
		}

		friend std::ostream& operator <<(std::ostream &out, const Singly_Linked_List& list) {

			if (list.is_empty())
				out << "List is empty.";
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

	private:

		std::unique_ptr<ListNode<T>> _head;

		std::size_t size() const override {

			if (is_empty())
				return 0;
			else {
				std::size_t n = 0;
				ListNode<T>* current = _head.get();

				while (current)
					++n;

				return n;
			}

			return 0;
		};
		
		bool is_empty() const override {
			return _head == nullptr;
		}
	};

}; // namespace linked_list

#endif