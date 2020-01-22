#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(210, 30, "ones");
	int *B = create_one_dim_int(900, "ones");
	int ***D = create_three_dim_int(800, 870, 130, "ones");
	int *A = create_one_dim_int(130, "ones");

	for (int d = 0; d < 130; d++)
	  for (int c = 3; c < 29; c++)
	    for (int b = 3; b < 127; b++)
	      for (int a = 3; a < 127; a++)
	      {
	        
	       A[a]=A[a-1]*17;
	        
	       C[a][b]=C[a-2][b-3]-29;
	        
	       B[a]=B[a+1]*24/C[a][b];
	        
	       D[a][b][c]=B[a]+B[a];
	       D[a-3][b][c]=22+A[a];
	        
	       C[a][b]=21;
	        
	       D[a][b][c]=C[a][b]/B[a];
	        
	       int var_a=A[a]+31;
	       int var_b=A[a+3]/44;
	      }

    return 0;
}