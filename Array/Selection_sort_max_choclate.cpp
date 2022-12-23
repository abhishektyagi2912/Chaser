#include<iostream>
using namespace std;

int countMaximum(int money,int price,int wrappers){
    int chocolate=money/price;
    //add chochlate with chochlate gain by wrappers
    chocolate+=(chocolate-1)/(wrappers-1);
    return chocolate;

}
    int main(){
        int money=15;
        int price =1;
        int wrappers=3;
        cout<<countMaximum(money,price,wrappers);
    
    return 0;
}