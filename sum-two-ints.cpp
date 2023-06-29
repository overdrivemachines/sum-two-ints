#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printV(vector<int> array);

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  vector<int> result;
  int sum = 0;
  sort(array.begin(), array.end());

  if (array.size() <= 1)
    return result;

  int i = 0;
  int j = array.size() - 1;

  while (i < j) {
    sum = array[i] + array[j];
    if (sum > targetSum)
      j--;
    else if (sum < targetSum)
      i++;
    else {
      result.push_back(array[i]);
      result.push_back(array[j]);
      break;
    }
  }
  return result;
}

void printV(vector<int> array) {
  for (int i : array) {
    cout << i << " ";
  }
  cout << endl;
}

int main(int argc, char const *argv[]) {
  vector<int> array = {1, 5, 3};
  printV(array);

  printV(twoNumberSum(array, 4));
  return 0;
}
