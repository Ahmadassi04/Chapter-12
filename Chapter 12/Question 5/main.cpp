#include <iostream>

int sort2(int& x,int& y){

    if(x < y){
        return 0;
    }
    else{
    int swap1{x};
    swap1 = x;
    x = y;
    y = swap1;
    }
}

int main()
{
    int x { 7 };
    int y { 5 };

    std::cout << x << ' ' << y << '\n';

    sort2(x, y);
    std::cout << x << ' ' << y << '\n';

    sort2(x, y);
    std::cout << x << ' ' << y << '\n';

    return 0;
}
