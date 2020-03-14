#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>
#include<iterator>
using namespace std;
struct buffer{
	char arr[100];
	int top;
   int size;
};
void push( struct buffer *st, char num);
char pop(struct buffer *st);
int err(int i);
struct buffer lex(string exp,int size);
char parser(struct buffer st);
//char lookahead(struct buffer st,int length);
//void match(char t , int length,struct buffer st);