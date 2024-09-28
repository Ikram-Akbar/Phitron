#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, E;
    cin >> N >> E;
    
    vector<int> component(N + 1);
    
    for (int i = 1; i <= N; i++) {
        component[i] = i;
    }
    
    int cycleCount = 0;
    
    for (int i = 0; i < E; i++) {
        int A, B;
        cin >> A >> B;
        
        if (component[A] == component[B]) {
            cycleCount++;
        } else {
            int oldComp = component[B];
            int newComp = component[A];
            for (int j = 1; j <= N; j++) {
                if (component[j] == oldComp) {
                    component[j] = newComp;
                }
            }
        }
    }
    
    cout << cycleCount << endl;
    
    return 0;
}
