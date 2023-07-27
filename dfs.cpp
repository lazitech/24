#include<bits/stdc++.h>
using namespace std;
int amo;
map<vector<int>,bool>m; 
int main()
{
//	freopen("a.txt","w",stdout);
	for(int i=5;i<=5;++i)
	for(int j=5;j<=5;++j)
	for(int k=8;k<=8;++k)
	for(int l=11;l<=11;++l)
	for(int q=1;q<=4;++q)
	for(int qq=1;qq<=4;++qq)
	for(int qqq=1;qqq<=4;++qqq)
	{
		if(i==0||j==0||k==0||l==0)	continue;
		int ans=i;
		switch(q)
		{
			case 1:
			ans+=j;
			break;
			case 2:
			ans-=j;
			break;
			case 3:
			ans*=j;
			break;
			case 4:
			if(j==0)	continue;
			if(ans%j!=0)	continue; 
			ans/=j;
			break;
		}
		switch(qq)
		{
			case 1:
			ans+=k;
			break;
			case 2:
			ans-=k;
			break;
			case 3:
			ans*=k;
			break;
			case 4:
			if(k==0)	continue;
			if(ans%k!=0)	continue; 
			ans/=k;
			break;
		}
		switch(qqq)
		{
			case 1:
			ans+=l;
			break;
			case 2:
			ans-=l;
			break;
			case 3:
			ans*=l;
			break;
			case 4:
			if(l==0)	continue;
			if(ans%l!=0)	continue; 
			ans/=l;
			break;
		}
		if(ans==24)	
		{
			printf("[-999,%d,%d,%d,%d],",i,j,k,l);
			cout<<i;
			switch(q)
			{
				case 1:
				cout<<'+';
				break;
				case 2:
				cout<<'-';
				break;
				case 3:
				cout<<'*';
				break;
				case 4:
				cout<<'/';
				break;
			}
			cout<<j;
			switch(qq)
			{
				case 1:
				cout<<'+';
				break;
				case 2:
				cout<<'-';
				break;
				case 3:
				cout<<'*';
				break;
				case 4:
				cout<<'/';
				break;
			}
			cout<<k;
			switch(qqq)
			{
				case 1:
				cout<<'+';
				break;
				case 2:
				cout<<'-';
				break;
				case 3:
				cout<<'*';
				break;
				case 4:
				cout<<'/';
				break;
			}
			cout<<l<<endl;
			//amo++;
			vector<int>a;
			a.clear();
			a.push_back(i);
			a.push_back(j);
			a.push_back(k);
			a.push_back(l);
			sort(a.begin(),a.end());
			if(m[a]==false)	
			{
				amo++;
				printf("[-999,%d,%d,%d,%d],",i,j,k,l);
				m[a]=true;
				}	
		}
	}
	cout<<endl;
	cout<<amo;
	return 0;
}
