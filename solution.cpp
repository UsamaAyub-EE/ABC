#include<iostream>
using namespace std;
int get_pair_count(string,int);
class ABC
{
	public:
		string createString(int N,int K)
		{
			auto loop_count=0;
			char place='C';
			string s(N,'A');
			if(K==0)
				return s;
			for(auto i=1;i<N;++i)
			{
				if(++loop_count==(2*N))
					return "";
				s[i]=place;
				if(get_pair_count(s,N)==K)
					return s;
				if(s[i+1]=='B'||s[i+1]=='C')
				{
					i=0;
					place='B';
					continue;
				}
				else if(i==(N-1))
				{
					i=0;
					place='B';
					continue;
				}
				else
					s[i]='A';	
			}
			return "";
		}
};
int get_pair_count(string s,int N)
{
	auto pair_count=0;
	for(auto i=0;i<(N-1);++i)
	{
		for(auto j=i+1;j<N;++j)
		{
			if(s[i]<s[j])
			    ++pair_count;
		}
	}
	return pair_count;
}
int main()
{
	ABC obj;
	cout<<obj.createString(3,0);
	cout<<"\n"<<get_pair_count("AABBC",5);
	return 0;
}
