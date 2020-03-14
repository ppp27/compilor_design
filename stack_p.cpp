#include<iostream>
using namespace std;
#define MAX 1000
int size;
struct stack{
	int arr[100];
	int top;
};
void push( struct stack *st, int num, int size) {
   if (st->top == size - 1) {
      cout<<"stack is full";
      return;
   }
   st->top++;
   st->arr[st->top] = num;
}
int pop(struct stack *st) {
   int num;
   if (st->top == -1) {
	cout<<"Stack is underflow";
      return -1;
   }
   num = st->arr[st->top];
   cout<<num;
   st->top--;
   return num;
}
