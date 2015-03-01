#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	vector<int> vc;
	vector<int> vh;
	vector<int> ve;
	vector<int> vf;
	int c=0,h=0,e=0,f=0;
	for(int i=0;i<str.length();++i)
	{
		if(str[i]=='C')
		{
			c++;
			vc.resize(c);
			vc[c-1]=i;
		}
		else if(str[i]=='H')
		{
			h++;
			vh.resize(h);
			vh[h-1]=i;
		}
		else if(str[i]=='E')
		{
			e++;
			ve.resize(e);
			ve[e-1]=i;
		}
		else if(str[i]=='F')
		{
			f++;
			vf.resize(f);
			vf[f-1]=i;
		}
	}
	int ans=0;
	for(int i=0;i<vc.size();++i)
	{
		int j=0,k=0,l=0,tempj=0,tempk=0;
		for(j=0;j<vh.size();++j)
		{
			if(vh[j]>vc[i])
			{
				tempj=vh[j];
				vh[j]=-1;
				break;
			}
		}
		if(j==vh.size())
			break;
		for(k=0;k<ve.size();++k)
		{
			if(ve[k]>tempj)
			{
				tempk=ve[k];
				ve[k]=-1;
				break;
			}
		}
		if(k==ve.size())
			break;
		for(l=0;l<vf.size();++l)
		{
			if(vf[l]>tempk)
			{
				ans++;
				vf[l]=-1;
				break;
			}
		}
		if(l==vf.size())
			break;
	}
	cout<<ans<<endl;
	return 0;
}  
