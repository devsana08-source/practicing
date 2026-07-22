#include <iostream>

int main()
{
	int inputDivisor1, inputDivisor2;

	std::cout << "Input first divisor:";
	std::cin >> inputDivisor1;
	
	//if division by zero condition fail exit
	if (inputDivisor1 == 0)
	    return -1;
	    
	//type casting using static_cast:  1/2=0  but 1/2.0=0.2     this casting change the value 
	float result1 = 1 / static_cast<float>(inputDivisor1);

	std::cout << "Input second divisor:";
	std::cin >> inputDivisor2;
	
	if (inputDivisor2 == 0)
		return -1;

	//type casting  here also alo different casting can be used
	float result2 = 1 / static_cast<float>(inputDivisor2);
	
	float diff = result1 - result2; //finding difference

	float diffabs = diff < 0 ? -diff : diff;  //finding absolute difference using ternary operator
    // aslo convert negative to positive eg:-2.5 = 2.5

	const float epsilon_diff = 0.00001;// small difference is acceptable 
	
	if (diffabs <= epsilon_diff)
    
		std::cout << std::endl << "Results are equal (by 0.000001 epsilon)" << std::endl;
	else
		std::cout << std::endl << "Results are not equal (by 0.000001 epsilon)" << std::endl;


	return 0;
}