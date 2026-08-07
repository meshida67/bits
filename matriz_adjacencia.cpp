#include <bits/stdc++.h>

// Implementacao de grafos com matriz de adjacencia em C++

class Graph
{
    public:
        std::vector<std::vector<int>> adj_matrix;
        Graph(n) adj_matrix = std::vector<std::vector<int>>(n, std::vector<int>(n, 0)); 

        void add_edge(int a, int b)
        {
            adj_matrix[a][b]++;
            adj_matrix[b][a]++;
        }

        void rm_edge(int a, int b)
        {
            adj_matrix[a][b]--;
            adj_matrix[b][a]--;
        }
        
}

int main()
{
    return 0;
}
