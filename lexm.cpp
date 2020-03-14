#include<iostream>
using namespace std;
#define MAX 1000
int size;
struct buffer{
	int arr[100];
	int top;
};
void push( struct buffer *st, int num) {
   if (st->top == -1) {
      cout<<"Buffer is full";
      return;
   }
   st->top--;
   st->arr[st->top] = num;
}
int pop(struct buffer *st , int size) {
   int num;
   if (st->top == size-1) {
	cout<<"Buffer is underflow";
      return -1;
   }
   num = st->arr[st->top];
   cout<<num;
   st->top--;
   return num;
}
