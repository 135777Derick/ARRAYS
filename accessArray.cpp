#include <iostream>
using namespace std;

int main() {

  int nums[5];

  cout << "Please enter 5 values into the array: ";
  for (int i = 0; i < 5; i++) {
    cin>>nums [i];
  }

  cout <<"The values you entered are: \n";
  
  for (int j = 0; j < 5; j++) {
    cout << nums[j] << endl;
  }

  return 0;
}




// summing all elements of an array;
#include <iostream>
using namespace std;

int main() {

  int nums[] = {10,20,30,40,50,60,70,80,90,100};
  int sum = 0;
  for (int i = 0; i < 10; i++){
      sum = sum + nums [i];
  }

  cout <<"The sum of array element is: \n"<< sum  <<endl;
  return 0;
}
