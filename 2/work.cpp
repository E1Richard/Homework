#include <bits/stdc++.h>
using namespace std;
string str0 = "add";
string str1 = "minus";
string str2 = "multiply";
string str3 = "divide";

int main()
{
    double a,b;
    string strr,strme ;
    cin>>strr>>strme;
    cin>>a>>b;
    if(int(strme.find(str0))>=0){cout<<a+b<<endl;
    }
    if(int(strme.find(str1))>=0){cout<<a-b<<endl;
    }
    if(int(strme.find(str2))>=0){cout<<a*b<<endl;
    }
    if(int(strme.find(str3))>=0){cout<<a/b<<endl;
    }
    system("pause");//使用控制台时可以保证不掉线
    return 0;
}