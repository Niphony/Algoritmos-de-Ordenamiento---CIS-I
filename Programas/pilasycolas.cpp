#include <cctype>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Jerarquia + - * / ^ % 


int Jerarquia(char op){

  if(op == '+' || op == '-') return 1;
  if(op == '*' || op == '/' || op == '%') return 2;
  if(op == '^') return 3;

return 0;
}

int main(){

 string posfija = "";
 string infija;
 cout<<"Ingrese la expresión: "<<endl;
 cin >> infija; 

 stack<char> pila;
 
 for (char c : infija){
   if (isalnum(c)){
    posfija += c;
    
   }

   else if(c == '('){
      pila.push(c);
    }  
   else if (c == ')'){
    while (!pila.empty() && pila.top() != '(')  {
    posfija += pila.top();
    pila.pop();
    }
        pila.pop();
   }
   else{
    while (!pila.empty() && Jerarquia(pila.top()) >= Jerarquia(c))  {
    posfija += pila.top();
    pila.pop();
    }
   pila.push(c);
   }
 }

while (!pila.empty()){
  posfija += pila.top();
    pila.pop();
}

cout << "Expresion : " << posfija <<endl;
return 0;

}
