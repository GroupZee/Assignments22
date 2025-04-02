#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100 // Maximum size of the stack

typedef struct {
    char *data[MAX];
    int top;
} Friendlist;

// Function to initialize the stack
void initFriendlist(Friendlist *stack) {
    stack->top = -1;
}

// Function to check if the stack is full
int isFull(Friendlist *stack) {
    return stack->top == MAX - 1;
}

// checking if the list is empty
int isEmpty(Friendlist *stack) {
    return stack->top == -1;
}

//pushong an element onto the list
void push(Friendlist *stack, const char *element) {
    if (isFull(stack)) {
        printf("Friend_list overflow! Cannot push \"%s\".\n", element);
        return;
    }
    stack->data[++stack->top] = strdup(element); // Use strdup to duplicate the string
    printf("\"%s\" added to the friendlist.\n", element);
}


void pop(Friendlist *stack) {
    if (isEmpty(stack)) {
        printf("Friendlist is empty! Cannot pop.\n");
        return;
    }
    printf("\"%s\" popped from the Friend_list.\n", stack->data[stack->top]);
    free(stack->data[stack->top]); // Free the memory allocated for the string
    stack->top--;
}
int peek(Friendlist *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->data[stack->top];
}


// Function to display the list
void display(Friendlist *stack) {
    if (isEmpty(stack)) {
        printf("Friendlist is empty.\n");
        return;
    }
    printf("Current list: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("\"%s\" ", stack->data[i]);
    }
    printf("\n");
}

int main() {
    Friendlist stack;
    initFriendlist(&stack);

    push(&stack, "Bambo"); // Pushing strings onto the stack
    push(&stack, "Bimbo");
    push(&stack, "Bumbu");

    display(&stack); // Display the stack

    //pop(&stack);
    //display(&stack);
    printf("The top name on the list is \"%s\"",peek(&stack));


    return 0;
}
