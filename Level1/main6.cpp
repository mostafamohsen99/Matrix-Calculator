/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string.h>
#include<sstream>
#include<cstdlib>
using namespace std;

int main()
{
        
    float ar1[100][100];
    float ar2[100][100];
    float sum[100][100];
    float difference[100][100];
    float product [100][100];
    string str1;
    string str2;
    string str3;
    string str4;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int s=1,a=0,b=0,t=0,m=0;
    int mm=0, ss=1,aa=0, bb=0,tt=0;
    string number1,number2;
    float v=0;
    float vv=0;
    float summ=0;
    getline(cin,str1);
    for(int i=0;i<str1.length()-1;i++)
    {
        if(str1[i]==';')
        count1+=1;
    }
         m=str1.find(";");
        for(int j=0; j<m;j++)
        {
            if(str1[j]==' ')
            count2+=1;
        }
    int n=count1+1;// no of rows
    int o=count2+1;// no of columns
 int q=str1.find('}');
 for(int i=0;i<q;i++)
 {
      if(str1[i]!=' '&&str1[i]!='{'&&str1[i]!=';')
      s+=1;
     if(str1[i]==' '||str1[i]=='{'||str1[i]==';')
     {
         t=i;
     number1=str1.substr(t+1,s);
            cout <<" ";
       v=atof(number1.c_str());
       ar1[a][b]=v;
       if(str1[i]==';')
       {
           a+=1;
           b=0;
           ar1[a][b]=v;
       }
       b+=1;
       s=0;
       }
       

      }
      getline(cin,str4);
      if(str4[0]=='+')
    {
         getline(cin,str2);
    for(int i=0;i<str2.length()-1;i++)
    {
        if(str2[i]==';')
        count3+=1;
    }
         mm=str1.find(";");
        for(int j=0; j<m;j++)
        {
            if(str2[j]==' ')
            count4+=1;
        }
    int nn=count3+1;// no of rows
    int oo=count4+1;// no of columns
 int qq=str2.find('}');
 for(int i=0;i<qq;i++)
 {
          if(nn!=oo)
    break;
    if(nn!=n||oo!=o)
    break;
      if(str2[i]!=' '&&str2[i]!='{'&&str2[i]!=';')
      ss+=1;
     if(str2[i]==' '||str2[i]=='{'||str2[i]==';')
     {
         tt=i;
     number2=str2.substr(tt+1,ss);
         
            cout <<" ";
       vv=atof(number2.c_str());
       ar2[aa][bb]=vv;
       if(str2[i]==';')
       {
           aa+=1;
           bb=0;
           ar2[aa][bb]=vv;
       }
       bb+=1;
       ss=0;
     }
       

      }
      for(int i=0;i<nn;i++)
      {
          for(int j=0;j<oo;j++)
          {
              sum[i][j]=ar1[i][j]+ar2[i][j];
          }
      }
      for(int i=0;i<nn;i++)
      {
      for(int j=0;j<oo;j++)
      {
          cout << sum[i][j];
          cout <<" ";
      }
     }
    }
    if(str4[0]=='-')
     {
         getline(cin,str2);
    for(int i=0;i<str2.length()-1;i++)
    {
        if(str2[i]==';')
        count3+=1;
    }
         mm=str1.find(";");
        for(int j=0; j<m;j++)
        {
            if(str2[j]==' ')
            count4+=1;
        }
    int nn=count3+1;// no of rows
    int oo=count4+1;// no of columns
 int qq=str2.find('}');
 for(int i=0;i<qq;i++)
 {
          if(nn!=oo)
    break;
    if(nn!=n||oo!=o)
    break;
      if(str2[i]!=' '&&str2[i]!='{'&&str2[i]!=';')
      ss+=1;
     if(str2[i]==' '||str2[i]=='{'||str2[i]==';')
     {
         tt=i;
     number2=str2.substr(tt+1,ss);
         
            cout <<" ";
       vv=atof(number2.c_str());
       ar2[aa][bb]=vv;
       if(str2[i]==';')
       {
           aa+=1;
           bb=0;
           ar2[aa][bb]=vv;
       }
       bb+=1;
       ss=0;
     }
       

      }
      for(int i=0;i<nn;i++)
      {
          for(int j=0;j<oo;j++)
          {
              difference[i][j]=ar1[i][j]-ar2[i][j];
          }
      }
      for(int i=0;i<nn;i++)
      {
      for(int j=0;j<oo;j++)
      {
          cout << difference[i][j];
          cout <<" ";
      }
     }
    }
      if(str4[0]=='*')
     {
         getline(cin,str2);
    for(int i=0;i<str2.length()-1;i++)
    {
        if(str2[i]==';')
        count3+=1;
    }
         mm=str1.find(";");
        for(int j=0; j<m;j++)
        {
            if(str2[j]==' ')
            count4+=1;
        }
    int nn=count3+1;// no of rows
    int oo=count4+1;// no of columns
 int qq=str2.find('}');
 for(int i=0;i<qq;i++)
 {
          if(nn!=o)
          break;
      if(str2[i]!=' '&&str2[i]!='{'&&str2[i]!=';')
      ss+=1;
     if(str2[i]==' '||str2[i]=='{'||str2[i]==';')
     {
         tt=i;
     number2=str2.substr(tt+1,ss);
         
            cout <<" ";
       vv=atof(number2.c_str());
       ar2[aa][bb]=vv;
       if(str2[i]==';')
       {
           aa+=1;
           bb=0;
           ar2[aa][bb]=vv;
       }
       bb+=1;
       ss=0;
     }
       

      }
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<oo;j++)
          { summ=0;
           for(int k=0;k<n;k++)
           {
               summ=summ+ar1[i][k]*ar2[k][j];
           }
           product[i][j]=summ;
          }
      }
      for(int i=0;i<n;i++)
      {
      for(int j=0;j<oo;j++)
      {
          cout << product[i][j];
          cout <<" ";
      }
     }
    }
    
return 0;
}
