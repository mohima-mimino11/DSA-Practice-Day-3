#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);
  long long int a[n];
  for(int i=0; i < n; i++){
    scanf("%lld", &a[i]);
  }
  return 0;
}