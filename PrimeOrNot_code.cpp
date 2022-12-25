#include<iostream>
using namespace std;

int main(){
    int x, isPrime=1;
    cout<<"Enter any number to check Prime or not: "<<endl;
    cin>>x;
    for (int i = 2; i < x; i++)
    {
        if(x%i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime){
        cout<<"\nThe number is prime"<<endl;
    }
    else{
        cout<<"\nThe number is not prime"<<endl;
    }
     
    return 0;
}