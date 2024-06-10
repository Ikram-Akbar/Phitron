#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;

    Student() {}
    
    Student(string nm, int cls, char s, int id, int math_marks, int eng_marks) {
        this->nm = nm;
        this->cls = cls;
        this->s = s;
        this->id = id;
        this->math_marks = math_marks;
        this->eng_marks = eng_marks;
    }
};

bool cmp(const Student &a, const Student &b) {
    if (a.eng_marks != b.eng_marks) {
        return a.eng_marks > b.eng_marks;
    } else if (a.math_marks != b.math_marks) {
        return a.math_marks > b.math_marks;
    } else {
        return a.id < b.id;
    }
}

int main() {
    int n;
    cin >> n;
    Student students[n];

    for (int i = 0; i < n; ++i) {
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
        cin >> nm >> cls >> s >> id >> math_marks >> eng_marks;
        students[i] = Student(nm, cls, s, id, math_marks, eng_marks);
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; ++i) {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
