#include <iostream>
#include <vector>

using namespace std;

int main() {


	int n;

	cout << "Enter the number of elements: ";
	cin >> n;

	vector<int>nums(n);

	cout << "Enter the elements: ";
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	cout<<endl;
	// used to calculate the running sum
	for(int i=1;i<n;i++)
	{
		nums[i]=nums[i]+nums[i-1];
	}

	
	for(int i=0;i<n;i++)
	{
		cout<< nums[i]<<" ";
		
	}
	return 0;
}


