#include<iostream>
#include<cstring>
using namespace std;
void swapc(char &a,char &b)
{
	char temp=a;
	a=b;
	b=temp;
}
void per(string word,int l, int r)
{
	if(l==r)
	{
		cout<<word<<endl;
	}
	else
	{
		for(int i=l;i<=r;i++)
		{
			swapc(word[l],word[i]);
			per(word,l+1,r);
			swapc(word[l],word[i]);
		}
	}
}
int main()
{
	string word;
	cout<<"enter the string"<<endl;
	cin>>word;
	int len=word.length();
	cout<<len<<endl;
	per(word,0,len-1);
}
/* cat
cat
ata
act
atc
tac
tca
*/
