#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
	{int a[10], max, order;
	ifstream infile("f1.dat",ios::in);
	if(!infile)
		{cerr<<"open error!"<<endl;
		exit(1);
		}
	for(int i=0;i<10;i++)
		{infile>>a[i];
		cout<<a[i]<<" ";}
	cout<<endl;
	max=a[0];
	order=0;
	for(int i=0;i<10;i++)
		if(a[i]>max)
			{max=a[i];
			order=i;
			}
	cout<<"max="<<max<<endl<<"order="<<order<<endl;
	infile.close();
	return 0;
	}
