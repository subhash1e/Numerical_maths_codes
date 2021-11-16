#include<bits/stdc++.h>
using namespace std;
#define func(x) sin((x));
#define pi 3.14



int main(){
	// ans  = integrate func(x) from lo to hi
	
	double lo = 0, hi=pi;
	
	double h=0.2,ans=0;//h is X1 - X0,x2-x1,x3-x2 


	{
		//trapezoidal rule
		ans=func(lo)+func(hi);
		for (double i = lo; i <= hi ; i+=h){
			ans += 2*func(i) ;
		}
		ans /=2;
		ans *= h;
	}

	//fixed is for ans to be in simple digit form , optional
	cout << fixed << ans ; 
	//1.997467 [Finished in 1.1s]

	return 0;
}
