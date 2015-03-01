#include<iostream>
using namespace std;

int main() {
	
	int T;
	long long l,s,c;
	int d,i;
	cin>>T;
	while(T--)
	{
		cin>>l>>d>>s>>c;
		for(i=1;i<d;i++)
		{
			s=(1+c)*s;
			if(s>=l)
				break;
		}
		if(s<l)
			cout<<"DEAD AND ROTTING"<<endl;
		else
			cout<<"ALIVE AND KICKING"<<endl;
	}
	
	return 0;
} 
