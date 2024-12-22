void Swap(int*, int*);
void Swap(int*a, int* b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
int main(){
  int a = 4;
  int b = 6;
  Swap(&a, &b);
  printf("The value of a is %d and value of b is %d", a, b);
  return 0;
}
