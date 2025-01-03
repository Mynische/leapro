#include <iostream>

//void walk(int steps);

/*int main()
{
    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single steps
    
    // (iterative vs recursive)

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower


    walk(100);

    return 0;
}
*/
/*void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step!\n";
    }
    

    if(steps > 0){
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}
*/


int factorial(int num);

int main(){

    std::cout << factorial(4) << '\n';

    return 0;
}
int factorial(int num){
    /*    int result = 1;                   (Iterative approach)
        for(int i = 1; i <=num; i++){
            result *= i; 
        }
        return result;
    */
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}