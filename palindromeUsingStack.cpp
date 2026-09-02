#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int original = n;
    stack<int> st;
    while (n > 0) {
        st.push(n % 10);
        n /= 10;
    }
    n = original;
    bool palindrome = true;
    while (n > 0) {
        if (n % 10 != st.top()) {
            palindrome = false;
            break;
        }
        n /= 10;
        st.pop();
    }
    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}



