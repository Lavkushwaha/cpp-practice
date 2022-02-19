// funtion to print sum of two numbers

// #include <bits/stdc++.h>

// using namespace std;


#include <iostream>
#include <string>

using namespace std;

string GetRuler(const string& kingdom) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler = "";

char chr = kingdom[ kingdom.size() - 1]; 
if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u')
{
    ruler = "Alice";
}
else if(chr == 'y')
{
    ruler = "nobody";
}
else{
    ruler = "Bob";

}
  

  



  return ruler;
}



int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}












