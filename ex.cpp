#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <iterator>
using namespace std;
int main(){
    string exp(" ( a + b ) * c - ( d - e ) * f / g");
    //remove space character
    exp.erase(remove_if(exp.begin(), exp.end(), ::isspace), exp.end());
    int i=0;
    while(exp[i]!='\0'){
    cout<<exp[i];
    i++;
    }

    return 0;
}