#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeToFile(const string& filename) {
    ofstream outfile(filename.c_str()); // overwrite mode
    if (!outfile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    cout << "Enter data to write to the file (end with a single line 'END'):\n";
    string line;
    cin.ignore(); // clear buffer
    while (true) {
        getline(cin, line);
        if (line == "END") break;
        outfile << line << endl;
    }

    outfile.close();
    cout << "Data written successfully.\n";
}

void appendToFile(const string& filename) {
    ofstream outfile(filename.c_str(), ios::app); // append mode
    if (!outfile) {
        cerr << "Error opening file for appending!" << endl;
        return;
    }

    cout << "Enter data to append to the file (end with a single line 'END'):\n";
    string line;
    cin.ignore(); // clear buffer
    while (true) {
        getline(cin, line);
        if (line == "END") break;
        outfile << line << endl;
    }

    outfile.close();
    cout << "Data appended successfully.\n";
}

void readFromFile(const string& filename) {
    ifstream infile(filename.c_str());
    if (!infile) {
        cerr << "Error opening file for reading!" << endl;
        return;
    }

    cout << "\nContents of the file:\n------------------------\n";
    string line;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();
}

int main() {
    string filename = "data.txt";
    int choice;

    do {
        cout << "\n====== FILE HANDLING MENU ======\n";
        cout << "1. Write to File (Overwrite)\n";
        cout << "2. Append to File\n";
        cout << "3. Read from File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFromFile(filename);
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
