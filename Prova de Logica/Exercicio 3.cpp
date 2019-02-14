#include <bits/stdc++.h>
#include <locale.h>
using namespace std;
int main()
{
	char In[3000],Aux[3000];
	double A = 0;
	int j = 0;
	bool op = false;
	
	cout<<(int)','<<endl;
	
	cin>>In;
	for(int  i = 0 ; In[i] != '\0' ; i++)
	{
		if(In[i] == ',')
		{
			Aux[j] == ',';
			j++;
			
		}
		
		if(In[i] == '.')
		{
			Aux[j] == '.';
			j++;
				
		}
		
		if( (In[i] == '-' || In[i] == '+') && !op )
		{
			op = true;
			Aux[j] = In[i];
			j++;
			
		}
		
		if(In[i] >= '0' && In[i] <= '9')
		{
			Aux[j] = In[i];
			j++;
			op = true;
		}	
	}
	cout<<Aux<<endl;
	A = atof (Aux);
	cout<<A<<endl;
}
