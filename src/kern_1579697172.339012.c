#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(290, 580, "ones");
	int *B = create_one_dim_int(670, "ones");
	int **C = create_two_dim_int(700, 420, "ones");
	int **A = create_two_dim_int(990, 460, "ones");

	for (int d = 3; d < 457; d++)
	  for (int c = 3; c < 670; c++)
	    for (int b = 3; b < 670; b++)
	      for (int a = 3; a < 670; a++)
	      {
	        
	       A[a][b]=A[a][b+1]*37;
	        
	       C[a][b]=B[a]+31;
	       B[a]=C[a][b]*D[a][b];
	        
	       A[a][b]=B[a]+C[a][b];
	        
	       int var_a=B[a]-35;
	       int var_b=B[a-1]/16;
	      }

    return 0;
}