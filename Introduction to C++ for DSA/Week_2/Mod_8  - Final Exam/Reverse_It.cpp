#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int cls;
    char section;
    int id;
};

void swp_cmp(Student& s1, Student& s2) {
    char temp = s1.section;
    s1.section = s2.section;
    s2.section = temp;
}

int main() {
    int N;
    cin >> N;
    
    Student students[N];
    
    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }
    
    int left = 0;
    int right = N - 1;
    
    while (left < right) {
        swp_cmp(students[left], students[right]);
        left++;
        right--;
    }
    
    for (int i = 0; i < N; ++i) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
    }
    
    return 0;
}
