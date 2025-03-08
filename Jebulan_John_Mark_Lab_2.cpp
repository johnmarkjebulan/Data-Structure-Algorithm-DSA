#include <iostream>
using namespace std;
 typedef struct Node{
 string songName, data;
 Node *link;
 }Node;

  Node *createNode(string data){
        Node *newNode = new Node;
        newNode->songName= data;
        newNode->link = NULL;
     return newNode;

  }
Node *insertAtEnd(string data, Node *head){
   if(head == NULL){
     Node *newNode = createNode(data);
     head = newNode;
     cout << "A new node has been inserted at the end \n" <<endl;
     return head;
   }
  Node *temp = new Node;
  temp = head;

  while(temp->link != NULL){
    temp = temp->link;
  }
  Node *newNode = createNode(data);
  temp->link = newNode;
  cout << "A new node has been inserted at the end \n" << endl;
  return head;
}
 Node *insertAtBeginning(string data, Node *head){
     Node *newNode = createNode(data); 
     newNode->link = head;
     head = newNode; 
     cout << "A new node has been inserted at the beginning \n" <<endl; //Output confirmation
     return head;
 }

string insertAfter(string after, string data, Node*& head) {
     Node *temp = new Node;
     while(temp != nullptr && temp->songName !=after) {
       temp = temp->link;
     }
     if (temp == NULL) {
         return "No such song exist, please try again later.";
     }
     Node *newNode = createNode(data);  
     newNode->link = temp->link; 
     temp->link = newNode; 
     cout << "A  new node has been added after" + after + "\n"<< endl;
     return "head";
 }
     void traverse(Node *head){
         Node *temp = new Node;
         temp = head;

      cout << "My Playlist" <<endl;
      while(temp != NULL){
          cout << temp->songName<< "->" << endl;
          if(temp->link == NULL){
              cout << "NULL"<<endl;
          }
      temp = temp->link;
  }

  }

 int main(){
     Node *head = createNode("Tahanan By Adie");
   head = insertAtEnd("New Rules By Dua Lipa", head);
     head = insertAtEnd("Lihim By Arthur Miguel", head);
     head = insertAtEnd("Enchanted By Taylor Swift", head);
 traverse(head);

     head = insertAtBeginning("Nonsense By Sabrina Carpenter", head);
     head = insertAtBeginning("Terrified By Katherine McPhee ", head);
     head = insertAtBeginning("Padaba Taka By dwta", head);
     head = insertAtBeginning("Co-Pilot By Just Hush", head);
    traverse(head);

    insertAfter("Yk By Cean Jr.", "Faded (Raw) By lllest Morena", head);
    insertAfter("Sin City By Chrishan", "Lil Kasalanan Shortie By Hev Abi", head);
    insertAfter("Rebound By Silent Sanctuary", "Marikit sa Dilim By Juan Caoile & Kyleswish", head);
    traverse(head);

     return 0;

}
