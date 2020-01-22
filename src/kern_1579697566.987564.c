#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(170, 160, "random");
	float *C = create_one_dim_float(760, "random");
	float **A = create_two_dim_float(230, 950, "random");
	float ***D = create_three_dim_float(340, 580, 430, "random");

	for (int d = 2; d < 429; d++)
	  for (int c = 3; c < 155; c++)
	    for (int b = 5; b < 165; b++)
	      for (int a = 5; a < 165; a++)
	      {
	        
	       A[a][b]=A[a][b-2]/0.787;
	        
	       B[a][b]=B[a+1][b+5]*0.267;
	        
	       B[a][b]=0.937;
	        
	       float var_a=D[a][b][c]+0.538;
	       float var_b=D[a][b+4][c+1]*0.035;
	        
	       float var_c=D[a][b][c]-0.14;
	       float var_d=D[a-2][b-3][c-2]*0.829;
	        
	       B[a][b]=C[a]+B[a][b]/A[a][b];
	       C[a]=C[a-5]*B[a][b]-A[a][b]/D[a][b][c];
	      }

    return 0;
}