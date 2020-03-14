#include<iostream>
#include"myheader.h"
using namespace std;
struct stack{
	int arr[100];
	int top;
};
int main(){
   struct stack st;
   st.top=-1;
   for(int i=0;i<20;i++){
      push(&st,i,100);
   }
   for(int j=0;j<20;j++){
      pop(&st);
   }
return 0;
}
      
