#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(360, "zeros");
	double ***B = create_three_dim_double(300, 870, 1000, "zeros");

	for (int d = 4; d < 997; d++)
	  for (int c = 3; c < 867; c++)
	    for (int b = 3; b < 298; b++)
	      for (int a = 3; a < 298; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-3][c-4]-0.312;
	        
	       A[a]=A[a+5]-B[a][b][c];
	        
	       A[a]=A[a+2]-0.885;
	        
	       B[a][b][c]=B[a][b][c]/0.602;
	       A[a]=B[a+2][b+3][c+3]*A[a];
	      }

    return 0;
}