#include "Graph.hpp"

using namespace std;

int main() {
  Graph G(10);
  G.addEdge(0,9);
  G.addEdge(4, 2);
   cout << "Matriz de adyacencia:\n";
    G.print();
    cout << "\n";

    cout << "Numero de aristas: " << G.numEdges() << "\n";

    int u = 9;
    cout << "inDegree(" << u << "): " << G.inDegree(u) << "\n";

    cout << "¿Es " << u << " un influencer? "
         << (G.isInfluencer(u) ? "Sí" : "No") << "\n";

    return 0;
}


