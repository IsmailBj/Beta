#include <iostream>
using namespace std;

int main(){
int no,count;
int Bit[20];
float yes;
    cin>>yes;
    count=0;
    yes=yes/2;
    no=yes;
        while(yes>0){
            if(yes>no){
                Bit[count] = 1;
            }else if(yes==no){
                Bit[count] = 0;
            }else{
                cout<<"Error 303 :(";
            }
 
            yes=no;
            yes=yes/2;
            no=yes;
            count++;
        }

    count--;
    cout<<"-----OUTPUT-----"<<endl;
    for(count;count>=0;count--){
        cout<<Bit[count];
    }
    cout<<endl;
 system("pause");
 return 0;
}
