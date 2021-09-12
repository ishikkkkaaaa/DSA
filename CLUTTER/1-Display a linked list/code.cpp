#include <iostream>
#include <iomanip>
#include <vector> 
class Node{
    int data;
public:
    Node* next;
    Node(int d){
        data = d;
        next = 0;
    }
    int getData(){  return data; }
    
};

void decorateO_P(Node *t){
    do{
        std::cout<<"+";
        for(int i=1;i<19;i++){
            if(i==4)
                std::cout<<"+";
            else
                std::cout<<"-";
        }
        std::cout<<"+";
        t=t->next;
    }while( std::cout<<"    " && t->next);
    std::cout<<"+---+-+";
    std::cout<<std::endl;
}
 

void deleteLL(Node *t){
    while(t){
        Node *ff = t;
        t=t->next;
        delete(ff);
    }
    delete(t);
}

int main(int argc, char **argv) {
 
    std::vector<int> arr = {3, 5, 7, 10, 15};
 
    Node *head = nullptr;
    Node *last = nullptr;
    
    for(int i=0;i<arr.size();i++){
        if(!head){
            head = new Node(arr[i]);
            last = head;
            continue;
        }
        last->next = new Node(arr[i]);
        last = last->next;
    }
    decorateO_P(head);
    Node *t=head;
    do{
        std::cout<<"|"<<std::setw(3)<<t->getData()<<"|"<<std::hex<<t->next<<"|";
        t=t->next;
    }while(t && std::cout<<" -> ");
    std::cout<<std::endl;
    decorateO_P(head);

    deleteLL(head);
    remove(argv[0]);
 
    return 0;
}