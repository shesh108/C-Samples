// VectorSample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int GetVectorSuM(vector<int> _vector)
{
    cout << "Index-based loop for Vector" << endl;
	int sum = 0;
    for (int i = 0; i < _vector.size(); i++)
    {
		sum += _vector[i];
	}
	return sum;
}
void InteraterbasedLooping(vector<int> _vector)
{
    cout << "Iterator-based loop for Vector" << endl;
    for (auto i = _vector.begin(); i != _vector.end(); i++)
    {
        cout <<  *i << endl;
    }    
}
void RangeBasedLooping(vector<int> _vector)
{
    /// Range is loop is very similar to foreach loop in C#
    cout << "Range-based loop for Vector" << endl;
    for (int counter : _vector)
    {
        cout << counter << endl;
    }
}
int main()
{
    vector<int> _vector;
    _vector.push_back(1);
    _vector.push_back(2);
    _vector.push_back(3);
    _vector.push_back(4);
    _vector.push_back(5);
    InteraterbasedLooping(_vector);
    _vector.pop_back();
    int sum = GetVectorSuM(_vector);
    cout << "Sum = " << sum << endl;
    _vector.insert(_vector.begin(), 9);
    _vector[1] = 10;
    RangeBasedLooping(_vector);
      
    return 0;
}
