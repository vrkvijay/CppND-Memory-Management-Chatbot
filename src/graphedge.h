#ifndef GRAPHEDGE_H_
#define GRAPHEDGE_H_

#include <vector>
#include <string>
#include <memory>

class GraphNode; // forward declaration

class GraphEdge
{
private:
    // data handles (not owned)
    std::shared_ptr<GraphNode> _childNode;
    std::shared_ptr<GraphNode> _parentNode;

    // proprietary members
    int _id;
    std::vector<std::string> _keywords; // list of topics associated with this edge
    

public:
    // constructor / desctructor
    GraphEdge(int id);

    // getter / setter
    int GetID() { return _id; }
    void SetChildNode(std::shared_ptr<GraphNode> childNode);
    void SetParentNode(std::shared_ptr<GraphNode>parentNode);
    std::shared_ptr<GraphNode> GetChildNode() { return _childNode; }
    std::vector<std::string> GetKeywords() { return _keywords; }

    // proprietary functions
    void AddToken(std::string token);
};

#endif /* GRAPHEDGE_H_ */