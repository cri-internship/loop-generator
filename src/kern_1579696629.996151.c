#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(880, 220, 740, "random");
	double *C = create_one_dim_double(30, "random");
	double **A = create_two_dim_double(180, 270, "random");

	for (int d = 0; d < 740; d++)
	  for (int c = 4; c < 220; c++)
	    for (int b = 5; b < 180; b++)
	      for (int a = 5; a < 180; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-4][c]*0.319;
	        
	       A[a][b]=A[a-4][b-4]*0.339;
	        
	       C[a]=A[a][b]/C[a]+B[a][b][c];
	       B[a][b][c]=A[a][b-4]+B[a][b][c];
	      }

    return 0;
}