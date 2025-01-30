#include <iostream>
#include <vector>

using namespace std;

struct Task {
    string title;
    bool completed;
};

vector<Task> tasks;

void addTask(string title) {
    tasks.push_back({title, false});
}

void listTasks() {
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << (tasks[i].completed ? "[✓] " : "[ ] ") << tasks[i].title << endl;
    }
}

void markTaskDone(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
    }
}

int main() {
    addTask("Complete project");
    addTask("Buy groceries");
    listTasks();
    markTaskDone(0);
    listTasks();
    return 0;
}
