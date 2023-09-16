<h1>Singly Linked List</h1>
<br>
This is my version of non-circular singly linked list. I tried to make it in modern C++ style because im trying to get used to 'move' semantics and smart pointers.
<br>
<h3>To do:</h3>
- Add Doubly Linked List 
<br>
- Add circular versions of those lists
<br>
- Add list tail pointer, so insert_back operation wont have to iterate through all list to add new node
<br>
- Make time measurements for every method and analyse it, try to improve those methods.

<h2>Insert_back method</h2>
Args: 
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/693a877e-e1b4-4e2d-891b-04da6d261094)
- value <= Value that needs to be inserted in back of list
<br>
This method inserts value in linked list's back
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/fe2b0418-e93b-49a4-bcaa-36aadd8fd9cd)

<h2>Insert_forward method</h2>
Args: 
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/7fef1d35-1041-4d5b-a7d1-c52fa0a80596)
- value <= Value that needs to be inserted in front of list
<br>
This method inserts value in linked list's front
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/845b03e1-e55e-4db2-9efc-6829863d29bc)

<h2>Insert method</h2>
Args: 
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/863428d0-7484-46ff-8c22-f83328cfe8e4)
- value <= Value that needs to be inserted in list
- ins <= Value that new node needs to be inserted after
<br>
This method inserts value in linked list after some node
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/de9836e1-99ef-47fb-8286-405d825e7e02)

<h2>Remove method</h2>
Args: 
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/ce5513f5-de6e-4b75-ab9f-54d84c1de8c1)
- value <= Value that needs to be removed from list
<br>
This method removes first found value in linked list
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/7d8b4c65-a0e3-488d-904a-1fe260ed48b5)

<h2>Pop method</h2>
Args: 
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/94ca1b2e-42a8-4dc8-b554-f27830b3668b)
- value <= Value that needs to be removed from list and returned in method
<br>
This method removes first found value in linked list and returns it 
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/53ea7257-de76-421f-8578-15601139b476)

<h2>Update method</h2>
Args: 
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/bea2a1be-bd59-43a4-830c-db260d8801b9)

- value_old <= Value that needs to be updated
- value_new <= Value to update to
<br>
This method updates first found value in linked list to value_new
<br>

![image](https://github.com/eternalowo/linked-list/assets/98911288/23af2640-db1f-40a4-a1ee-8e299e9db64d)

