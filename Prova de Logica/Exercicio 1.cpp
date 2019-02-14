#include <bits/stdc++.h>
using namespace std;
int main()
{
	string In;
	int Menor,Resp = 0,Vet[100000];
	int i,j = 0;
	
	while(cin>>In)
	{
		Menor = 10;
		for(i = 1 ; In[i] != ',' && In[i] != '\0'; i += 2)
		{
			if( (In[i] - 48) < Menor)
			{
				Menor = (In[i] - 48);
			}
		}
		
		Vet[j] = Menor;
		j++;
		
		Resp += Menor;
		if(In[i] == '\0')break;
		
	}
	
	if(Resp == 0)
	{
		Resp = Menor;
	}
	
	for(i = 0 ; i < j ; i ++)
	{
		if(i < j - 1)
		{
			cout<<Vet[i]<<" + ";
		}
		else
		{
			cout<<Vet[i] << " = ";
		}
	}
	cout<<Resp<<endl;
	return 0;
}
