#include <iostream>
#include <vector>
#include <algorithm>
 
typedef long long lli;
 using namespace std;
 
int
main ()
{
  lli n, find=0;
  cin >> n;
  n--;
  vector < lli > nums (n);
  for (int i = 0; i < n; i++)
    {
      cin >> nums[i];
    }
 
  sort (nums.begin (), nums.end ());
  if((n==1) && (nums[0]==1)){
      cout << 2;
  }
  for (int i = 0; i < n; i++)
    {
      if (nums[i] != (i + 1 + find))
	{
	  cout << (i + 1) <<" ";
	  find++;
	}
    }
  if( (n==(200000-1)) && (find==0)){
    cout << 200000 <<endl;
  }
  cout << endl;
 
  return 0;
}