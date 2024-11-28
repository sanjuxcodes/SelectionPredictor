# SelectionPredictor


A simple command-line Selection Program built in C++. This program selects a user based on their caste and marks. The user is prompted to input their caste and marks, and the program decides if they are selected based on predefined conditions.

Features

Interactive User Interface: The program greets the user, asks for their caste and marks, and provides the selection result.
Caste-Based Selection: The selection criteria depend on the caste and marks provided.
General (caste 1) requires at least 60 marks.
OBC (caste 2) requires at least 55 marks.
SC (caste 3) requires at least 50 marks.
ST (caste 4) requires at least 40 marks.
Simple Logic: The program uses conditional statements to determine if the user is selected or not.
How to Use

Clone or Download the Code
Download or clone the repository to your local machine.
Compile the Code
Open your terminal (Linux/Mac) or Command Prompt (Windows) and navigate to the directory where the code is saved. Then, compile the code using the following command:
g++ -o selection selection.cpp
Run the Program
After compiling, run the program:
./selection
Gameplay Instructions
The program will ask for your name.
It will prompt you to enter your caste number (1 for General, 2 for OBC, 3 for SC, 4 for ST).
Then, it will ask for your marks.
Based on the input, the program will tell you if you're selected or not.
Example Interaction

Example 1: Selected
Hello User! What's your name?
John
Hey John!
Enter your caste (1: General, 2: OBC, 3: SC, 4: ST): 2
Enter your marks: 56
Congrats! You are selected.
Example 2: Not Selected
Hello User! What's your name?
Alice
Hey Alice!
Enter your caste (1: General, 2: OBC, 3: SC, 4: ST): 1
Enter your marks: 55
Sorry! Better luck next time.
File Structure

selection.cpp:
The main C++ program that implements the logic for selection.
Requirements

A C++ compiler such as g++ (GNU Compiler Collection) to compile the program.
Basic knowledge of running command-line applications.
Customization

You can modify the criteria for selection or the messages displayed to the user.
The logic for selecting users can be extended to include more categories or conditions.
Contributing

Feel free to fork the repository, contribute, or suggest enhancements. Pull requests are welcome!

License

This project is open-source and free to use under the MIT License.

Author

Your Name
Enthusiast about building simple and practical applications.
Find me on LinkedIn or GitHub.
