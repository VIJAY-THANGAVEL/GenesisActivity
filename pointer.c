int main()
{
  int* p1;
  if ((p1 = (int*)malloc(sizeof(int))) == NULL)
  {
    return 1;
  }
  *p1 = 99;
  free(p1);
  *p1 = 100;
  return 0;
}
