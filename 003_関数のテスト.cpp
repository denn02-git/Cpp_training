#include <iostream>

void SayHelloWorld ()
{
	std::cout << "Hello Wolrd" << std::endl;
}

int main(void)
{
	int i = 0;
	
	for(i=0;i<=10;i++) 
    {
        SayHelloWorld();
    }     
	
}