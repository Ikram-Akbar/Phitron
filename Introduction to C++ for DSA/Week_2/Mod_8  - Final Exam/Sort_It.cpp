#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;

    Student(string nm, int cls, char s, int id, int math_marks, int eng_marks) {
        this->nm = nm;
        this->cls = cls;
        this->s = s;
        this->id = id;
        this->math_marks = math_marks;
        this->eng_marks = eng_marks;
        this->total_marks = math_marks + eng_marks;
    }

    Student() {}
};

bool cmp_students( Student &a, Student &b) {
    if (a.total_marks != b.total_marks) {
        return a.total_marks > b.total_marks;
    }
    return a.id < b.id;
}

int main() {
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; ++i) {
        string nm;
        int cls;
        char s;
        int id, math_marks, eng_marks;
        cin >> nm >> cls >> s >> id >> math_marks >> eng_marks;
        students[i] = Student(nm, cls, s, id, math_marks, eng_marks);
    }

    sort(students, students + n, cmp_students);

    for (int i = 0; i < n; ++i) {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
