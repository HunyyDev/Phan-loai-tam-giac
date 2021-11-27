#include <iostream>
#include <cmath>
#include <string>
//https://khmt.uit.edu.vn/wecode/truonganpn/assignment/30/123


using namespace std;

long long a,b,c;
string ans="";

int main()
{

    cin>>a>>b>>c;
    if (a+b>c && a+c>b && b+c>a) {
        if (a==b && b==c) {
            cout<<"DEU";
            return 0;
        }
        if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) {
            ans="VUONG ";
        }
        else {
            if (a*a+b*b < c*c || a*a+c*c < b*b || b*b+c*c < a*a) {
                ans="TU ";
            }
            else {
                ans="NHON ";
            }
        }
        if (a==b || b==c || c==a) {
            if (ans != "NHON ") {
                ans=ans + "CAN";
            } else ans="CAN";
        }
    }
    else ans="KHONG PHAI TAM GIAC";
    cout<<ans;
    return 0;
}
