//STACK
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 40
int SIZE;

struct stack
{
	int top;
	int STACK[MAX];
}s;
void init_stack(){
	s.top = -1;
}
int full(){
	if(s.top == SIZE-1)
		return (1);
	else
		return (0);
}
int empty(){
	if(s.top == -1)
		return (1);
	else
		return (0);
}
int pop(){
	int item;
	if(empty())
	{
		printf("Stack Underflow");
		return NULL;
	}
	else
	{
		item = s.STACK[s.top];
		s.top--;
		return item;
	}		
}
void push(int item){
	if(full())
	{
		printf("Stack overflow.");
	}
	else
	{
		s.top++;
		s.STACK[s.top] = item;	
	}	
}
void display(){
	int i;
	for(i=s.top; i>=0; i--)
	{
		if(!empty() && i==s.top){
		
			printf("\n\nTHE STACK IS: \n");
			printf("top -> %d\n", s.STACK[i]);}
		else{
		
			printf("       %d\n", s.STACK[i]);	}	
	}
}
int main(){
	int n, item;
	init_stack();
	
	printf("\nEnter Stack Size:");
   	scanf("%d", &SIZE);
	
	 while(1){
        printf("1. PUSH an ITEM\n");
        printf("2. POP an ITEM\n");
        printf("3. Exit\n");
        display();
        printf("\nStack [Size: %d]:\n", SIZE);       
        printf("-------------------------\n");
        
        printf("\n\nChoose one of the above option. [1-3]: ");
        scanf("%d",&n);
		switch (n) {
	      	case 1:
				printf("\nEnter an ITEM:");
				scanf("%d", &item);
				push(item);
				break;
	      	case 2:
				item = pop();
				if(item != NULL)
				printf("\nPopped ITEM from stack: %d", item);
				break;
	      	case 3:
				exit(0);
	      	default:
		        printf("\nEnter correct option!Try again.");
		}        
        printf("\n\n-----");
        printf("\nContinue? Enter any key... ");
        getch();
        system("cls");
        }
}

