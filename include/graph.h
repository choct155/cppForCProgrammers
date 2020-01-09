#include <iostream>
#include <list>

template <class T>
class Node {

private:
    int id;
    const static int nodeCount = 0;
public:
    T value;
    std::list<Edge> edges;
    Node( T arg ) { value = arg; };
    ~Node( void );
    int getId( void ); 

};

template <class T>
class Edge {

private:
    const static int edgeCount = 0;

public:
    double weight = 1;
    Edge( Node source, Node target );
    Node source;
};
