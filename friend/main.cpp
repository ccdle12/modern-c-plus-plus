#include <iostream>


class Something 
{
    friend class Node;
    private:
        int something_key_;
    public:
        Something(int key) : something_key_{key} {}; 
};

class Node 
{
    private:
        int key;
    public:
        Node() {};
        void get_keys(Something s);
};

void Node::get_keys(Something s)
{
    std::cout << "Something key: " << s.something_key_ << std::endl;
}

int main() 
{
    Something something = Something(4);
    Node node = Node();

    node.get_keys(something);
}
