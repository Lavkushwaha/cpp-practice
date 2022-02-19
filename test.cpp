// funtion to print sum of two numbers

#include <bits/stdc++.h>

using namespace std;


// #include <iostream>
// #include <string>

// using namespace std;

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

// bool isVovel(char k){
//     if(k == "a" || k == "e" || k == "i" || k == "o" || k == "u"){
//         return true;
//     }
// return false;

// }

// bool isY( char k){

//     if(k == "y"){
//         return true;
//     }

//     return false;

// }

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




// void sum(int a, int b)
// {
//     int c = a + b;
//     cout << "Sum of " << a << " and " << b << " is " << c << endl;
// }

// int main()
// {
//     sum(10, 20);
//     sum(20, 30);
// return 0;
// }








