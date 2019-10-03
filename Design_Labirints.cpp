// Problem 1076 - https://www.urionlinejudge.com.br/judge/es/problems/view/1076
#include <bits/stdc++.h>

int counter;

void visit(int index, bool *visited, std::vector<int> *list) {
    counter++;
    visited[index] = true;
    for (auto i = list[index].begin(); i != list[index].end(); i++)
        if (!visited[*i])
            visit(*i, visited, list);
}

int main() {
    int cases, initialNode, vertices, edges, o, d;
    std::cin >> cases;

    while (cases--) {
        std::cin >> initialNode >> vertices >> edges;

        auto *list = new std::vector<int>[vertices];
        // Fill the list
        while (edges--) {
            std::cin >> o >> d;
            list[o].push_back(d);
            list[d].push_back(o);
        }
        // Start the visits
        bool visited[vertices];
        // Fill the visited with false
        std::fill(visited, visited + vertices, false);
        // Check all
        counter = 0;
        visit(initialNode, visited, list);
        // Print result
        std::cout << counter * 2 - 2  << std::endl;
    }
}
