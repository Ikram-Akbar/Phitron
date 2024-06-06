#include <bits/stdc++.h>
using namespace std;

class Student 
{
public:
    int id;
    char name[100];
    char section[100];
    int marks;

    Student() {}
    Student(int id, char name[], char section[], int marks)
    {
        this->id = id;
        strcpy(this->name, name);
        strcpy(this->section, section);
        this->marks = marks;
    }
};

int main()
{
    int test_case;
    cin >> test_case;

    for (int t = 0; t < test_case; t++) {

        Student students[3];

        for (int i = 0; i < 3; i++) {
            int id;
            char name[100];
            char section[100];
            int marks;
            cin >> id >> name >> section >> marks;
            students[i] = Student(id, name, section, marks);
        }

        Student best_stu = students[0];

        for (int i = 1; i < 3; i++) {
            if (students[i].marks > best_stu.marks ||
                (students[i].marks == best_stu.marks && students[i].id < best_stu.id)) {
                best_stu = students[i];
            }
        }

        cout << best_stu.id << " " << best_stu.name << " " << best_stu.section << " " << best_stu.marks << endl;
    }

    return 0;
}
