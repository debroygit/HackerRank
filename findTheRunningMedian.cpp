#include <cmath>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

bool compare ( int &first, int &second)
{
	return first < second;
}

int main(){
    int n;
	double input;
    cin >> n;
    vector<double> arr;
	vector<double> out;
	cout << endl;
	
    for(int a_i = 0;a_i < n;a_i++){
       cin >> input;
	   arr.push_back(input);
	   sort (arr.begin(), arr.end());
	   
	   int index = arr.size();
	   index--;
	   
	   if ( index%2 == 0 )
		   out.push_back (arr[index/2]);
	   else
		   out.push_back ((arr[index/2] + arr[index/2+1])/2);
    }
	
	for (std::vector<double>::iterator it=out.begin(); it!=out.end(); ++it)
		cout << fixed << setprecision(1) << *it << '\n';
	
	return 0;
}
