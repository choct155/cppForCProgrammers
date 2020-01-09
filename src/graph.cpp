#include "graph.h"

template <class T>
Node::Node( T value ) {
    std::ostream out = << this;
    std::cout << "Newly Created -> " << out << std::endl;
    this.id = nodeCount;
    nodeCount++;
}

Node::~Node( void ) {
    std::ostream out = << this;
    std::cout << "Just destroyed -> " << out << std::endl;

}


std::ostream& operator << (std::ostream& out, Node& n) {
    out << "Node( id: " << n.getId() << ", value: " << n.value << " )";
    return out;
}