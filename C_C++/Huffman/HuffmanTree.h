#include <iostram>
struct HuffmanNode
{
    int weight;
    char data;
    HuffmanNode * LeftChild;
    HuffmanNode * RightChild;
    HuffmanNode * Parent;
}
class HuffmanTree
{
public:
    HuffmanTree(int []);
    int table();
}