#include <bits/stdc++.h>

using namespace std;

const vector<void(*)()> questions = {};

int main() {
    srand(time(0));
    while(true) {
        int activity = rand() % questions.size();
        questions[activity]();
    }
    return 0;
}
