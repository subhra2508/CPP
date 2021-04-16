#include<bits/stdc++.h>
using namespace std;
int main(){
	  int d=10;
	  cout<<"the address of d = "<<&d<<endl;
	  int *add;
	  add=&d;
	  cout<<&add<<endl;
	  cout<<*add<<endl;
	  *add=15;
	  cout<<*add<<endl;
	  cout<<add<<endl;
}