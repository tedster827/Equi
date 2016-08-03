#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

/*
Debug: [Int Only] Display Input Vector.
Purpose: To make sure the input vector is getting the
correct inputs.
Input: A [Input Vector-Passing by reference to save
memory]
Output: None [Void Function]
*/
void display_vector(vector<int> &A)
{
  if(A.size() > 0)
  {
    cout << "Input Vector: ";
    for(int i = 0; i < A.size(); i++)
    {
      cout << A[i] << " " << endl;
    }
  }
  cout << "[Error] Cannot Display An Empty Vector." << endl;
  return;
}


int main()
{
  //array of numbers.
  vector<int> A;
  //placeholder for vector input.
  int gNumber;
  //placeholer for vector input.
  string iArray;
  cout << "Please enter integers into the array and put spaces between integers. [Press Enter When Done]" << endl;
  //asking user for array;
  getline(cin, iArray);
  istringstream stream(iArray);
  while(stream >> gNumber)
  {
    A.push_back(gNumber);
  }


  //Debug: Display Input Vector.
  display_vector(A);

  return 0;
}
