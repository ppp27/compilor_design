#define MAX 1000
#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
#include"myheader.h"
using namespace std;
struct buffer lex(string exp,int size){
	int i=0;
	struct buffer st;
	st.size=size;
   	st.top=st.size;
   	string input = exp;
   	exp.erase(remove_if(exp.begin(), exp.end(), ::isspace), exp.end());
	int count=0;
	while(exp[i]!='\0'){
	if (!ispunct(exp[i])||exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='('||exp[i]==')')
	{
		push(&st,exp[i]);
		count++;
	
	}
	else{
		err(i);
		//cout<<"error"<<i+1<<"th char and error is"<<exp[i];
	}
	
	i++;

    }
return st;

}
int main(){
	struct buffer st;
	string input="#((((a+b)*#c))+d)###";
	st.size=input.size();
	st =lex(input,st.size);
	cout<<st.arr[15];
	parser(st);
	/*int count=st.size;
    while(count!=1){
    char c = pop(&st);
    if(c=='$')
    	break;
    else
    	cout<<c<<"\n";
    count--;
}	*/
	return 0;
}

