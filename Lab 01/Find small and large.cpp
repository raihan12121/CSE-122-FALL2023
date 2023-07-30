
#include<iostream>
using namespace std;
int  main(){
int a,b,c;
cin>>a>>b>>c;
if(a>b && a>c)
{
    cout<<"large=a";
    cout<<endl;
}
else if(a<b && b>c){



    cout<<"Large=b";
    cout<<endl;
}
else if (a<c && b<c){


    cout<<"large=c";
    cout<<endl;
}
else
{
    cout<<"invalid or equal";
}


return 0;
}
