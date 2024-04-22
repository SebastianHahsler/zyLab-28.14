#include <iostream>
#include "InventoryNode.h"
using namespace std;

int main(){
    int numItems;
    string itemName;
    int itemCount;

    InventoryNode* headNode;
    InventoryNode* currNode;

    // create the dummy/head node
    headNode = new InventoryNode();
    
    cin >> numItems;
    for(int i=0; i<numItems; i++){

        // read item name and item count, real items
        cin >> itemName;
        cin >> itemCount;

        currNode = new InventoryNode(itemName, itemCount);

        currNode->InsertAtFront(headNode, currNode);

    }

    // iterate through linked list
    currNode = headNode->GetNext();
    while(currNode != nullptr){

        currNode->PrintNodeData();
        currNode = currNode->GetNext();
    }

    return 0;

}