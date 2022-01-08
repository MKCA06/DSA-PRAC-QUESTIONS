#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int key;
    struct node *left;
    struct node *right;
}Node;
Node *newNode(int key){
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->key = key;
    temp->left = NULL;
    temp->right = NULL; 
    return temp;}
    Node * insert(Node *p, Node *nwNode){
    if(!p){     printf("Key %d\tinserted\n", nwNode->key);
        return nwNode;  }
    if(nwNode->key > p->key){
        insert(p->right, nwNode);
        if(!(p->right))
            p->right = nwNode;  }
    else{       insert(p->left, nwNode);
        if(!(p->left))
            p->left = nwNode;   }
    return p;}
void search(Node *p, int searchKey){
    if(!p){ printf("No key found for value - %d.\n", searchKey);
        return ;    }       
    if(p->key == searchKey){
        printf("Key %d\tfound\n", searchKey);   }   
    else if(p->key < searchKey)
        search(p->right, searchKey);
    else
        search(p->left, searchKey);}
Node * getInSuccessor(Node *p){
    while(p->left != NULL)
        p = p->left; 
    return p;}  
Node * deletion(Node *p, int delKey){
    struct node *temp;
    if(!p){     printf("Unable to delete. No such key exists.\n");
        return p;   }   
    else if(delKey > p->key)
        p->right = deletion(p->right, delKey);
    else if(delKey < p->key)
        p->left = deletion(p->left, delKey);
    else{       if(p->left == NULL){
            temp = p->right;
            free(p);
            return temp;      }
      else if(p->right == NULL){            temp = p->left;         free(p);
return temp;      }
    temp = getInSuccessor(p->right);
    p->key = temp->key;
    p->right = deletion(p->right, temp->key);    }
   return p;}
void traversePreorder(Node *p){
    if(!p)      return ;
    printf("%d ", p->key);
    traversePreorder(p->left);
    traversePreorder(p->right);}
void traverseInorder(Node *p){
    if(!p)      return ;
    traverseInorder(p->left);
    printf("%d ", p->key);
    traverseInorder(p->right); }
void traversePostorder(Node *p){
    if(!p)      return ;
    traversePostorder(p->left);
    traversePostorder(p->right);
    printf("%d ", p->key);}
int main(void){
    Node *root = NULL; 
    root = insert(root, newNode(26));
    insert(root, newNode(75));
    insert(root, newNode(18));
    insert(root, newNode(92));
    insert(root, newNode(34));
    insert(root, newNode(100));
    search(root, 18);
    search(root, 10);
    Node *newRoot = deletion(root, 34);
    if(newRoot){        printf("After deletion. Tree root node is - %d.\n", newRoot->key);  }
    search(root, 75);
    printf("Preorder : ");
    traversePreorder(root); 
    printf("\nInorder : ");
    traverseInorder(root);  
    printf("\nPostorder : ");
    traversePostorder(root);    
    return 0;}
