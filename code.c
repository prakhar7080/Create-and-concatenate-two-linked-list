#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    int n,i;
    printf("Enter no of elements = ");
    scanf("%d",&n);
    struct node *head1=0,*head2=0,*newnode1,*newnode2,*temp;
    printf("Enter the data of fist linked list : ");
    for(i=1;i<=n;i++){
    newnode1 = malloc(sizeof(struct node));
    scanf("%d",&newnode1->data);
    newnode1->next = 0;
    if(head1 == 0){
        head1 = temp = newnode1;
    }
    else{
        temp->next = newnode1;
        temp = temp->next;
    }
    }
    printf("\nEnter data of second list = ");
    for(i=1;i<=n;i++){
        newnode2 = malloc(sizeof(struct node));
        scanf("%d",&newnode2->data);
        newnode2->next=0;
        if(head2==0){
            head2 = temp = newnode2;
        }
        else{
            temp->next = newnode2;
            temp = temp->next;
        }
    }
    temp=head1;
    printf("Fist list : \n");
    while(temp){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    temp=head2;
    printf("Second list : \n");
    while(temp){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    printf("Combined list : \n");
    temp = head1;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=head2;
    temp = head1;
    while(temp){
        printf("%d->",temp->data);
        temp = temp->next;
    }

    
}
