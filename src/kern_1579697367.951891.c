#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(430, "random");
	float ***C = create_three_dim_float(600, 740, 510, "random");
	float ***A = create_three_dim_float(50, 520, 250, "random");

	for (int d = 5; d < 249; d++)
	  for (int c = 5; c < 517; c++)
	    for (int b = 0; b < 46; b++)
	      for (int a = 0; a < 46; a++)
	      {
	        
	       C[a][b][c]=C[a][b-5][c-5]/0.084;
	        
	       B[a]=B[a+5]*0.324;
	        
	       A[a][b][c]=A[a+3][b][c+1]*0.832;
	        
	       A[a][b][c]=A[a+4][b+3][c]*C[a][b][c]/B[a];
	        
	       C[a][b][c]=C[a][b+4][c+2]*0.171;
	        
	       A[a][b][c]=B[a]/A[a][b][c]-A[a][b][c];
	      }

    return 0;
}