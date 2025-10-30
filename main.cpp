#include <bits/stdc++.h>

using namespace std;

double roundDouble( double x, int n ) {
    stringstream ss;
    ss << scientific << setprecision( n - 1 ) << x;
    return stod( ss.str() );
}

void checkAnswerD(const double &input, const double &solution) {
    if (input == solution) cout << "Correct!\n";
    else cout << "Wrong! The answer is " << solution << '\n';
}

void checkAnswerI(const int &input, const int &solution) {
    if (input == solution) cout << "Correct!\n";
    else cout << "Wrong! The answer is " << solution << '\n';
}

void checkAnswerS(const string &input, const string &solution) {
    if (input == solution) cout << "Correct!\n";
    else cout << "Wrong! The answer is " << solution << '\n';
}

const vector<string> directions = {"[N]", "[S]", "[E]", "[W]"};

void vdt() {
    double d = rand() % 1000 / 10.0 + 1.0;
    double t = rand() % 1000 / 10.0 + 1.0;
    double v = roundDouble(d / t, 3);
    int whichone = rand() % 3;
    double ans;
    if (whichone == 0) {
        cout << "An object travels " << d << "m in " << t << "s\nFind the object's velocity\n";
        cin >> ans;
        checkAnswerD(ans, v);
    }
    else if (whichone == 1) {
        cout << "An object travels at " << v << " m/s for " << t << "s\nFind its displacement\n";
        cin >> ans;
        checkAnswerD(ans, d);
    }
    else {
        cout << "An object travels at " << v << " m/s for " << d << "m\nFind the elapsed time\n";
        cin >> ans;
        checkAnswerD(ans, t);
    }
}

void avt() {
    double v1 = rand() % 1000 / 10.0 + 1.0;
    double v2 = rand() % 1000 / 10.0 + 1.0;
    double deltaV = v2 - v1;
    double t = rand() % 1000 / 10.0 + 1.0;
    double a = roundDouble(deltaV / t, 3);
    int whichone = rand() % 3;
    int splitV = rand() % 2;
    double ans;
    if (whichone == 0) {
        if (splitV == 1) cout << "An object is travelling at " << v1 << " m/s and uniformly accelerates to " << v2 << "m/s over the course of " << t << "s\nFind the object's acceleration\n";
        else cout << "An object changes its velocity by " << deltaV << " m/s over the course of " << t << "s\nFind the object's acceleration\n";
        cin >> ans;
        checkAnswerD(ans, a);
    }
    else if (whichone == 1) {
        if (splitV == 1) cout << "An object is travelling at " << v1 << " m/s and accelerates to " << v2 << " m/s by accelerating at " << a << " m/s^2\nFind the time elapsed\n";
        else cout << "An object changes its velocity by " << deltaV << " m/s by accelerating at " << a << " m/s^2\nFind the time elapsed\n";
        cin >> ans;
        checkAnswerD(ans, t);
    }
    else {
        if (splitV == 1) {
            int whichV = rand() % 2;
            if (whichV == 0) {
                cout << "An object is travelling at " << v1 << " m/s and accelerates at " << a << " m/s^2 for " << t << "s\Find the final velocity\n";
                cin >> ans;
                checkAnswerD(ans, v2);
            }
            else {
                cout << "An object accelerates at " << a << " m/s^2 for " << t << "s to a final velocity of " << v2 << " m/s\nFind the initial velocity\n";
                cin >> ans;
                checkAnswerD(ans, v1);
            }
        }
        else {
            cout << "An object accelerates at " << a << " m/s^2 for " << t << "s\nFind the change in velocity\n";
            cin >> ans;
            checkAnswerD(ans, deltaV);
        }
    }
}

const vector<pair<string, vector<pair<string, string>>>> graphs = {
    {"displacement-time", {
        {"a point on the graph", "position"},
        {"the slope of a secant line", "average velocity"},
        {"the slope of a tangent line", "instantaneous velocity"}}},
    {"velocity-time", {
        {"a point on the graph", "instantaneous velocity"},
        {"the slope of a secant line", "average acceleration"},
        {"the slope of a tangent line", "instantaneous acceleration"},
        {"the area under the graph", "displacement"}}},
    {"acceleration-time", {
    {"a point on the graph", "instantaneous acceleration"},
    {"the area under the graph", "velocity"}}}
};

void analyzeGraph() {
    int graph = rand() % graphs.size();
    int element = rand() % graphs[graph].second.size();
    cout << "In a " << graphs[graph].first << "graph, what does " << graphs[graph].second[element].first << " mean?\n";
    string ans, cont; getline(cin, ans);
    checkAnswerS(ans, graphs[graph].second[element].second);
}

const vector<pair<string, string>> cueCards = {
    {"What is the difference between a vector and a scalar?", "A scalar has magnitude only, no direction. Examples of scalars are speed and height\nVectors have magnitude and distance. Examples of vectors include displacement and velocity"},
    {"What is the difference between distance and displacement?", "Distance is the total distance travelled while displacement is your position relative to your starting position\nIf I walk 10 meters forwards and 10 meters backward, my distance travelled is 20m while my displacement is 0m"}
};

void pickCueCard() {
    cout << "Cue Card\n";
    int card = rand() % cueCards.size();
    cout << cueCards[card].first << "\n";
    string proceed; cin >> proceed;
    cout << cueCards[card].second << '\n';
}

const vector<void(*)()> questions = {pickCueCard, analyzeGraph, vdt};

int main() {
    srand(time(0));
    while(true) {
        int activity = rand() % questions.size();
        questions[activity]();
        string cont; cin >> cont; getline(cin, cont);
    }
    return 0;
}
