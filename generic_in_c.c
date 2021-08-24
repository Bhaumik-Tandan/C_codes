#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef  enum meta_date{CHAR, INT, FLOAT, LONG, DOUBLE} type;

typedef struct Integer{
    int i;
}Integer;

typedef struct Character{
    char c;
}Character;

typedef struct Float{
    float f;
}Float;

typedef struct LONG{
    long l;
}Long;

typedef struct Double{
    double d;
}Double;

typedef struct GenericNode{
    type nodeType;
    void *data;
    struct  GenericNode * next;
}NodeX;

typedef enum Boolean{True, False}Boolean;

void AddNodeAtHead (NodeX **head, void *NodeData, type t){
    NodeX * n = (NodeX*)malloc(sizeof(NodeX));

    if(*head == NULL){
        (*head)=(NodeX*)malloc(sizeof(NodeX));//1)Memory to be given to head
        (*head)->next = NULL;
        (*head)->data = NodeData;
        (*head)->nodeType = t;
        return;
    }
    n->nodeType=t;
    n->data = NodeData;
    n->next = *head;
    *head = n;
}

void InsertNodeAtIndex(NodeX **head, void* NodeData,type t, int index){
    NodeX * n=(NodeX*)malloc(sizeof(NodeX));//1)Memory to be given to n
    n->data = NodeData;
    n->nodeType= t;

    int count  = 0;
    NodeX *crr = *head;
    /*
    incase of index 0 also we need to change head
    */
    if(*head== NULL || index==0){//changed
        n->next = *head;//changed
        *head = n;
        return;
    }

    while(index>1 && crr->next){//2)changed
            count++;
            crr = crr->next;
            index--;//3) index should be decremented
    }
    n->next = crr->next;
    crr->next = n;
}
//no bugs found
void DeleteNodeAtIndex(NodeX **head, int index){
    NodeX *crr, *temp;

    if(*head==NULL){
        return;
    }
    if(index == 0){
        *head = (*head)->next;
        return;
    }
    crr = *head;

    while(index > 1 && crr!= NULL){
        crr = crr->next;
        index--;
    }
    if(crr!=NULL){
        temp = crr->next;
        if(temp == NULL)
            crr->next = temp;
        else
            crr->next = temp->next;
    }
}

void PopulateList(NodeX **head){
    int i;
    float f;
    char c;
    long l;
    double d;
    enum Boolean exit = False;
    char in;

    do{
        printf("Press i to enter an integer\n");
        printf("Press c to enter a character\n");
        printf("Press f to enter a float\n");
        printf("Press l to enter a long\n");
        printf("Press d to enter a double\n");
        printf("Press any other key to exit\n");


        scanf(" %c", &in);
        switch (in) {
            case 'i':
                printf(">> Please Enter an Integer value: ");
                scanf("%d", &i);
                Integer * ptrI = (Integer*)malloc(sizeof(Integer));
                ptrI->i=i;
                AddNodeAtHead(head,(void*)ptrI,INT);
                break;
            case 'f':
                printf(">> Please Enter a Float value: ");
                scanf("%f", &f);
                Float * ptrF = (Float*)malloc(sizeof(Float));
                ptrF->f=f;
                AddNodeAtHead(head,ptrF,FLOAT);
                break;
            case 'c':
                printf(">> Please Enter a Char value: ");
                scanf(" %c", &c);
                Character * ptrC = (Character *)malloc(sizeof(Character));
                ptrC->c=c;
                AddNodeAtHead(head,(void*)ptrC,CHAR);
                break;
            case 'l':
                printf(">> Please Enter a Long value: ");
                scanf("%ld", &l);
                Long * ptrL = (Long*)malloc(sizeof(Long));
                ptrL->l=l;
                AddNodeAtHead(head,ptrL,LONG);
                break;
            case 'd':
                printf(">> Please Enter an double: ");
                scanf("%lf", &d);//1)%d changed to %lf
                struct Double * ptrD = (Double *)malloc(sizeof(Double));//2)sizeof(Integer) changed to sizeof(Double)
                ptrD->d=d;
                AddNodeAtHead(head,(void*)ptrD,DOUBLE);
                break;
            default: exit = True;//3)changeed to true
                break;
        }
    }while(exit);

}

int GetListSize(NodeX **head){
    int c =0;
    NodeX *a=*head;//1)added
    /*
    Head should not be changed
    */
    while(a!=NULL){//2)changed
        c++;
        a= a->next;//3)changed
    }
    return c;
}

//NO bugs found
void PrintList(NodeX *head){
    NodeX * crr = head;

    while (crr!=NULL){
        switch (crr->nodeType) {
            case CHAR:
                printf("%c", ((Character*)crr->data)->c);
                break;
            case INT:
                printf("%d", ((Integer*)crr->data)->i);
                break;
            case FLOAT:
                printf("%f", ((Float *)crr->data)->f);
                break;
            case LONG:
                printf("%ld", ((Long *)crr->data)->l);
                break;
            case DOUBLE:
                printf("%lf", ((Double*)crr->data)->d);
                break;
        }
        printf(" ---> ");
        crr= crr->next;

    }
    printf("NULL\n");
}

int main() {

    NodeX *head = NULL;

    PopulateList(&head);
    PrintList(head);

    printf("List Size = %d\n", GetListSize(&head));
    PrintList(head);

    Character *ptrC = (Character *)malloc(sizeof(Character));
    ptrC->c='X';
    PrintList(head);

    int index;

    printf(" test insert at index?? ");
    scanf("%d", &index);

    InsertNodeAtIndex(&head,ptrC,CHAR, index);
    PrintList(head);

    printf(" test delete at index?? ");
    scanf("%d", &index);

    DeleteNodeAtIndex(&head,index);
    PrintList(head);
    return 0;
}