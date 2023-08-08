#include<iostream>


int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}


int c_or_p(int n , int r , char norp){
    int denominator = factorial(n-r);
    if(n<r){return 0;}
    if(norp == 'c'){
        return factorial(n)/(denominator*factorial(r));
    }
    if(norp == 'p'){
        return factorial(n)/denominator;
    }
    else{return 0;}
}


int main(){
    std::cout << c_or_p(5,4,'p');
    return 0;
}
