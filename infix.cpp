//Infix Evaluation
#include<iostream>
#include<stack>
using namespace std;

int pri(char ch){
	switch (ch){
		case '(':
			return 1;
		case '+':
			//return 2;
		case '-':
			return 3;
		case '*':
			//return 4;
		case '/':
			return 5;
		
		case '^':
			return 6;
	}
	return -1;
}


float calculate(char op, float l , float r)
{
	if(op == '+')
	{
		return l + r;
	}
	else if(op == '-')
	{
		return l - r ;
	}
	else if(op == '*')\
	{
		return l * r;
	}
	else if(op == '/')
	{
		if(r > 0)
		{
			return l/r;
		}
		return 0;
	}
	else if(op == '^')
	{
		int b = l; // l is made int and stored at b
		int p = r; // r is made int and stored at p
		return b ^ p;
	}
	return -1;
}

int main()
{
char str[] = "3+4*5*(4+3)-1/2+1";
//char str[] = "3+4*5*4+3-1/2+1";
float l = sizeof(str)/sizeof(char);
int k = 0;
stack<char> s;
stack<float> op_s;
cout <<"InFix Expression: " << str << endl;
int i = 0;
while(str[i] != '\0')
{
	if(str[i] == '(')
	{
		s.push('(');
	}else if(str[i] == ')')
	{
		while(s.top() != '('){
			float r = op_s.top();
			op_s.pop();
			float l = op_s.top();
			op_s.pop();
			float re = calculate(s.top(),l,r);
			op_s.push(re);
			s.pop(); 
		}
		s.pop();
	}else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^'){
		float pC = pri(str[i]);
		while(!s.empty() && pri(s.top()) >= pC){
			float r = op_s.top();
			op_s.pop();
			float l = op_s.top();
			op_s.pop();
			float re = calculate(s.top(),l,r);
			op_s.push(re);
			s.pop(); 
		}
		s.push(str[i]);
	}else{
		op_s.push(int(str[i])- 48);
	}
	i++;
}
while(!s.empty()){
	float r = op_s.top();
	op_s.pop();
	float l = op_s.top();
	op_s.pop();
	float re = calculate(s.top(),l,r);
	op_s.push(re);
	s.pop(); 
}
cout <<"Result: " << op_s.top() << endl;
return 0;
}

