#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(700, 910, "random");
	int ***B = create_three_dim_int(320, 720, 80, "random");
	int *A = create_one_dim_int(60, "random");

	for (int d = 2; d < 77; d++)
	  for (int c = 3; c < 715; c++)
	    for (int b = 5; b < 60; b++)
	      for (int a = 5; a < 60; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-3][c-2]/C[a][b]+A[a];
	        
	       A[a]=A[a-5]*39;
	        
	       C[a][b]=C[a+2][b+3]+49;
	        
	       C[a][b]=C[a+2][b+2]-16;
	        
	       int var_a=B[a][b][c]-40;
	       int var_b=B[a+1][b+5][c+3]/14;
	      }

    return 0;
}