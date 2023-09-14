//---------------5- K Shape Character Pattern 
#include<iostream>
using namespace std;
int main()
{
	 int n=6;
	 char m=65;

	for(int i=n;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			cout<<char(m+j);
		}
		cout<<endl;
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<char(m+j);
		}
		cout<<endl;
	}
}
/*
A B C D E F
A B C D E
A B C D
A B C
A B
A
A
A B
A B C
A B C D
A B C D E
A B C D E F

//---------------4- Sandglass Star Pattern

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		 for(int j=n;j>=i;j--){
                cout<<"* ";
            }
//            for(int j=n;j>i;j--){
//                cout<<"*";
//            }
		cout<<endl;
		}
		for(int i=n;i>=0;i--)
	   {
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		 for(int j=n;j>=i;j--){
                cout<<"* ";
            }
//            for(int j=n;j>i;j--){
//                cout<<"*";
//            }
		cout<<endl;
	}
}
//output
/*
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *
/*
//---------3- Diamond star pattern

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		 for(int j=n;j>=i;j--){
                cout<<"*";
            }
            for(int j=n;j>i;j--){
                cout<<"*";
            }
		cout<<endl;
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		 for(int j=n;j>=i;j--){
                cout<<"*";
            }
            for(int j=n;j>i;j--){
                cout<<"*";
            }
		cout<<endl;
		}
}
/*
//output

         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
/*
// 2- Hollow Square pattern

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int k=0;k<=n;k++)
		{
			if(i==0 || k==0 || i==n || k==n )
			    cout<<"*";
			else 
		       {
			    cout<<" ";
	          	}
		}
		 cout<<endl;
	}
}

// output
/*
*****
*   *
*   *
*   *
*****




/*


//------------1- Square pattern
   
   
   
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int k=0;k<=n;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
//output
/*
*****
*****
*****
***** 
*****
*/
