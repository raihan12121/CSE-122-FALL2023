
#include<iostream>
using namespace std;
int main(){

int x;
cin>>x;
if(x>0)
{
    cout<<"value is .positive"<<endl;
    if(x%2==0){

        cout<<"the value is even"<<endl;
        if(x>999 &x<10000){
            cout<<"x value contains 4.digits "<<endl;
        }
    }
}



return 0;
}
