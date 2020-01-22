#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(360, 980, 80, "random");
	float *B = create_one_dim_float(690, "random");
	float ***C = create_three_dim_float(980, 410, 710, "random");

	for (int d = 2; d < 705; d++)
	  for (int c = 4; c < 407; c++)
	    for (int b = 1; b < 688; b++)
	      for (int a = 1; a < 688; a++)
	      {
	        
	       B[a]=B[a+1]*0.034;
	        
	       B[a]=B[a+2]*0.289;
	        
	       C[a][b][c]=C[a+5][b+3][c+5]+B[a]-A[a][b][c];
	        
	       C[a][b][c]=B[a];
	        
	       C[a][b][c]=C[a][b][c]/B[a];
	       A[a][b][c]=C[a+1][b+1][c+1]+0.55*A[a][b][c];
	      }

    return 0;
}