#include <iostream>

using namespace std;

int main(void) {

	int matrix[10][10] = { };

	//  Declare pointer
    int *p;

    //  Make pointer point to the matrix
    p = &matrix[0][0];

    //  Outer loop → rows
    for(int i = 0; i < 10;i++)
    {
        //  Inner loop → columns
        for(int j = 0 ; j < 10;j++)
        {
            //  Store multiplication-table value using pointer
            *p = (i + 1) * (j + 1);

            //  Move pointer to next memory location
            p++;
        }
    }


	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}