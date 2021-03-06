//============================================================================
// Name        : infinity-calc-logic.cpp
// Author      : Abhay Jatin Doshi
// Version     :
// Copyright   : This project belongs to Abhay Jatin Doshi
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <chrono>
#include <conio.h>
#include "INT.h"
using namespace std;

int main() {
	auto start = chrono::steady_clock::now();
	/****************************************************************************************/
	INT num_array[5] = {"123","456","789","135","246"};
	INT copy = num_array[2];
	for(int i = 0; i < 5 ; i++) cout<<num_array[i]<<endl;
	cout<<(num_array[0]+num_array[1]*num_array[4]);
//	INT num1="-45313515465432435453";
//	INT num2="4643543545343545";
//	cout<<(num1*num2);
//	string s1="",s2="";
//	for(int i = 0 ; i < 4 ; i++){s1+='9';s2+='9';}
//	INT a,b;
//	a=s1;
//	b=s2;
//	cout<<a<<" "<<b<<endl;
//	cout<<(a^b);
//	cout<<int(1/-4);
//	INT m;
//	vector<char> a = {'4','4','2','1','3'};
//	vector<char> b = {'1','2','5','6','9'};
//	vector<char> a = {'9'};
//	vector<char> b = {'9'};
//	vector<char> c;
//	c = m.multiply(a,b);
//	cout<<"Pro:";for(char ch:c) cout<<ch; cout<<endl;
//	INT a = "+1";
//	cout<<a--<<endl;
//	cout<<a;
//	for(int i = 0; i < 55; i++){
//		cout<<"++a: "<<++a<<endl;
//		cout<<"a  : "<<a<<endl;
//	}
//	INT a= "-99";
//	INT b = "-1";
//	cout<<((a>b)?"true":"false");
//	INT a,b;
//	cin>>a>>b;
//	cout<<a<<" "<<b<<endl;
//	cout<<1(+)2;
//	string str = "8-9-8-5-1-2*5";
//	string str = "ftyfjghg";
//	for(int i = 0 ; i < (int)str.size()+1 ; i++){
//		string sub = str.substr(0,i);
//		cout<<sub<<": "<<(INT::check_expression(sub)?"true":"false")<<endl;
//	}
//	cout<<INT::to_postfix(str)<<endl;
//	cout<<INT::parse(str)<<endl;
//	cout<<"Actual result:"<<(8-9-8-5-1-2*5);
//INT	a,b="1521",c;
//	a = b + INT("789485454121215156");
//	c = a * b;
//	cout<<((INT("147151844444464845135184684165318486568413")*(a+INT("4894684511651654522213"))+b+b)*c);
//	try{
//		cout<<(INT("99999999999999999999999999999999999999999998888888888888888888888888888888888")%INT("9999999999999999999999999999999999999999999"));
//	}catch(exception &e){
//		cout<<e.what();
//	}

//	vector<int> a = {5,5,5,5,5};
//	vector<int> b = {1,1,1,1,1};
//	vector<int> c = a - b;
//	for(int x:c) cout<<x<<" ";

//	int dump;
//	string s1="9",s2="9";
//	for(int i = 0 ; i < 15 ; i++){s1+=s1;s2+=s2;}
//	INT a,b;
//	a=s1;
//	b=s2;
//	cout<<"A:"<<a<<endl<<"B:"<<b<<endl;
//	auto init = chrono::steady_clock::now();
//	cout<<"Initial time: "<<chrono::duration<double, milli>(init-start).count()<<"ms"<<endl;
//	cin>>dump;
////	cout<<a.multiplication(b)<<endl;
//	auto m1 = chrono::steady_clock::now();
//	cout<<"Lattice time: "<<chrono::duration<double, milli>(m1-init).count()<<"ms"<<endl;
//	cin>>dump;
//	cout<<(a*b)<<endl;
//	auto m2 = chrono::steady_clock::now();
//	cout<<"Long time: "<<chrono::duration<double, milli>(m2-m1).count()<<"ms"<<endl;
//	cin>>dump;

//	INT a,b;
//	string s1="9",s2="1";
//	for(int i = 0 ; i < 15 ; i++)s1+=s1;
//	s1='-'+s1;
//	s2='+'+s2;
//	a=s1;
//	b=s2;
//	auto init = chrono::steady_clock::now();
//	cout<<endl<<"Initial time: "<<chrono::duration<double, milli>(init-start).count()<<"ms"<<endl<<endl;
//
//	cout<<"Sum:"<<(a+b)<<endl;
//	auto sum = chrono::steady_clock::now();
//	cout<<"Time for sum: "<<chrono::duration<double, milli>(sum-init).count()<<"ms"<<endl<<endl;
//
//	cout<<"Dif:"<<(a-b)<<endl;
//	auto dif = chrono::steady_clock::now();
//	cout<<"Time for diff: "<<chrono::duration<double, milli>(dif-sum).count()<<"ms"<<endl<<endl;
//
//	cout<<"Pro:"<<(a*b)<<endl;
//	auto pro = chrono::steady_clock::now();
//	cout<<"Time for pro:"<<chrono::duration<double, milli>(pro-dif).count()<<"ms"<<endl<<endl;
//
//	cout<<"Quo:"<<(a/b)<<endl;
//	auto quo = chrono::steady_clock::now();
//	cout<<"Time for quo: "<<chrono::duration<double, milli>(quo-pro).count()<<"ms"<<endl<<endl;
//
//	cout<<"Rem:"<<(a%b)<<endl;
//	auto rem = chrono::steady_clock::now();
//	cout<<"Time for rem: "<<chrono::duration<double, milli>(rem-quo).count()<<"ms"<<endl<<endl;

	/****************************************************************************************/
	auto end = chrono::steady_clock::now();
	cout<<endl<<"Total: "<<chrono::duration<double, milli>(end-start).count()<<"ms"<<endl;
//	cout<<"Press any key...";
//	getch();
}
