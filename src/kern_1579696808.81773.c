#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(770, "zeros");
	int **A = create_two_dim_int(560, 180, "zeros");
	int **E = create_two_dim_int(860, 580, "zeros");
	int **C = create_two_dim_int(880, 870, "zeros");
	int **D = create_two_dim_int(300, 510, "zeros");

	for (int d = 0; d < 507; d++)
	  for (int c = 3; c < 300; c++)
	    for (int b = 3; b < 300; b++)
	      for (int a = 3; a < 300; a++)
	      {
	        
	       B[a]=B[a-1]*E[a][b]+C[a][b];
	        
	       B[a]=D[a][b];
	        
	       B[a]=A[a][b];
	        
	       int var_a=D[a][b]/43;
	       int var_b=D[a][b+3]/34;
	        
	       int var_c=B[a]-10;
	       int var_d=B[a-3]/27;
	      }

    return 0;
}