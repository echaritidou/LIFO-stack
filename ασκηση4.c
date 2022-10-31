#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

//Δημιουργώ μία στοίβα με σταθερό μέγεθος
int stack[SIZE];
int top;
int i;
int choice;
void push();
void pop();
void display();

//Φτιάχνω μία συνάρτηση που θα εισάγει στη στοίβα το στοιχείο που της δίνει ο χρήστης
void push(){
    int elem;
    //Ελέγχω αν η στοίβα είναι γεμάτη
    if (top==SIZE-1)
    printf("Stack overflow\n");
    //Αν δεν είναι, ζητάω το στοιχείο και το εισάγω στην κορυφή της στοίβας
    else{
        printf("Enter the element: \n");
        scanf("%d", &elem);
        top++,
        stack[top]=elem;
    }
}

//Φτιάχνω μία συνάρτηση που θα διαγράφει το στοιχείο της κορυφής της στοίβας
void pop(){
    int elem;
    //Ελέγχω αν η στοίβα είναι άδεια
    if (top==-1)
    printf("Stack underflow\n");
    //Αν δεν είναι, διαγράφω το τελευταίο στοιχείο που εισήχθη, δηλαδή,
    //αυτό που βρίσκεται στην κορυφή της στοίβας
    else{
        printf("The last element has been deleted.\n");
        elem=stack[top];
        top--;
    }
}

//Φτιάχνω μία συνάρτηση που τυπώνει όλα τα στοιχέια της στοίβας
void display(){
    //Ελέγχω αν η στοίβα είναι άδεια
    if (top==-1)
    printf("Stack underflow\n");
    //Αν δεν είναι, με δομή επανάληψης τυπώνω όλα τα στοιχεία της στοίβας
    else if (top>0){
        printf("The elements of the stack are:\n");
        for (i=top; i>=0; i--)
        printf("%d\n", stack[i]);
    }
}

int main(){
    //Αρχικοποιώ τη στοίβα
    top=-1;
    //Φτιάχνω μία δομή επανάληψης για τις επιλογές που έχει ο χρήστης
    while (1){
        printf("\nMENU\n");
        printf("***************\n");
        printf("1.Add an element: \n");
        printf("2.Delete last element: \n");
        printf("3.Display the elements of the stack: \n");
        printf("4.Exit\n");
        printf("Make a choice: ");
        scanf("%d", &choice);
        if (choice==1)
        push();
        if (choice==2)
        pop();
        if (choice==3)
        display();
        if (choice==4)
        printf("Bye bye.");
    }
}