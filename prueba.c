#include<stdio.h>
#include<stdlib.h>
main()
{
  printf("prueba \n");
  int j;
  double *a,*b;

  b = malloc(4*sizeof(double));

  b[0] = 0.0;
  b[1] = 1.0;
  b[2] = 2.0;
  b[3] = 3.0;

  //free(b);

  for (j=0;j<4;++j)
    printf("j = %f\n",b[j]);

  a = b;



  for (j=0;j<4;++j)
    printf("j = %f\n",a[j]);



  printf("variable a is at address: %p\n", (void*)a);
  free(b);
  printf("variable b is at address: %p\n", (void*)b);


  if (0)
    printf("aquui\n");
  else if (1)
    printf("aqui tambien \n");
  else
    print("nunca\n");

  


}