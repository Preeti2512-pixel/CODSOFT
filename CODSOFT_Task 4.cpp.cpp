//Build a simple console-based to-do list manager that allows users to add, view, and delete tasks
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool isCompleted;

    Task(string desc) : description(desc), isCompleted(false) {}
};
//Function to display the menu
void displayMenu() {
    cout << "To-Do List Manager" << endl;
    cout << "1. Add a task" << endl;
    cout << "2. View tasks" << endl;
    cout << "3. Delete a task" << endl;
    cout << "4. Mark task as completed" << endl;
    cout << "5. Mark task as pending" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
}
//Function to add a task
void addTask(vector<Task> &tasks) {
    cout << "Enter the task: ";
    string taskDesc;
    cin.ignore(); // To ignore the newline character left by previous input
    getline(cin, taskDesc);
    tasks.push_back(Task(taskDesc));
    cout << "Task added successfully!" << endl;
}
//Function to view all tasks
void viewTasks(const vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks available." << endl;
    } else {
        cout << "Tasks:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].description 
                 << " [" << (tasks[i].isCompleted ? "Completed" : "Pending") << "]" << endl;
        }
    }
}
//Function to delete a task
void deleteTask(vector<Task> &tasks) {
    cout << "Enter the task number to delete: ";
    int taskNum;
    cin >> taskNum;
    if (taskNum < 1 || taskNum > tasks.size()) {
        cout << "Invalid task number!" << endl;
    } else {
        tasks.erase(tasks.begin() + taskNum - 1);
        cout << "Task deleted successfully!" << endl;
    }
}
//Function to mark the task as completed
void markTaskAsCompleted(vector<Task> &tasks) {
    cout << "Enter the task number to mark as completed: ";
    int taskNum;
    cin >> taskNum;
    if (taskNum < 1 || taskNum > tasks.size()) {
        cout << "Invalid task number!" << endl;
    } else {
        tasks[taskNum - 1].isCompleted = true;
        cout << "Task marked as completed!" << endl;
    }
}
//Function to mark the task as pending
void markTaskAsPending(vector<Task> &tasks) {
    cout << "Enter the task number to mark as pending: ";
    int taskNum;
    cin >> taskNum;
    if (taskNum < 1 || taskNum > tasks.size()) {
        cout << "Invalid task number!" << endl;
    } else {
        tasks[taskNum - 1].isCompleted = false;
        cout << "Task marked as pending!" << endl;
    }
}

int main() {
    vector<Task> tasks;
    int choice;
    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                markTaskAsCompleted(tasks);
                break;
            case 5:
                markTaskAsPending(tasks);
                break;
            case 6:
                cout << "Bye! Time to exit!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
    return 0;
}

       
       
   