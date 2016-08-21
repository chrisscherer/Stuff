#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <stdlib.h>  
using namespace std;

int primes_array[6] = {2, 3, 5, 7, 11, 13};
vector<int> primes(&primes_array[0], &primes_array[0]+6);

int start = 600;
int hold = 800;

int num_prime_divisors(int input){
  int divisor_count = 0;
  for(int i=0;i<primes.size();i++){
    if(input % primes[i] == 0){
      divisor_count++;
    }
  }
  return divisor_count;
}

int GetIntFromChar(char c){
  return (int)c - 48;
}

int main ()
{
  for(int i=start;i<=hold;i++){
    string i_string = to_string(i);
    if(i % 2 == 0){
      continue;
    }
    if((GetIntFromChar(i_string[0]) + GetIntFromChar(i_string[2])) != GetIntFromChar(i_string[1])){
      continue;
    }
    if(num_prime_divisors(i) < 3){
      continue;
    }
    cout << i;
  }

  return 0;
}