Codsoft C++ Internship Tasks
This repository contains the code for three tasks completed during my internship at Codsoft C++. The tasks are written in C++ and apply Object-Oriented Programming (OOP) concepts. Below are the details of each task, along with instructions on how to run them.

Table of Contents
Task 1: Tic Tac Toe Game
Task 2: To Do List
Task 3: Library Management System
How to Run the Code
Task 1: Tic Tac Toe Game
This is a simple implementation of the classic Tic Tac Toe game in C++. It allows two players to play against each other by taking turns marking spaces on a 3x3 grid. The game checks for a winner after each move.

Features:
Two-player functionality
Validates input to prevent invalid moves
Displays the current state of the game after each turn
Declares the winner when there are three consecutive marks
Task 2: To Do List
This task implements a To Do List application where users can add, view, and delete tasks. It allows the user to keep track of their tasks and mark them as completed or delete them from the list.

Features:
Add a task to the list
Mark a task as completed
Delete a task from the list
View all tasks
Task 3: Library Management System
This is an Object-Oriented Program that manages a small library system. It allows users to add, delete, edit, search, and view books using a basic menu-driven interface.

OOP Concepts Applied:
Classes and Objects: A Book class is used to represent each book with attributes like ISBN, title, author, edition, and publication.
Encapsulation: The attributes of the Book class are private, and public setter and getter methods are provided to access and modify them.
Functions: Various functions handle the core operations such as adding, deleting, editing, and viewing books.
Features:
Add Book: Allows the user to add a new book with details like ISBN, title, author, edition, and publication.
Delete Book: Deletes a book by its ISBN.
Edit Book: Edits the details of an existing book.
Search Book: Searches for a book by its ISBN.
View All Books: Displays details of all books currently in the library.
Quit: Exits the program.
How to Run the Code
Prerequisites:
A C++ compiler like g++ or MinGW is required to compile the code.
You can use an IDE like Visual Studio Code, Code::Blocks, or any text editor to write the code.
Steps:
Clone the repository to your local machine using the command:

bash
Copy code
git clone https://github.com/your-username/repository-name.git
Navigate to the project folder:

bash
Copy code
cd repository-name
Open the relevant .cpp file for the task you want to run:

For Task 1, open tic_tac_toe.cpp
For Task 2, open to_do_list.cpp
For Task 3, open library_management_system.cpp
Compile the code using the following command:

bash
Copy code
g++ -o output_filename source_filename.cpp
Run the compiled code:

bash
Copy code
./output_filename
For example:

bash
Copy code
./tic_tac_toe
Conclusion
These tasks are designed to demonstrate basic concepts of C++ programming, including OOP principles, user input handling, and simple menu-driven interfaces. Feel free to explore and modify the code as per your needs.
