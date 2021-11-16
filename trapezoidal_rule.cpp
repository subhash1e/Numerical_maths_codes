#include<bits/stdc++.h>
using namespace std;
#define func(x) sin((x));
#define pi 3.14



int main(){
	double lo = 0, hi=pi;


	
	double n=10,h=0.2,ans=0;


	{
		//trapezoidal rule
		ans=func(lo)+func(hi);
		for (double i = lo; i <= hi ; i+=h){
			ans += 2*func(i) ;
		}
		ans /=2;
		ans *= h;
	}

	cout << fixed << ans << endl; 

	return 0;
}