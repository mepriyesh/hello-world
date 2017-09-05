#include<iostream>
#include<bits/stdc++.h>
#include <sstream>
#include<cstring>
using namespace std;

int main(){
	int a;
	cin>>a;
	while(a--){
		string s;
		string t;
		cin>>s>>t;
		set<char>s1;
		set<char>s2;
		
		for(int i=0;i<s.length();i++){
			s1.insert(s[i]);
		}
		for(int i=0;i<s.length();i++){
			s2.insert(t[i]);
		}
		cout<<s1.size()<<endl;
        cout<<s2.size()<<endl;		
		if(s==t){
			cout<<"B"<<endl;
		}else if(s1.size()==1 && s2.size()==1){
			cout<<"A"<<endl;
		}else if(s1.size()<s.length()){
			cout<<"A"<<endl;
		}else if(s1.size()== s.length() && s2.size()== t.length()){
			cout<<"B";
		}
	}
}
