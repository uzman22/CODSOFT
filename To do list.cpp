#include <iostream>
#include <string>
using namespace std;

const int MAX_TASKS = 100;

struct Task {
    string description;
    bool completed;
};

class TodoList {
private:
    Task tasks[MAX_TASKS];
    int numTasks;

public:
    TodoList() : numTasks(0) {}

    void addTask(const string& description) {
        if (numTasks < MAX_TASKS) {
            tasks[numTasks].description = description;
            tasks[numTasks].completed = false;
            numTasks++;
            cout << "Task added successfully" << endl;
        } else {
            cout << "Todo list is full. Cannot add more tasks" << endl;
        }
    }

    void viewTasks() {
        if (numTasks == 0) {
            cout << "No tasks available" << endl;
            return;
        }

        cout << "Tasks:" << endl;
        for (int i = 0; i < numTasks; ++i) {
            cout << (i + 1) << ". ";
            if (tasks[i].completed)
                cout << "[Completed] ";
            else
                cout << "[Pending] ";
            cout << tasks[i].description << endl;
        }
    }

    void markAsCompleted(int index) {
        if (index >= 1 && index <= numTasks) {
            tasks[index - 1].completed = true;
            cout << "Task marked as completed" << endl;
        } else {
            cout << "Invalid task index" << endl;
        }
    }

    void removeTask(int index) {
        if (index >= 1 && index <= numTasks) {
            for (int i = index - 1; i < numTasks - 1; ++i) {
                tasks[i] = tasks[i + 1];
            }
            numTasks--;
            cout << "Task removed successfully" << endl;
        } else {
            cout << "Invalid task index" << endl;
        }
    }
};

int main() {
    TodoList t;
    int choice;

    system("cls");
    system("color f2");
    cout << "\n\t      #######  ####     #   ####    #     #######  #####  #####   \n";
    cout << "\t         #     #  #     #   #  #    #        #     #        #     \n";
    cout << "\t         #     #  #  ####   #  #    #        #     #####    #     \n";
    cout << "\t         #     #  #  #  #   #  #    #        #         #    #     \n";
    cout << "\t         #     ####  ####   ####    ##### #######  #####    #     \n\n\n";

	string n;
	cout<<"Enter Your Name= ";
	cin>>n;
	cout<<endl;

    do {
	cout<<endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cin.ignore();
                string description;
                cout << "Enter task description: ";
                getline(cin, description);
                t.addTask(description);
                break;
            }
            case 2:
                t.viewTasks();
                break;
            case 3: {
                int index;
                cout << "Enter the index of the task to mark as completed: ";
                cin >> index;
                t.markAsCompleted(index);
                break;
            }
            case 4: {
                int index;
                cout << "Enter the index of the task to remove: ";
                cin >> index;
                t.removeTask(index);
                break;
            }
            case 5:
                cout << "Exiting..." << endl;
                cout << "Thank You "<<n<<" for using the Task Manager "<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again" << endl;
        }
    } while (choice != 5);

}