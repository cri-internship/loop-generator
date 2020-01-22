#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(690, 160, 990, "ones");
	int *C = create_one_dim_int(190, "ones");
	int **B = create_two_dim_int(230, 90, "ones");

	for (int d = 0; d < 985; d++)
	  for (int c = 5; c < 90; c++)
	    for (int b = 1; b < 185; b++)
	      for (int a = 1; a < 185; a++)
	      {
	        
	       A[a][b][c]=A[a+5][b+1][c+5]*31;
	        
	       int var_a=B[a][b]/34;
	       B[a][b]=12;
	        
	       B[a][b]=C[a];
	        
	       A[a][b][c]=C[a]-B[a][b];
	       B[a][b]=C[a+5]+A[a][b][c]*B[a][b];
	        
	       int var_b=C[a]*41;
	       int var_c=C[a+1]/12;
	      }

    return 0;
}