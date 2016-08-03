#include <iostream>
#include <vector>
#include <string>

using namespace std;

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
  cin >> iArray;
  for(int i = 0; i < iArray.size(); i++)
  {
    if(iArray[i] >> gNumber)
    {
      A.push_back(gNumber);
    }
  }

  return 0;
}
