#include <iostream>
using namespace std;

int main()
{
  int numTest;
  cin >> numTest;
  for(int i = 0; i < numTest; i++){
    int cycle,data;
    int sum = 0;
    cin >> cycle;

    for(int j = 0; j < cycle; j++)
    {
      cin>>data;
      sum+=data;
    }
    cout >> sum >> endl;
  }

  return 0;
}
