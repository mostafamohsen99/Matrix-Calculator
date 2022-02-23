/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
int row(string s)
{
    int count=0;
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (s[i] == ';')
			count += 1;
	}
	return count+1;
}
int col(string s)
{
    int count=0;
    int	m = s.find(";");
	for (int i = 0; i< m; i++)
	{
		if (s[i] == ' ')
			count+= 1;
	}
	return count+1;
    
}
int main()
{
    int n=0;
    int nn=0;
    int o=0;
    int oo=0;
    int flag=1;
    int flag1=1;
    int p=0;
    int pp=0;
	int a = 0;
	int aa=0;
	int b = 0;
	int bb=0;
	float v = 0;
	float vv=0;
	int count1 = 0;
	int count11=0;
	int count2 = 0;
	int count22=0;
	int count3 = 1;
	int count33=1;
	int count4=0;
	int count44=0;
	string str1;
	string str2;
	string str3;
	string reall = "";
	string reall1="";
	string imagg = "";
	string imagg1="";
	float real[100][100];
	float imag[100][100];
	float real1[100][100];
	float imag1[100][100];
	float sum[100][100];
	float sum1[100][100];
	getline(cin, str1);
	n =row(str1);
	o = col(str1);
	for (int i = 1; i < str1.length(); i++)
	{
	    flag=1;
	    if(str1[1]=='-'&&p==0)
	    {
	        flag=0;
	        reall=str1[1];
	        p++;
	    }
	    if(str1[i]=='-'&&str1[i-1]==' ')
	    {
	        flag=0;
	        reall=str1[i];
	    }
	    if(str1[i]=='-'&&str1[i-1]==';')
	    {
	        flag=0;
	        reall=str1[i];
	    }
		if (count3 == 1 && str1[i] != '+'&&str1[i] != '-'&&str1[i] != ';')
		{
			reall += str1[i];
		}
		if ((str1[i] == '+' || str1[i] == '-')&&count3 == 1&&flag==1)
		{
			v = atof(reall.c_str());
			real[a][b] = v;
			reall = "";
			count3 = 0;
		}
		flag=1;
		if (count3 == 0 && str1[i] != 'i')
		{
			imagg += str1[i];
		}
		if (str1[i] == 'i'&&count3 == 0)
		{
			v = atof(imagg.c_str());
			imag[a][b] = v;
			imagg = "";
			count3 = 1;

		}
		if (str1[i] == ' ')
		{
			count3 = 1;
			b++;
			
		}
		if (str1[i] == ';')
		{
		    count3=1;
			b = 0;
			a++;
		}
		if (str1[i] == ']')
			count3 == 2;
	}
	
	
/*	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<o;j++)
	    {
	        cout<<real[i][j]<<"+"<<imag[i][j]<<"i";
	        cout<<" ";
	    }
	}
	*/
	getline(cin,str2);
	if(str2[0]=='+')
	{
	    
	    getline(cin,str3);
	    	nn =row(str3);
	oo= col(str3);
	
	if((nn!=n)||(oo!=o))
	{
	cout<<"ERROR";
	}
		for (int i = 1; i < str3.length(); i++)
	{
	    if(nn!=n||oo!=o)
	   break;
	    flag1=1;
	    if(str3[1]=='-'&&pp==0)
	    {
	        flag1=0;
	        reall1=str3[1];
	        pp++;
	    }
	    if(str3[i]=='-'&&str3[i-1]==' ')
	    {
	        flag1=0;
	        reall1=str3[i];
	    }
	    if(str3[i]=='-'&&str3[i-1]==';')
	    {
	        flag1=0;
	        reall1=str3[i];
	    }
		if (count33 == 1 && str3[i] != '+'&&str3[i] != '-'&&str3[i] != ';')
		{
			reall1 += str3[i];
		}
		if ((str3[i] == '+' || str3[i] == '-')&&count33 == 1&&flag1==1)
		{
			vv = atof(reall1.c_str());
			real1[aa][bb] = vv;
			reall1 = "";
			count33 = 0;
		}
		flag1=1;
		if (count33== 0 && str3[i] != 'i')
		{
			imagg1 += str3[i];
		}
		if (str3[i] == 'i'&&count33 == 0)
		{
			vv= atof(imagg1.c_str());
			imag1[aa][bb] = vv;
			imagg1 = "";
			count33 = 1;

		}
		if (str3[i] == ' ')
		{
			count33 = 1;
			bb++;
			
		}
		if (str3[i] == ';')
		{
		    count33=1;
			bb= 0;
			aa++;
		}
		if (str3[i] == ']')
			count33 == 2;
	}
	/*
	for(int i=0;i<nn;i++)
	{
	    for(int j=0;j<oo;j++)
	    {
	        cout<<real1[i][j]<<"+"<<imag1[i][j];
	    }
	}
	}
}
*/
	for(int i=0;i<n;i++)
	{
	    if((n!=nn)||(o!=oo))
	    break;
	    for(int j=0;j<o;j++)
	    {
	        sum[i][j]=imag[i][j]+imag1[i][j];
	        sum1[i][j]=real[i][j]+real1[i][j];
	    }
	}
	 if((n==nn)&&(o==oo))
	cout<<"[";
	for(int i=0;i<n;i++)
	{
	    if((n!=nn)||(o!=oo))
	    break;
	    for(int j=0;j<o;j++)
	    {
	   
	       if(sum1[i][j]>0&&sum[i][j]>0)
	       cout<<sum1[i][j]<<"+"<<sum[i][j]<<"i";
	       if(sum1[i][j]>0&&sum[i][j]<0)
	       cout<<sum1[i][j]<<"-"<<(sum[i][j]*-1)<<"i";
	       if(sum1[i][j]<0&&sum[i][j]>0)
	       cout<<sum1[i][j]<<"+"<<sum[i][j]<<"i";
	       if(sum1[i][j]<0&&sum[i][j]<0)
	       cout<<sum1[i][j]<<"-"<<(sum[i][j]*-1)<<"i";
	       if(sum1[i][j]==0&&sum[i][j]>0)
	       cout<<sum[i][j]<<"i";
	       if(sum1[i][j]==0&&sum[i][j]<0)
	       cout<<sum[i][j]<<"i";
	       if(sum1[i][j]>0&&sum[i][j]==0)
	           cout<<sum1[i][j];
	   if(sum1[i][j]<0&&sum[i][j]==0)
	   cout<<sum1[i][j];
	   if(sum1[i][j]==0&&sum[i][j]==0)
	   cout<<sum[i][j]<<"+"<<sum1[i][j]<<"i";
	   
	       
	       
	        if(j<o-1)
	           cout<<" ";
	    }
	    if(i<n-1)
	       cout<<";";
	}
	 if((n==nn)&&(o==oo))
	cout<<"]";
	
}
}
