#include <bits/stdc++.h>
#include "input_handling.h"
#include "graph_analysis.h"

using namespace std;

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
    cout << "In a " << graphs[graph].first << " graph, what does " << graphs[graph].second[element].first << " mean?\n";
    string ans, cont; getline(cin, ans);
    checkAnswerS(ans, graphs[graph].second[element].second);
}

