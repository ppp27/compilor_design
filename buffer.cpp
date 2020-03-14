#include<iostream>
using namespace std;
#define MAX 1000
struct buffer{
	char arr[100];
	int top;
   int size;
};
void push(struct buffer *st, char num) {
   st->top--;
   st->arr[st->top] = num;

}
char pop(struct buffer *st) {
   char num,stop='$';
   if (st->size-1==st->top) {
      return stop;
   }
   num = st->arr[st->size-1];
   st->size--;
   return num;
}
