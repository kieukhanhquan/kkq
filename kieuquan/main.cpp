#include <iostream>
using namespace std;
int countDigits(int number){
    int count=0;
    
    while(number!=0){
number=number/10;
count++;
}
return count;}
int main(){int number;
    cin>>number;
    cout<<countDigits(number);
    return 0;
    
}
