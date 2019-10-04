#include <iostream>

int main(){

    int a,b,min;

    std::cin >> a >> b;

    if(a >= b) {
        min = b;
    }
    else {
        min = a;
    }

    for(int i = min; i >= 0; i--){
        if(a % i == 0 && b % i == 0){
            std::cout << i << std::endl;
            break;
        }
    }
    return 0;
}
