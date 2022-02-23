/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
 #include<string.h>
#include<cstdlib>
using namespace std;
    float determ(float a[100][100], int n) {
    	float det = 0;
     	int c,h,k,i,j;
     	int s=1;
     	float array[100][100];
   	if (n == 1) {
   		return a[0][0];
    	}
   	else if (n == 2) {
   		det = (a[0][0] * a[1][1] - a[0][1] * a[1][0]);
   		return det;
   	}
   	else {
   		for (c = 0; c < n; c++) {
   			h = 0;
   			k = 0;
   			for (i = 0; i < n; i++) {
   				for (j = 0; j < n; j++) {
   				    array[h][k] =0;
   					if (j!=c&&i!=0) 
   					{
   					    array[h][k]=a[i][j];
   					k++;
   					if (k == n - 1) 
   					{
   						h++;
   						k = 0;
   					}
   					}
   				}
   			}
   			det = det + a[0][c] *s*determ(array, n - 1);
   			s*=-1;
  		}
   		return det;
   	}
   }
   void inv(float a[100][100],float inverse[100][100],int n,int y)
{
    float det;
    float array[100][100];
    float inver[100][100];
    int m;
    int k=0;
    int l=0;
    int s=1;
    if(n==1) 
    cout<<"ERROR";
if(n==2)
{
    det=determ(a,n);
m=a[0][0];
a[0][0]=a[1][1];
a[1][1]=m;
a[0][1]*=-1;
a[1][0]*=-1;

    for(int i=0;i<2;i++)
    {
        if(det==0)
        {
            cout<<"ERROR";
            break;
        }
        for(int j=0;j<2;j++)
        {
             inverse[i][j]=(1/det)*a[i][j];
        }
    }
    if(y==1)
    {
    cout<<"[";
    for(int i=0;i<2;i++)
    {
        if(det==0)
        break;
        for(int j=0;j<2;j++)
        {
            cout<<inverse[i][j];
            if(j<1)
            cout<<" ";
        }
        if(i<1)
        cout<<";";
    }
    cout<<"]";
    }
    
}
else{
    det=determ(a,n);
    for(int x=0;x<n;x++)
    {
        if(det==0)
        {
            cout<<"ERROR";
            break;
        }
        
    for(int c=0;c<n;c++)
    {
        k=0;
        l=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                array[i][j]=0;
                if(i!=x&&j!=c)
                {
                   array[k][l]=a[i][j];
                   	l++;
   					if (l == n - 1) 
   					{
   						k++;
   						l = 0;
   					}
   					}
   				}
                }
                inver[x][c]=s*determ(array,n-1);
                
                s*=-1;
    }
    }
   for(int d=0;d<n;d++)
    {
        if(det==0)
        break;
        for(int e=0;e<n;e++)
        {
            inverse[e][d]=inver[d][e];
        }
    }
    if(det!=0&&y==1)
cout<<"[";
for(int i=0;i<n;i++)
{
    if(det==0)
    break;
    for(int j=0;j<n;j++)
    {
        cout<<(1/det)*inverse[i][j];
        if(j<n-1)
        cout<<" ";
    }
    if(i<n-1)
    cout<<";";
}
if(det!=0)
cout<<"]";
}
}
void mult(float a[100][100],float b[100][100],int n,int o,float multi[100][100])
{
    float sum2=0;
    for(int i=0;i<n;i++)
    {
          for(int j=0;j<o;j++)
           { sum2=0;
           for(int k=0;k<o;k++)
           {
               sum2=sum2+a[i][k]*b[k][j];
            }
            multi[i][j]=sum2;
            }
       }
       cout <<"[";
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<o;j++)
       {
            cout << multi[i][j];
            if(j<o-1)
            cout <<" ";
       }
        if(i<n-1)
        cout<<";";
       }
       cout <<"]";
}
 void div(float a[100][100],int n,int o,float b[100][100],int nn,int oo,float divis[100][100]) 
 {
     int y=0;
     float array[100][100];
     float multiplication[100][100];
     inv(b,array,n,y);
     mult(a,array,n,n,multiplication);
     
     
     
 }
    int main()
   {
   	float det = 0;
   	float summm=0;
   	string str1;
   	int count1;
   	int count11;
   	int spaces=0;
   	int spacess=0;
   	int m=0;
   	int mm=0;
   	int x = 0;
   	int count2;
   	int count22;
   	string number = "";
   	string numberr="";
   	int count3;
   	int count33;
   	int a = 0;
   	int aa=0;
   	int b = 0;
   	int bb=0;
   	float v = 0;
   	float vv=0;
   	float ar1[100][100];
   	float ar2[100][100];
   	float product[100][100];
   	float product1[100][100];
   	float power[100][100];
   	float inverse[100][100];
   	float division[100][100];
   	string str2;
   	string str3;
    	getline(cin, str1);
   	float summ;
    	for (int i = 0; i < str1.length() - 1; i++)
   	{
   		if (str1[i] == ';')
   			count1 += 1;
   	}
   	m = str1.find(";");
   	for (int j = 0; j < m; j++)
   	{
   		if (str1[j] == ' ')
  			count2 += 1;
   	}
   	int myflag=1;
   	for(int k=m+1;k<str1.length();k++)
   	{
   	    if(str1[k]==' ')
   	    {
   	         spaces+=1;
   	    }
   	   if(str1[k]==';'||str1[k]==']')
   	   {
   	       if(spaces!=count2)
   	       {
   	          myflag=0;
   	          break;
   	       }
   	       spaces=0;
   	   }
   	 
   	}
   	int n = count1 + 1;// no of rows
   	int o = count2 + 1;// no of columns
   	int q = str1.find(']');
   	for (int i = 1; i <= q; i++)
  	{
  		if (str1[i] != ' '&&str1[i] != ';'&&str1[i] != ']')
  			number += str1[i];
  		if (str1[i] == ' ' || str1[i] == ';' || str1[i] == ']')
  		{
  			if (count3 >= o)
  			{
  				a += 1;
  				b = 0;
  				count3 = 0;
  			}
  			v = atof(number.c_str());
  			ar1[a][b] = v;
  			number = "";
  			b += 1;
  			count3 += 1;
  		}
   	}
   	/*
   	cout<<"[";
   	for(int i=0;i<n;i++)
  	{
  	for(int j=0;j<o;j++)
  	{
  		cout<<ar1[i][j];
  		if(j<o-1)
  		cout<<" ";
  	}
   	if(i<n-1)
  	cout<<";";
  	}
  	cout<<"]";
     }
  	*/
   	getline(cin, str2);
  	if (str2[0] == 'T')
  	{
  	    if(myflag==0)
   	    cout<<"ERROR";
   		for (int i = 1; i <= q; i++)
  		{
  		    if(myflag==0)
  		    break;
  			if (str1[i] != ' '&&str1[i] != ';'&&str1[i] != ']')
  				number += str1[i];
  			if (str1[i] == ' ' || str1[i] == ';' || str1[i] == ']')
  			{
  				if (count3 == n)
  			{
  					a += 1;
  					b = 0;
  					count3 = 0;
  				}
  				v = atof(number.c_str());
  				ar1[b][a] = v;
  
  				number = "";
  				b += 1;
  				count3 += 1;
  			}
  		}
  		if(myflag==1)
  		cout << "[";
  for (int i = 0; i < o; i++)
  		{
  		    if(myflag==0)
  		    break;
  			for (int j = 0; j < n; j++)
  			{
  				cout << ar1[j][i];
  				if (j < n - 1)
  					cout << " ";
  			}
  			if (i < o - 1)
  				cout << ";";
  		}
  		if(myflag==1)
  		cout << "]";
  	}
  
  	if (str2[0] == '^')
  	{
  		cin >> x;
  		if (n != o)
  			cout << "ERROR";
  		for (int i = 0; i < n; i++)
  		{
  			for (int j = 0; j < o; j++)
  			{
   				ar2[i][j] = ar1[i][j];
  			}
  		}
  		/*
  				  for(int i=0;i<n;i++)
  				  {
  				  for(int j=0;j<o;j++)
  				  {
  					  cout<<ar2[i][j];
   				  }
  			  }
  			  }
		  return 0;
  			  }
  		  */
  		for (int i = 0; i < n; i++)
  		{
  			if (n != o)
  				break;
  			for (int j = 0; j < o; j++)
  			{
  				summ = 0;
  				for (int k = 0; k < o; k++)
  				{
  					summ = summ + ar1[i][k] * ar2[k][j];
  				}
  				product[i][j] = summ;
  			}
  		}
  
  /*	
  			   for(int i=0;i<n;i++)
  			  {
  				  for(int j=0;j<o;j++)
  				  {
  					  cout<<product[i][j];
  				  }
  				}
  		  }
  	}
  	 */
  		for (int l = 1; l<=x-2; l++)
  		{
  		    
  			if (n != o)
  				break;
  			if (x == 2)
  				break;
  				if(l%2!=0)
  				{
  			for (int i = 0; i < n; i++)
  			{
  				for (int j = 0; j < n; j++)
  				{
  				    summm=0;
  					for (int k = 0; k < n; k++)
  					{
  					    product1[i][j]=product[i][j];
  						summm+= product[i][k] * ar1[k][j];
  					}
  					product[i][j]=summm;
  					power[i][j]=product[i][j];
  					product[i][j]=product1[i][j];
   				}
   			}
  				}
  				else{
  				    			for (int i = 0; i < n; i++)
   			{
   				for (int j = 0; j < n; j++)
   				{
  			    summm=0;
  					for (int k = 0; k < n; k++)
  					{
  					    product1[i][j]=power[i][j];
  						summm+= power[i][k] * ar1[k][j];
  					}
  					power[i][j]=summm;
  					product[i][j]=power[i][j];
  					power[i][j]=product1[i][j];
   				}
  		}
  				}
  		}
  		if (n == o)
   			cout << "[";
  		for (int i = 0; i < n; i++)
  		{
  			if (n != o||x%2==0)
  				break;
  			for (int j = 0; j < o; j++)
  			{
  				cout << power[i][j];
   				if (j < o - 1)
   					cout << " ";
  			}
  			if (i < n - 1)
  				cout << ";";
  		}
  				for (int i = 0; i < n; i++)
  		{
   			if (n != o||x%2!=0)
  				break;
   			for (int j = 0; j < o; j++)
  			{
  				cout << product[i][j];
   				if (j < o - 1)
 					cout << " ";
  			}
  			if (i < n - 1)
  				cout << ";";
  		}
  		if (n == o)
  			cout << "]";
  		}
  	if (str2[0] == 'D')
  	{
  		if (n != o)
  			cout << "ERROR";
  		if (n == o)
   			cout << determ(ar1, n);
  	}
  	if(str2[0]=='I')
  	{
  	    int y=1;
  	    if(n!=o)
  	    cout<<"ERROR";
  	    else
  	    inv(ar1,inverse,n,y);
  	}
  	if(str2[0]=='/')
  	{
  	    getline(cin,str3);
  	        	for (int i = 0; i < str3.length() - 1; i++)
   	{
   		if (str3[i] == ';')
   			count11 += 1;
   	}
   	mm= str1.find(";");
   	for (int j = 0; j < mm; j++)
   	{
   		if (str3[j] == ' ')
  			count22 += 1;
   	}
   	int myflag1=1;
   	for(int k=mm+1;k<str3.length();k++)
   	{
   	    if(str3[k]==' ')
   	    {
   	         spacess+=1;
   	    }
   	   if(str3[k]==';'||str3[k]==']')
   	   {
   	       if(spacess!=count22)
   	       {
   	          myflag1=0;
   	          break;
   	       }
   	       spacess=0;
   	   }
   	 
   	}
   	int nn = count1 + 1;// no of rows
   	int oo = count2 + 1;// no of columns
   	int qq = str3.find(']');
   	for (int i = 1; i <= qq; i++)
  	{
  		if (str3[i] != ' '&&str3[i] != ';'&&str3[i] != ']')
  			numberr += str3[i];
  		if (str3[i] == ' ' || str3[i] == ';' || str3[i] == ']')
  		{
  			if (count33 >= oo)
  			{
  				aa += 1;
  				bb = 0;
  				count33 = 0;
  			}
  			vv = atof(numberr.c_str());
  			ar2[aa][bb] = vv;
  			number = "";
  			bb+= 1;
  			count33+= 1;
  		}
   	}
   	if(nn!=o)
   	cout<<"ERROR";
   
   	else
   	div(ar1,n,o,ar2,nn,oo,division,);
   }
   }
