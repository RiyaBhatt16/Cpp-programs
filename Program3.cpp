#include <iostream>

using namespace std;

class SumOfN {
public:
    SumOfN() {
        int n;
        cout << "Enter the value of n: ";
        cin >> n;

        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        cout << "Sum of first " << n << " natural numbers: " << sum << endl;
    }
};

int main() {
    SumOfN obj;
    return 0;
}
