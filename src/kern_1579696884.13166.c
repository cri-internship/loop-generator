#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(380, "random");
	double *D = create_one_dim_double(200, "random");
	double *A = create_one_dim_double(870, "random");
	double ***C = create_three_dim_double(610, 400, 520, "random");

	for (int d = 4; d < 195; d++)
	  for (int c = 4; c < 195; c++)
	    for (int b = 4; b < 195; b++)
	      for (int a = 4; a < 195; a++)
	      {
	        
	       A[a]=A[a-4]/0.185;
	        
	       A[a]=A[a-2]*0.674;
	        
	       B[a]=B[a+3]*0.975;
	        
	       B[a]=D[a]/0.342;
	       D[a]=B[a];
	        
	       C[a][b][c]=D[a]*C[a][b][c]-B[a];
	       D[a]=D[a+5]*A[a];
	      }

    return 0;
}