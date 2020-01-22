#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(490, 270, "random");
	float ***C = create_three_dim_float(440, 470, 610, "random");
	float *B = create_one_dim_float(1000, "random");
	float **D = create_two_dim_float(270, 60, "random");

	for (int d = 4; d < 605; d++)
	  for (int c = 4; c < 60; c++)
	    for (int b = 4; b < 270; b++)
	      for (int a = 4; a < 270; a++)
	      {
	        
	       A[a][b]=A[a-1][b-3]-0.756;
	        
	       B[a]=B[a-4]/0.119;
	        
	       A[a][b]=A[a][b+3]*0.356;
	        
	       A[a][b]=A[a+5][b+1]+0.386;
	        
	       C[a][b][c]=0.465;
	       C[a][b+1][c+5]=0.079;
	        
	       D[a][b]=C[a][b][c]/B[a]*D[a][b];
	       B[a]=C[a-1][b-3][c-4]*A[a][b]-A[a][b];
	        
	       float var_a=D[a][b]*0.297;
	       float var_b=D[a-4][b-4]/0.593;
	      }

    return 0;
}