#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main()
{
	float a[10];
	string s;
	char k;
	float temp,total=0,h=0,efficiency,l=0;
	int i,j,n,u=1;
l1:	cout <<"enter the number of probabilities\n ";
	cin>>n;
cout<< "enter the symbols\n";
		for (i=0;i<n;i++)
	{
		cin >>s[i];
		
		}
			cout<<"enter the probabilities\n";
	for (i=0;i<n;i++)
	{
		cin >>a[i];
		
		}
		cout<< "u entered as follows\n";
			for (i=0;i<n;i++)
	{
		cout<<s[i];
		cout << "\t";
		cout << a[i];
		cout<<"\n";
		}
	//step1
	for(i=1;i<n;i++)
	{
		for(j=0;j<(n-i);j++)
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				k=s[j];
			s[j]=s[j+1];
			s[j+1]=k;
			}

	cout<<"after arranging the probabilities in descending order\n";
	cout <<"symbols\n";
	for(i=0;i<n;i++)
	{ //cout<<"symbols\n";
	cout <<"\n"<<s[i];
	//cout <<"\n";
	cout<<" \t"<<a[i];
	}
		for (i=0;i<n;i++)
		{
			total=total+a[i];
	/*	if (total>1)
	 cout <<"\nthe entered probabilities are invalid\n";
	 break;*/
		}

cout <<"\ntotal=";
cout<<total;
if (total>1)
{
	cout << "\nentered probabilities are not valid \n";	
	goto l1;
}
int c[]={00,01,10,110,1110,11110,111110,1111110,11111110};
int zipCode=0;
//int h1=2,h=5;
/*c[0]=h1&h;
cout << "\n"<<c[0];*/
/*if(n>=4)
{cout << "\n"<<setw(2) << setfill('0') << zipCode ;
int x=0;
cout<<"\n"<<setw(1)<<setfill('0')<< x<<"1";
}*/
 if (n==2)
{ int yc[2]={0,1};

for(i=0;i<n;i++)
{  //c[]={0,1};
//	cout<<"\n" <<s[i];
	//cout <<"\n";
//	cout<<" \t"<<a[i];
cout <<"\n"<<s[i]<<"\t"<<yc[i];
int length=1;
l=l+(a[i]*length);

h=h+a[i]*log2(1/a[i]);
	//cout<<"\n" <<s[i];
}
 cout<<"\n"<<"h="<<h<<"bits/sym";
 cout<<"\n"<<"L="<<l;
 	efficiency=(h/l)*100;
	cout <<"\n"<<"efficiency="<<efficiency<<"%";

}
else if (n==3)
{
	
	int x[3]={0,10,11};
    for (i=0;i<n;i++)
    {
    cout<<"\n"<<s[i]<<"\t"<<x[i];
    h=h+a[i]*log2(1/a[i]);
    }
    cout <<"\n"<<"H(s)="<<h<<"  bits/sym";
int length=1;
l=l+(a[0]*length);
for (i=1;i<n;i++)
{
	int length=2;
	l=l+(a[i]*length);
	
	}
	cout <<"\n"<<"L="<<l;
	efficiency=(h/l)*100;
	cout <<"\n"<<"efficiency="<<efficiency<<"%";
}

else if(n>=4)
{

	cout<<"\n"<<s[0] <<"\t"<<setw(2) << setfill('0') << zipCode ;
int x=0,length=2;
cout<<"\n"<<s[1]<<"\t"<<setw(1)<<setfill('0')<< x<<"1";
for (i=0;i<2;i++)
{
		l=l+(a[i]*length);
		h=h+(a[i]*log2(1/a[i]));
//	l=l+(a[1]*length);

}
if(n==4)
{
for (j=2;j<n-1;j++)
{
	int length =3;
	//cout<<"\n"<<c[i];
/*	if (i==n-1)
	{
	  c[i]=c[i]>>1;	
		
		}*/
		//cout <<"\n"<<s[j];
	//	cout <<"\t"<<a[j];
	cout<<"\n"<<s[j]<<"\t"<<c[j];
		l=l+(a[j]*length);
		h=h+(a[j]*log2(1/a[j]));
		}
	
cout<<"\n"<<s[3]<<"\t"<<setw(2)<<setfill('1')<<u<<"0";
//cout<<"\n"<<s[3]<<"\t"<<setw(2)<<setfill('1')<<u<<"1";
			cout <<"\n"<<"L="<<l;
			cout <<"\n"<<"H="<<h;
			efficiency=(h/l)*100;
			cout <<"\n"<<"efficiency="<<efficiency<<"%";
			
	}
		if (n==5)
		{
			for (i=0;i<2;i++)
{   int length=2;
		l=l+(a[i]*length);
		h=h+(a[i]*log2(1/a[i]));
//	l=l+(a[1]*length);

}
for (i=2;i<n-2;i++)
{ cout<<"\n"<<c[i];
}
for (j=2;j<n;j++)
{
	int length =4;

	cout<<"\n"<<c[j];
		l=l+(a[j]*length);
		h=h+(a[j]*log2(1/a[j]));
}
	cout<<"\n"<<setw(3)<<setfill('1')<<u<<"0";
cout<<"\n"<<setw(3)<<setfill('1')<<u<<"1";
cout <<"\n"<<"L="<<l;
			cout <<"\n"<<"H="<<h;
			efficiency=(h/l)*100;
			cout <<"\n"<<"efficiency="<<efficiency<<"%";
		}

if (n==6)
{
		for (i=0;i<3;i++)
{   int length=2;
		l=l+(a[i]*length);
		h=h+(a[i]*log2(1/a[i]));
//	l=l+(a[1]*length);
}
int length =3;
l=l+(a[3]*length);
h=h+(a[3]*log2(1/a[3]));
for (i=2;i<n-2;i++)
{ cout<<"\n"<<s[i]<<"\t"<<c[i];
}
for (i=4;i<n;i++)
{
	int length =4;
	l=l+(a[i]*length);
	h=h+(a[i]*log2(1/a[i]));
	
}	
	cout<<"\n"<<s[4]<<"\t"<<setw(3)<<setfill('1')<<u<<"0";
cout<<"\n"<<s[5]<<"\t"<<setw(3)<<setfill('1')<<u<<"1";
cout <<"\n"<<"L="<<l;
			cout <<"\n"<<"H="<<h;
			efficiency=(h/l)*100;
			cout <<"\n"<<"efficiency="<<efficiency<<"%";
	
}
if (n==7)
{
		for (i=0;i<3;i++)
{   int length=2;
		l=l+(a[i]*length);
		h=h+(a[i]*log2(1/a[i]));
//	l=l+(a[1]*length);
}
int length =3;
l=l+(a[3]*length);
h=h+(a[3]*log2(1/a[3]));
int lengt=4;
l=l+(a[4]*lengt);
h=h+(a[4]*log2(1/a[4]));


	for (i=2;i<n-2;i++)
	{
		cout<<"\n"<<c[i];
	}
	for (i=5;i<n;i++)
{
	int length =5;
	l=l+(a[i]*length);
	h=h+(a[i]*log2(1/a[i]));
	
}	
	cout<<"\n"<<setw(4)<<setfill('1')<<u<<"0";
cout<<"\n"<<setw(4)<<setfill('1')<<u<<"1";
cout <<"\n"<<"L="<<l;
			cout <<"\n"<<"H="<<h;
			efficiency=(h/l)*100;
			cout <<"\n"<<"efficiency="<<efficiency<<"%";
	
}
	if (n==8)
	{
		for (i=0;i<3;i++)
{   int length=2;
		l=l+(a[i]*length);
		h=h+(a[i]*log2(1/a[i]));
//	l=l+(a[1]*length);
}
int length =3;
l=l+(a[3]*length);
h=h+(a[3]*log2(1/a[3]));
int lengt=4;
l=l+(a[4]*lengt);
h=h+(a[4]*log2(1/a[4]));
int len=5;
l=l+(a[5]*len);
h=h+(a[5]*log2(1/a[5]));


		
	for (i=2;i<n-2;i++)
	{
		cout<<"\n"<<c[i];
	}
	for (i=6;i<n;i++)
{
	int length =6;
	l=l+(a[i]*length);
	h=h+(a[i]*log2(1/a[i]));
	
}	
		cout<<"\n"<<setw(5)<<setfill('1')<<u<<"0";
cout<<"\n"<<setw(5)<<setfill('1')<<u<<"1";
cout <<"\n"<<"L="<<l;
			cout <<"\n"<<"H="<<h;
			efficiency=(h/l)*100;
			cout <<"\n"<<"efficiency="<<efficiency<<"%";
	
		}
			}
}
		
