#include<stdio.h>
long long sum= 0 ,ans=0,m,a[200001];
void solve(long long sum1 ,long long i)
{  // cout<<ans<<"\n";
	if(i==m)
	{
	  ans=max(ans,min(sum1,sum-sum1));
	  return;
   }
	else
	{
		solve(sum1+a[i],i+1);solve(sum1,i+1) ;
	}
}

int main(){
	int n;

	
	scanf("%d", &n);
	scanf("%lld", &m);
	for(int i=0; i<m; i++){
		scanf("%lld", &a[i]);
		sum += a[i];
	}
	
	if(n==1){
	
		printf("%lld", sum);
	}
	else{
		solve(0,0);
		printf("%lld", ans);
	}
	return 0;
}
