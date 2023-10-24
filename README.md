# Linked-list
Aim: The aim of the given code is to handle division errors by preventing division by zero and providing an error message when the denominator is zero.

Theory: This code utilizes a try-catch block to manage division errors. It attempts to perform division of two integers 'a' and 'b'. If 'b' is not zero, it performs the division and displays the result. However, if 'b' is zero, it throws an exception of type int. In the catch block, it catches the exception and displays an error message indicating that division by zero is not allowed.

Algorithm: 
        1. Check if the denominator (b) is zero.
        2. If it's not zero, perform the division and display the result.
        3. If it is zero, throw an exception.
        4. In the catch block, catch the exception and display an error message indicating division by zero is not allowed.
        
There are three types of linked lists −

Singly Linked List − The nodes only point to the address of the next node in the list.

Doubly Linked List − The nodes point to the addresses of both previous and next nodes.

Circular Linked List − The last node in the list will point to the first node in the list. It can either be singly linked or doubly linked.

Linked List Representation Linked list can be visualized as a chain of nodes, where every node points to the next node.



 Conclusion: The code successfully handles division errors by using exception handling. It ensures that the program does not crash when attempting to divide by zero. Instead, it catches the exception and provides an informative error message, such as "Divide by 0 error," to alert the user to the division by zero attempt. This approach helps in creating more robust and user-friendly programs by gracefully handling exceptional situations.



 
