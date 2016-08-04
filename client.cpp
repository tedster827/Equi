#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

/*
Debug: [Int Only] Display Input Vector.
Purpose: To make sure the input vector is getting the
correct inputs.
Input: A [Input Vector- Passing by reference to save
memory]
Output: None [Void Function- The function will simply
display the vector nothing needs to be returned.]
*/
void display_vector(vector<int> &A)
{
  if(A.size() > 0)
  {
    cout << "Testing This Vector: ";
    for(int i = 0; i < A.size(); i++)
    {
      cout << A[i] << " ";
    }
    cout << endl;
  }
  else
  {
    cout << "[Error] Cannot Display Vector." << endl;
  }
  return;
}
/*
Purpose: This will test each possible index value
to see if it is a equilibrium index.
Input: A [Input Vector- Passed by reference to save
memory]
Output: None [Void Function- There isn't a need for
an output because this function will just display
the equilibrium indexes.]
*/
void find_equi_indexes(vector<int> &A)
{
  /*This variable will be used to be the counter for
  how many indexes must be tested.*/
  int p = A.size();
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
  find_equi_indexes(A);

  return 0;
}
