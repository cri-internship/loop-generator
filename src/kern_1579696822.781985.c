#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(570, 170, "ones");
	double *B = create_one_dim_double(330, "ones");
	double **A = create_two_dim_double(20, 850, "ones");

	for (int d = 1; d < 167; d++)
	  for (int c = 3; c < 20; c++)
	    for (int b = 3; b < 20; b++)
	      for (int a = 3; a < 20; a++)
	      {
	        
	       A[a][b]=A[a-3][b]-C[a][b];
	        
	       C[a][b]=C[a][b-1]+B[a];
	        
	       B[a]=B[a+2]-0.691;
	        
	       A[a][b]=0.214;
	        
	       B[a]=C[a][b]/0.087;
	       C[a][b]=C[a+3][b+3]/B[a]+A[a][b];
	      }

    return 0;
}