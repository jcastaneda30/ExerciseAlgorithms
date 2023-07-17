#include<iostream>
using namespace std;

double Xa,Ya,Xb,Yb,Xc,Yc;
int main()
{
	cin>>Xa>>Ya;
	cin>>Xb>>Yb;
	cin>>Xc>>Yc;
	if((Ya-Yb)*(Xb-Xc) == (Yb-Yc)*(Xa-Xb))
	{
	    cout<<"TOWARDS";
	}
	else if((Ya-Yb)*(Xb-Xc) > (Yb-Yc)*(Xa-Xb))
	{
	    cout<<"RIGHT";
	}
	else if((Ya-Yb)*(Xb-Xc) < (Yb-Yc)*(Xa-Xb))
	{
	    cout<<"LEFT";
	}
}