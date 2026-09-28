#include <iostream>

using namespace std;

struct LinkedList {
    struct Node {
        int data;
        Node* next;
        Node(){}
        Node(int _data) {
            data = _data;
            next = nullptr;
        }
    };

    Node* head = nullptr;

    void addFirst(int v) {
        Node* new_node = new Node();
        new_node->data = v;
        new_node->next = head;
        head = new_node;
    }

    void printList(){
        for(Node* p = head; p != NULL; p = p->next) {
            cout << p->data << " ";
        }
        cout << endl;
    }

    void addLast(int v) {
        Node* new_node=new Node();
        new_node->data=v;
        new_node->next = nullptr;
        if(head==NULL){
            head=new_node;
        }
        else{
            Node* p=head;
            while(p->next!= nullptr){
                p=p->next;
            }
            p->next=new_node;
        }
    }

    void insertAfter(int pivot, int newKey) {
        Node* p=head;
        while(p!=nullptr){
            if(p->data==pivot){
                Node* new_node= new Node(newKey);
                new_node->next=p->next;
                p->next=new_node;
                return;
            }
            p=p->next;
        }
    }

    void removeFirst() {
        if(head==nullptr)   return;
        Node* temp=head;
        head=head->next;
        delete temp;
    }

    void removeLast() {
        if(head==nullptr)   return;
        if(head->next==nullptr) return;

        Node* second_last=head;
        while(second_last->next->next != nullptr){
            second_last =second_last->next;
        }
        delete(second_last->next);
        second_last->next =nullptr;
    }
    bool searchByKey(int key){
        Node* p=head;
        while(p!=nullptr){
            if(p->data==key) return true;
            p=p->next;
        }
        return false;
    }
    bool removeByKey(int key){
        Node* p = head;
        while(p->next != nullptr) {
            if(p->next->data == key) {
                Node* temp = p->next;
                p->next = p->next->next;
                delete temp;
                return true;
            }
            p = p->next;
        }

        return false;
    }
};

int main() {
    LinkedList demoList;
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        demoList.addLast(x);
    }
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int c;
            cin>>c;
            demoList.addFirst(c);
        }
        else if(t==2){
            int c;
            cin>>c;
            demoList.addLast(c);
        }
        else if(t==3){
            int x,c;
            cin>>x>>c;
            demoList.insertAfter(x,c);
        }
        else if(t==4){
            demoList.removeFirst();
        }
        else if(t==5){
            demoList.removeLast();
        }
    }
    demoList.printList();
    return 0;
}
