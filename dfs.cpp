#include<bits/stdc++.h>

void visit(int index, bool visited[], std::vector<int> *list) {
    std::cout << index << std::endl;
    visited[index] = true;
    for (auto i = list[index].begin(); i != list[index].end(); i++)
        if (!visited[*i])
            visit(*i, visited, list);
}

int main() {
    int vertices, edges, from, to;
    std::cin >> vertices >> edges;

    auto *list = new std::vector<int>[vertices];
    // Fill the list
    while (edges--) {
        std::cin >> from >> to;
        // Push a edge
        list[from].push_back(to);
        list[to].push_back(from);
    }
    // Start the visits
    bool visited[vertices];
    // Fill the visited vertices (with false)
    std::fill(visited, visited + vertices, false);
    // Start the visits in the node 0
    visit(0, visited, list);
}
