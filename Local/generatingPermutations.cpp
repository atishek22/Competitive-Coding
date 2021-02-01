#include <bits/stdc++.h>

using namespace std;

#define n 3

vector<int> permutation;
bool chosen[n + 1];

//finding permutations from 1 to n
void search() {
  if (permutation.size() == n) {
    //process the permutatuion here
    for (auto x : permutation) cout << x << " ";
    cout << "\n";
  }
  else {
    //for every element from 1 to n
    for (int i = 1; i <= n; i++) {
      // if the element is chosen ie already in the array continue to iterate
      if (chosen[i]) continue;
      // else mark as true and add to the permutation and recurse
      chosen[i] = true;
      permutation.push_back(i);
      search();
      //again remove from the permutation and recurse
      chosen[i] = false;
      permutation.pop_back();
    }
  }
}

//generating permutations from the statndard library function next_permutation
//next_permutation gives the next lexicographic order
void searchLib() {
  for (int i = 1; i <= n; i++) {
    permutation.push_back(i);
  }
  do {
    //process the permutation
    for (auto x : permutation) cout << x << " ";
    cout << "\n";
  } while (next_permutation(permutation.begin(), permutation.end()));
}

int main() {
  //initialise the chosen array to false
  for (int i = 0; i < n; i++) chosen[i] = false;
  cout << "Permutation recursive \n";
  search();
  cout << "Permutation Library \n";
  searchLib();
}