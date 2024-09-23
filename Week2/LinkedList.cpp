#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    bool isEmpty() { return head == NULL; }

    int getNode(int index)
    {
        if (index < 0)
        {
            cout << "Invalid index" << endl;
            return -1;
        }
        Node *temp = head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                return -1;
            }
        }
        return temp->data;
    }

    void editNode(int index, int data)
    {
        if (index < 0)
        {
            cout << "Invalid index" << endl;
            return;
        }
        Node *temp = head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "Invalid index" << endl;
                return;
            }
        }
        temp->data = data;
    }

    void removeNode(int index)
    {
        if (index < 0)
        {
            cout << "Invalid index" << endl;
            return;
        }
        if (index == 0)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                cout << "Invalid index" << endl;
                return;
            }
        }
        Node *temp2 = temp->next;
        temp->next = temp->next->next;
        delete temp2;
    }

    void addNode(int index, int data)
    {
        if (index < 0)
        {
            cout << "Invalid index" << endl;
            return;
        }
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;
        if (index == 0)
        {
            temp->next = head;
            head = temp;
            return;
        }
        Node *temp2 = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp2 = temp2->next;
            if (temp2 == NULL)
            {
                cout << "Invalid index" << endl;
                return;
            }
        }
        temp->next = temp2->next;
        temp2->next = temp;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.addNode(0, 1);
    list.addNode(1, 2);
    list.addNode(2, 3);
    list.addNode(3, 4);
    list.addNode(2, 5);
    list.printList();
    list.removeNode(2);
    list.printList();
    list.editNode(2, 6);
    list.printList();
    cout << list.getNode(2) << endl;
    cout << boolalpha << list.isEmpty() << endl;
    return 0;
}
