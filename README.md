# FILE-MANAGEMENT-TOOL

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: SOHINI SAMUI

*INTERN ID*: CT04DM489

*DOMAIN*: C++

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH


Overview

The File Management Tool is a C++ application designed to demonstrate essential file-handling operations: reading, writing, and appending data to text files. This program provides a simple and interactive way to manage plain text files using the standard C++ file I/O library. It serves as a practical example for students, beginners, and developers interested in understanding how file operations are implemented in C++.

This tool is entirely built using standard C++ (C++11 or higher), ensuring cross-platform compatibility without the need for external libraries. It is ideal for educational use, file processing tasks, and demonstrating the practical usage of file streams in C++ (ifstream, ofstream, fstream).

✨ Features

Create and Write to a File
The user can create a new text file and write custom content to it. If the file already exists, its contents will be overwritten with new data.

Append to a File
The tool supports appending new data to an existing file without removing or altering the previous content.

Read from a File
The program allows the user to open and read the contents of a text file. It displays the file content directly on the console for easy review.

User-Friendly Menu Interface
A simple console menu guides users through each operation: writing, reading, appending, or exiting the application.

🔧 How It Works

The application uses C++ file stream classes to handle file operations:

ofstream is used for writing data to files.

ifstream is used for reading data from files.

fstream is used for appending data to existing files.

The program follows a menu-driven structure, prompting the user to select a desired operation. Based on the user's choice, the appropriate file stream is opened in the correct mode (ios::out, ios::app, or ios::in), and file operations are performed.

Error handling is included to check whether a file exists or can be accessed, ensuring the application responds gracefully in cases such as missing files or read/write permission errors.

📝 Use Case Example

1. Run the application.

2. Choose to write data to a new file (e.g., data.txt).

3. Input your content and save the file.

4. Later, choose to append more content to data.txt without erasing previous data.

5. Use the read option to view all content stored in the file.

This process makes the tool a practical solution for basic data logging, content generation, or even note-taking.

📂 Deliverable

This program fulfills the deliverable of showcasing file-handling techniques in C++ through a working, user-interactive application. It demonstrates best practices in file I/O and provides an excellent starting point for more advanced file manipulation tasks like binary files, serialization, or database emulation.

💡 Conclusion

The File Management Tool is a robust example of file handling in C++. It is easy to understand, modify, and extend. Whether used for academic learning or small-scale projects, this application highlights the core functionality of file manipulation, a fundamental concept in software development.

#OUTPUT

![Image](https://github.com/user-attachments/assets/0a606a04-5497-4388-b0dc-dd000e25cd7e)
