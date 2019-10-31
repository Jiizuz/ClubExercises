#include <bits/stdc++.h>

void visit(int index, bool *visited, std::vector<int> *list) {
    visited[index] = true;
    for (auto i = list[index].begin(); i != list[index].end(); i++)
        if (!visited[*i])
            visit(*i, visited, list);
}

int main() {
    int cases, current = 1, vertices, edges, components;
    std::cin >> cases;

    while (cases--) {
        std::cin >> vertices >> edges;

        auto *list = new std::vector<int>[vertices];
        for (int i = 0; i < vertices; i++)
            list[i].push_back(i);
        // Fill the list
        while (edges--) {
            char a, b;
            std::cin >> a >> b;
            // Push a edge
            list[int(a) - 97].push_back(int(b) - 97);
            list[int(b) - 97].push_back(int(a) - 97);
        }
        // Start the visits
        bool visited[vertices];
        // Fill the visited vertices (with false)
        std::fill(visited, visited + vertices, false);
        // Clear duplicates
        for (int i = 0; i < vertices; i++)
            list[i].erase( std::unique( list[i].begin(), list[i].end() ), list[i].end() );

        std::cout << "Case #" << current++ << ':' << std::endl;
        components = 0;
        for (int i = 0; i < vertices; i++) {
            if (visited[i]) continue;
            components++;
            for (int j = 0; j < list[i].size(); j++)
                std::cout << char(list[i].at(j) + 97) << ',';
            std::cout << std::endl;
            visit(i, visited, list);
        }
        std::cout << components << " connected components" << std::endl << std::endl;
    }
}
