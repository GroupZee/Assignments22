#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char **data;
    int MAX;
    int top;
} Friendlist;


// Function to initialize the list
void initFriendlist(Friendlist *l, int y) {
    l->top = -1;
    l->MAX=y;
    l->data = (char **)malloc(y*sizeof(char *)); // Allocate memory for the array
}

// Function to check if the list is full
int Full(Friendlist *l) {
    return l->top==l->MAX-1;
}

// checking if the list is empty
int Empty(Friendlist *l) {
    return l->top == -1;
}

//pushong an element onto the list
void push(Friendlist *l, int y) {
    for(int r=0;r<y;r++){
    if (Full(l)) {
        printf("Friend_list overflow! Cannot push.");
        return;
    }
    char item[100];
    printf("%d.",r+1);
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = 0; // Remove newline character

    l->data[++l->top] = strdup(item); // Duplicate and store the string

}
printf("\n");
}

void pop(Friendlist *l) {
    if (Empty(l)) {
        printf("Friendlist is empty! Cannot pop.\n");
        return 0;
    }
else{
    printf("\"%s\" popped from the Friend_list.\n",l->data[l->top]);
    l->top--;
}
}
char* peek(Friendlist *l) {
    if (Empty(l)) {
        printf("List is empty!\n");
        return 0;
    }
    return l->data[l->top];
}


// Function to display the list
void display(Friendlist *l) {
    if (Empty(l)) {
        printf("Friendlist is empty.\n");
        return;
    }
    printf("Current list: ");
    for (int i = 0; i <=l->top; i++) {
        printf("-%s\n",l->data[i]);
    }
    printf("\n");
}
void menu(){
printf("This is an empty list. Choose any of the options below to perform an action on the list.\n1.Push an item to the list.\n2.Pop an item. \n3.Peek an item.\n4.Display list. \n5.Exit\n");
}
int returningToMenu(){
int c;
printf("    Do you wish to continue?\n    1.Yes\n    2.No\n");
    scanf("    %d",&c);
    getchar();
    if(c==1){
    menu();
    return 1;
    }
    else if(c==2){
    printf("Exiting Program.\n\n");
    return 0;
    }
    else{
    printf("...\nThere seems to be a problem with our network.Try again after some time.\n\n.");
    return 0;
    }
}


int main() {
int y;
int choice;
Friendlist l;
initFriendlist(&l,y);
int continueMenu = 1;
menu();
while (continueMenu) {

    scanf("%d", &choice);
    getchar(); // Clear newline character

    switch (choice) {
        case 1:
            printf("How many do you wish to enter? ");
            scanf("%d",&y);
            getchar();
            push(&l,y);
            break;
        case 2:
            pop(&l);
            display(&l);
            break;
        case 3:
            printf("The top name on the list is \"%s\"\n", peek(&l));
            break;
        case 4:
            display(&l);
            break;
        case 5:
            continueMenu = 0; // Exit the loop
            break;
        default:
            printf("Invalid input.\n");
    }

    if (continueMenu) {
        continueMenu = returningToMenu();
    }
}



    return 0;
}
