#include <iostream>
using namespace std;

class InventoryNode{
    private:
    string item;
    int itemCount;
    InventoryNode* nextNode;

    public:
    InventoryNode(){
        this->item = "head";
        this->itemCount = -1;
        this->nextNode = nullptr;
    }
    InventoryNode(string itemName, int itemCount){
        this->item = itemName;
        this->itemCount = itemCount;
        this->nextNode = nullptr;
    }

    void PrintNodeData(){
        cout << this->itemCount << " " << this->item << endl;
    }
    
    InventoryNode* GetNext(){
        return this->nextNode;
    }

    // InsertAtFront(headNode, newNode)
    void InsertAtFront(InventoryNode* a, InventoryNode* b){
        b->nextNode = a->nextNode;
        a->nextNode = b;

    }

};