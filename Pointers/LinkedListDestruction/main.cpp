/**
@Author: Swami Kanuri.
@Contact:swamynaidukanuri@gmail.com
@FaceBook:https://www.facebook.com/swamy.kanuri
*/

/**
@Question:
Create a linked list. It should delete all the links when a linklist
object is destroyed. It can do this by following along the chain, deleting each link as it
goes. You can test the destructor by having it display a message each time it deletes a
link; it should delete the same number of links that were added to the list. (A destructor
is called automatically by the system for any existing objects when the program exits.)
*/

#include <iostream>

using namespace std;

struct Node{
    int val;
    Node *link;
};

class LList
{
public:
    LList():m_head(nullptr){
        cout << "LList()" <<  endl;
    }
    void addItem(int value){
        Node *newNode = new Node;
        newNode->val = value;
        newNode->link = m_head;
        m_head = newNode;
    }
    virtual ~LList(){
        cout << "~LList()" << endl;
        Node *current = m_head;
        while(current)
        {
            Node *temp = current;
            current =  current->link;
            delete temp;
            temp = nullptr;
        }

    }

    void displayList(){
        Node *current = m_head;
        cout << "\n*************************\n";
        while(current)
        {
            cout << current->val << " ";
            current =  current->link;
        }
        cout << "\n*************************\n";
    }
private:
    Node *m_head;
};
int main()
{
    LList *llist = new LList;

    llist->addItem(10);
    llist->addItem(20);
    llist->addItem(30);
    llist->addItem(40);
    llist->displayList();

    delete llist;
    return 0;
}
