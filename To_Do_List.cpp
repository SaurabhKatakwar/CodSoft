#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struct to store task details
struct Task {
    string description;
    bool isCompleted;

    Task(string desc) : description(desc), isCompleted(false) {}
};

// Class to manage the To-Do List
class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string &taskDescription) {
        tasks.push_back(Task(taskDescription));
        cout << "Task added successfully.\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in the list.\n";
            return;
        }

        cout << "\nTo-Do List:\n";
        for (size_t i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". " << tasks[i].description
                 << " [" << (tasks[i].isCompleted ? "Completed" : "Pending") << "]\n";
        }
        cout << endl;
    }

    void markTaskAsCompleted(int taskNumber) {
        if (taskNumber <= 0 || taskNumber > tasks.size()) {
            cout << "Invalid task number.\n";
            return;
        }

        tasks[taskNumber - 1].isCompleted = true;
        cout << "Task marked as completed.\n";
    }

    void removeTask(int taskNumber) {
        if (taskNumber <= 0 || taskNumber > tasks.size()) {
            cout << "Invalid task number.\n";
            return;
        }

        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task removed successfully.\n";
    }
};

int main() {
    ToDoList toDoList;
    int choice;

    do {
        cout << "\nTo-Do List Manager:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); // To ignore leftover newline characters in the input buffer

        switch (choice) {
            case 1: {
                string taskDescription;
                cout << "Enter task description: ";
                getline(cin, taskDescription);
                toDoList.addTask(taskDescription);
                break;
            }
            case 2:
                toDoList.viewTasks();
                break;
            case 3: {
                int taskNumber;
                cout << "Enter task number to mark as completed: ";
                cin >> taskNumber;
                toDoList.markTaskAsCompleted(taskNumber);
                break;
            }
            case 4: {
                int taskNumber;
                cout << "Enter task number to remove: ";
                cin >> taskNumber;
                toDoList.removeTask(taskNumber);
                break;
            }
            case 5:
                cout << "Exiting To-Do List Manager. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

