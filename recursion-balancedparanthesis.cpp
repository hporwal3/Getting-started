#include <iostream>
#include <ctype.h>
#define size 100
using namespace std;
/*  isBalanced()
It checks if expression is balanced or not in terms of all brackets 
for eg. (A+B) is balanced 
whereas, (A+(B*C) is not balanced
inputs (actual expression, stack in which all opening brackets will be saved, top variable)
output (if the actual expression is balanced it returns true else false)
*/
bool isBalanced(char expression[], char stack[], int top);
/*  push()
Pushs opening bracket into the stack
inputs (stack in which all opening brackets are stored, top variable, opening bracket to be opened)
output - none
*/
void push(char stack[], int &top, char bracket);
/*  pop()
Return the bracket on the top in stack. 
If flag value is true it pops the bracket from the stack.
If flag value is false it just returns the bracket without poping the stack
inputs (stack in which all opening brackets are stored, top variable, bool value telling function to pop or not)
output (top value/bracket stored in stack  or  '\0' if stack is empty)
*/
char pop(char stack[], int &top, bool flag);
int main() {
    char expression[size];
    char stack[size/2];
    bool print;
    cin.getline(expression, size);
    if (isBalanced(expression, stack, -1))
        cout << "true";
    else
        cout << "false";
}
bool isBalanced(char expression[], char stack[], int top) {
    //checking if function encountered any opening bracket if true pushing that into the stack
    if (expression[0] == '(' || expression[0] == '[' || expression[0] == '{')
        push(stack, top, expression[0]);
    else if (expression[0] == ')'){     //checking if function encountered closing bracket
        if (pop(stack, top, true) != '(')   //checking if top value in stack is not a corresponding bracket or not
            return false;                   //if not whole expression is not balanced hence returning false
    }
    else if (expression[0] == ']'){
        if (pop(stack, top, true) != '[')
            return false;
    }
    else if (expression[0] == '}'){
        if (pop(stack, top, true) != '{')
            return false;
    }
    //checking in the end if the stack is empty or not. if true whole expression is balanced
    if (expression[1] == '\0' && pop(stack, top, false) == '\0')
        return true;
    if(expression[1]=='\0')
        return false;
    return isBalanced(expression+1, stack, top);    
}
void push(char stack[], int &top, char bracket) {
    stack[++top] = bracket; //pushing opening bracket into the stack
}
char pop(char stack[], int &top, bool flag) {
    if (top == -1)          //if stack is empty returning '\0'
        return '\0';
    if (flag == false)
        return stack[top];  // if flag = false only returning the value no changes made in stack
    return stack[top--];    // if flag = true top value popped from the stack
}