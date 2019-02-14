#include <bits/stdc++.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i,j;
	string In;
	bool Valid = true;
	
	cin>>In;
	for (i = 0; In[i]; i++)
	{
		if(In[i]=='[')
		{
			for (j = i; In[j]!='\0'; j++)
			{
				if(In[j]==']')
				{
					In[i]='.',In[j]='.';
					break;
				}
			}
		}
	}
	for (i = 0; In[i]; i++)
		if(In[i]=='[' || In[i]==']')break;
	if(In[i] != '\0')Valid = false;
		
	for (i = 0; In[i]; i++)
	{
		if(In[i]=='(')
		{
			for (j = i; In[j]!='\0'; j++)
			{
				if(In[j]==')')
				{
					In[i]='.',In[j]='.';
					break;
				}
			}
		}
	}
	for (i = 0; In[i]; i++)
		if(In[i]=='(' || In[i]==')')break;
	if(In[i] != '\0')Valid = false;
	
	for (i = 0; In[i]; i++)
	{
		if(In[i]=='{')
		{
			for (j = i; In[j]!='\0'; j++)
			{
				if(In[j]=='}')
				{
					In[i]='.',In[j]='.';
					break;
				}
			}
		}
	}
	for (i = 0; In[i]; i++)
		if(In[i]=='{' || In[i]=='}')break;
	if(In[i] != '\0')Valid = false;
	
	
	
	if(Valid)
	{
		cout<<"String Valida\n";
	}
	else
	{
		cout<<"String não Valida\n";
	}
	cout<<In<<endl;
	return 0;
}
 

