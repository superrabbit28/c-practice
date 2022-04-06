#include<iostream>
using namespace std;

int main()
{   
    long long int world,us;
    float a;
    cout<<"Enter thr world's population:";
    cin>>world;
    cout<<"Enter thr us's population:";
    cin>>us;
    a=100*float(us)/float(world);
    cout<<"the popllation of the is "<<a<<"% of the world"<<endl;
    
	return 0;
}

