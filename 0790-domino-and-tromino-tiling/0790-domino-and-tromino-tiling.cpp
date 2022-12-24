class Solution {
public:
    int mod=1e9+7;
int dp[1001][4];
int fun(int i,int state){
	if(i<=0 and state== 1)return 1;
	if(i<=0)return 0;
	long long int a=0,b=0,c=0,d=0;
	if(dp[i][state]!=-1)return dp[i][state] % mod;
	if(state==1){
		a=fun(i-1,1)%mod; // Using vertical domino
		b=fun(i-2,1)%mod; // Using 2 horizontal domino
		c=fun(i-1,2)%mod; // Using tromino domino
		d=fun(i-1,3)%mod; // Using flipped tromino domino
		return dp[i][state]= (a+b+c+d)%mod;
	}
	else if(state==2){
		a=fun(i-2,1)%mod;
		b=fun(i-1,3)%mod;
		return dp[i][state]= (a+b)%mod;
	}
	else if(state == 3){
		a=fun(i-1,2)%mod;
		b=fun(i-2,1)%mod;
		return dp[i][state]= (a+b)%mod;
	}
	return  0;
}
int numTilings(int n) {
	memset(dp,-1,sizeof(dp));
	return fun(n-1,1) % mod;
}
};