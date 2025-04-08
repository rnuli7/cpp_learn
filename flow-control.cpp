#include<iostream>  

int main() {
    int count = 0, val = 0; 
    while (count<=100){
        std::cout << "The count is at " << count << std::endl;
        val += count;  
        ++count; 
    } 

    std::cout << "The sum is " << val << std::endl; 
} 