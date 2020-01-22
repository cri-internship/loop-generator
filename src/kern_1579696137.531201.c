#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(90, 790, "random");
	double ***C = create_three_dim_double(910, 970, 590, "random");
	double *A = create_one_dim_double(140, "random");

	for (int d = 5; d < 586; d++)
	  for (int c = 3; c < 968; c++)
	    for (int b = 3; b < 139; b++)
	      for (int a = 3; a < 139; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b-3][c-5]+B[a][b]*A[a];
	        
	       C[a][b][c]=C[a+5][b+1][c+3]/0.258;
	        
	       A[a]=A[a+1]-0.107;
	        
	       C[a][b][c]=C[a+2][b+2][c+4]-A[a];
	      }

    return 0;
}