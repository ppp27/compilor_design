//Grammer is in ll(1):
//E->TR
//R->+TR|-TR|(-
//T->FR1
//R1->*FR1|/FR1|(-
//F->OEC|$;
//O->(
//C->)
//$->[a-z][0-9]
#include<iostream>
#include"myheader.h"
void E(char c);
void T(char c);
void R(char c);
void R1(char c);
void F(char c);
void terms(char c);
// Match function 
char getC(struct buffer st){ 
     
    char look = pop(&st); 
    
    return look; 
} 
char parser(struct buffer st){
	char lookahead=getC(st);
	E(lookahead);
}

void E(char c){
	cout<<"e";
	T(c);
	R(c);
}
void T(char c){
	cout<<"t";
	F(c);
	R1(c);
}
/////////////////////////////
void R(char c){
	cout<<"r";
	T(c);
	R(c);
}
////////////////////////////
void F(char c){
	cout<<"f"; 
	switch(c){
		case ''
	}
	E(c);

}
void R1(char c){
	cout<<"r1";
	F(c);
	R1(c);
}