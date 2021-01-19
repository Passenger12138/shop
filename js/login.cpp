#include<iostream>
#include<cstdio>
#include<vector>
#include<string>

using namespace std;

const int maxn=100000;
vector<int> primer;
bool isprime[maxn];

int main(){
	for(int i=0;i<maxn;i++){
		isprime[i]=1;
	}
	isprime[0]=0;
	isprime[1]=0;
	for(int i=2;i<maxn;i++){
		if(!isprime[i]){
			continue;
		}
		primer.push_back(i);
		for(int j=i*i;j<maxn;j+=i){
			isprime[j]=0;
		}
	}
	printf("%d",primer.size());
	
}

