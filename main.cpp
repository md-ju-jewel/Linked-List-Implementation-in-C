/// ** In the name of ALLAH ** ///

#include <stdlib.h>
#include <stdio.h>

// Define the structure for a Node
struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    struct Node *Head, *newnode, *temp;
    Head = NULL; // Initialize the head pointer to NULL

    printf("How many nodes do you want to create? ");
    int n;
    scanf("%d", &n);

    printf("Enter all elements: ");
    while (n--)
    {
        // Allocate memory for a new node
        newnode = (struct Node*)malloc(sizeof(struct Node));

        // Read the data for the new node
        scanf("%d", &newnode->data);

        // Set the next pointer of the new node to NULL
        newnode->next = NULL;

        if (Head == NULL)
        {
            // If the list is empty, initialize head and temp to the new node
            Head = temp = newnode;
        }
        else
        {
            // Append the new node to the end of the list
            temp->next = newnode;
            temp = newnode;
        }
    }

    // Print the linked list
    printf("Linked List : ");
    temp = Head;
    while (temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
