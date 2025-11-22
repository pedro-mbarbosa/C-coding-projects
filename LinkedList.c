#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct _node
{
    int value;
    struct _node* next;
};

typedef struct _node node;


void CreateLinkList(node** pHead, int number)
{
    node* initalNode = calloc(1, sizeof(node));
    if (initalNode == NULL)
    {
        printf("Out of memory\n");
        exit(-1);
    }
    initalNode->value = number;
    initalNode->next = NULL;
    *pHead = initalNode;
}

void AppendValue(node* pHead, int number)
{
    node* pWalker = pHead;

    node* newNode = (node*)calloc(1, sizeof(node));
    if (newNode == NULL)
    {
        printf("Out of memory\n");
        exit(-1);
    }
    newNode->value = number;
    newNode->next = NULL;

    if (pHead == NULL)
    {
        return;
    }

    while (pWalker->next != NULL)
    {
        pWalker = pWalker->next;
    }

    pWalker->next = newNode;
}

void PrintLinkList(node* pHead)
{
    node* pWalker = pHead;
    int cnt = 1;
    while (pWalker != NULL)
    {
        printf("%d: %d\n", cnt, pWalker->value);
        pWalker = pWalker->next;
        cnt++;
    }
    if (cnt == 0)
    {
        printf("Empty link list!\n");
    }
}

void DeleteLinkList(node* pHead)
{
    node* pWalker = pHead;
    if (pHead == NULL)
    {
        printf("Empty link list!\n");
        return;
    }
    while (pWalker != NULL)
    {
        node* readyToDelete = pWalker;
        pWalker = pWalker->next;
        free(readyToDelete);
    }
}

void RemoveFromList(node* pHead, node* removeNode)
{
    node* pPrev = pHead;
    node* pWalker = pHead;

    while (pWalker != NULL)
    {
        if (pWalker == removeNode)
        {
            pPrev->next = pWalker->next;
            free(pWalker);
            return;
        }
        else
        {
            pPrev = pWalker;
            pWalker = pWalker->next;
        }
    }
}


int RemoveEven(node* pHead)
{
    node* pWalker = pHead;
    int sum = 0;

    if (pHead == NULL)
    {
        printf("Empty link list!\n");
        return 0;
    }

    while (pWalker != NULL)
    {
        if (pWalker->value % 2 == 0)  
        {
            sum += pWalker->value;       
            node* tmp = pWalker;        
            pWalker = pWalker->next;     
            RemoveFromList(pHead, tmp);  
        }
        else
        {
            pWalker = pWalker->next;    
        }
    }

    return sum;
}

void main()
{
    node* LinkList = NULL;
    int value = 0;

   
    CreateLinkList(&LinkList, 1);

    do
    {
        printf("Enter a value (negative number to exit): ");
        scanf("%d", &value);

        if (value >= 0)
        {
            AppendValue(LinkList, value);
            printf("Current Link List: \n");
            PrintLinkList(LinkList);
        }
    } while (value >= 0);

    printf("Ultimate Link List: \n");
    PrintLinkList(LinkList);

    printf("Removing even numbers: \n");
    int evenSum = RemoveEven(LinkList);
    printf("Sum of even numbers: %d\n", evenSum);

    printf("Odd Link List: \n");
    PrintLinkList(LinkList);

    DeleteLinkList(LinkList);
}
