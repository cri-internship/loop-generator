#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(690, 490, 30, "zeros");
	int *A = create_one_dim_int(750, "zeros");
	int **C = create_two_dim_int(80, 100, "zeros");

	for (int d = 0; d < 25; d++)
	  for (int c = 3; c < 100; c++)
	    for (int b = 0; b < 80; b++)
	      for (int a = 0; a < 80; a++)
	      {
	        
	       B[a][b][c]=B[a+5][b+2][c+5]+A[a]*C[a][b];
	        
	       A[a]=41;
	       A[a+5]=35;
	        
	       int var_a=C[a][b]*7;
	       int var_b=C[a][b-3]+31;
	      }

    return 0;
}