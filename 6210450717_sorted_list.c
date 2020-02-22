// 6210450717 wanida thammapat
#include <stdio.h> 
#include <stdlib.h> 

struct node { 
   int data; 
   struct node *next; 
};

void print_list(struct node *head)
{   struct node *tmp;
    for (tmp=head; tmp; tmp = tmp->next)
    printf("%d\n", tmp->data);
}

void insert_node_ฺbefore(struct node **head_ref, int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void insert_node_after(struct node *prev_node, int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;

    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
int main()
{
    int n;
    struct node *head, *tmp;
    scanf(" %d" ,&n);
    if(n != -1)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = n;
        head->next = NULL;
        for (;;)
        {
            scanf(" %d" ,&n);
            if (n == -1)
            {
                break;
            }
            if(head -> data > n)
            {
                insert_node_ฺbefore(&head, n);
            }
            else
            {
                for (tmp = head; tmp; tmp = tmp -> next)
                {
                    
                    if (tmp -> next == NULL)
                    {
                        struct node *new_node = (struct node *)malloc(sizeof(struct node));
                        new_node -> data = n;
                        new_node -> next = NULL;
                        tmp->next = new_node;
                        break;
                    }
                    else if ((tmp -> next)-> data>n)
                    {
                        insert_node_after(tmp, n);
                        break;
                    }
                    
                }  
            }
        }
        print_list(head);
    }
}