#include <iostream>
#include <vector>
#include <string>
#include "input_handling.h"
#include "graph_analysis.h"

using std::vector, std::pair, std::string, std::cin, std::cout;

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
        {"the area under the graph", "velocity"}}},
    {"net force-acceleration (linear)", {
        {"a point on the graph", "instantaneous net-force"},
        {"slope of the graph", "mass of object"}}},
    {"friction force-applied force", {
        {"point on the graph", "instantaneous force of friction"},
        {"sudden vertical drop", "maximum coefficient of static friction"},
        {"slope of graph", "coefficient of static friction"},
        {"height of flat part of graph", "coefficient of kinetic friction"}}},
    {"spring force-displacement graph", {
        {"point on the graph", "instantaneous spring force"},
        {"slope of the graph", "spring constant"},
        {"area under the graph", "spring energy"}}}
};

void analyzeGraph() {
    int graph = rand() % graphs.size();
    int element = rand() % graphs[graph].second.size();
    cout << "In a " << graphs[graph].first << " graph, what does " << graphs[graph].second[element].first << " mean?\n";
    string ans, cont; getline(cin, ans);
    checkAnswerS(ans, graphs[graph].second[element].second);
}
