#include<bits/stdc++.h>
using namespace std;
//function for addition of large numbers
string add(string s1,string s2){
	 string s3;
	 char c;
	 int i,j,add=0,s;
	 if(s1.size()<s2.size())
	      swap(s1,s2);
	 reverse(s1.begin(),s1.end());
	 reverse(s2.begin(),s2.end());
	 for(i=0;i<s2.size();i++){
	 	 s=(add+(s1[i]-'0')+(s2[i]-'0'))%10;
	 	 add=(add+(s1[i]-'0')+(s2[i]-'0'))/10;
	 	 c=s+'0';
	 	 s3.push_back(c);
	 }
	 for(i=s2.size();i<s1.size();i++){
	 	 s=(add+(s1[i]-'0'))%10;
	 	 add=(add+(s1[i]-'0'))/10;
	 	 c=s+'0';
	 	 s3.push_back(c);
	 }
	 reverse(s3.begin(),s3.end());
	 return s3;
}

int main(){
	int ch;
	do{
		string s1,s2,s3;
		cout<<"Enter the first number for addition:";
		cin>>s1;
		cout<<"Enter the second number for addition:";
		cin>>s2;
		s3=add(s1,s2);
		cout<<"The result of addition is:"<<s3<<endl;
		cout<<"Enter 1 for more addition :";
		cin>>ch;
	}while(ch==1);
	return 0;
}
