// Function Declaration and Definition

#include <iostream>

int max(int a, int b); // Function declaration , prototype
                        // Signature doesn't include return type
int min(int a, int b);

int inc_mult( int a, int b);

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

    int x {5};
    int y{12};

    int result = min(x,y);
    std::cout << "min : " << result << std::endl;

    result =inc_mult(x,y);
    std::cout << "result : " << result << std::endl;

    return 0;

}

//Function definition. Shows up after main 
int max(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}


//Function definition. Shows up after main 
int min(int a, int b){
    if(a < b)
        return a;
    else
        return b;
}

int inc_mult( int a, int b){
    return ( (++a)*(++b));
}