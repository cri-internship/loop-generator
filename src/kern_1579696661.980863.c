#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(30, "random");
	float ***A = create_three_dim_float(170, 110, 850, "random");

	for (int d = 0; d < 846; d++)
	  for (int c = 0; c < 106; c++)
	    for (int b = 0; b < 25; b++)
	      for (int a = 0; a < 25; a++)
	      {
	        
	       B[a]=A[a][b][c];
	       A[a][b][c]=B[a]*A[a][b][c];
	        
	       A[a][b][c]=A[a+1][b+4][c+4]/B[a];
	        
	       B[a]=B[a+4]*0.847;
	        
	       A[a][b][c]=A[a+5][b+1][c]*B[a];
	        
	       B[a]=B[a]*A[a][b][c];
	        
	       float var_a=B[a]+0.146;
	       float var_b=B[a+5]*0.918;
	        
	       float var_c=B[a]-0.361;
	      }

    return 0;
}