#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x=0;
	float y=0.0;
	
	cin>>x>>y;
	if(x%5==0 && x+0.5<y){
	    cout<<y-(x+0.5)<<endl;
	}else{
	    cout<<y<<endl;
	}
	return 0;
}

