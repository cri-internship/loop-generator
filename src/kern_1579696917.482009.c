#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(600, "random");
	float ***A = create_three_dim_float(330, 840, 300, "random");
	float **B = create_two_dim_float(990, 170, "random");

	for (int d = 5; d < 170; d++)
	  for (int c = 5; c < 600; c++)
	    for (int b = 5; b < 600; b++)
	      for (int a = 5; a < 600; a++)
	      {
	        
	       B[a][b]=C[a];
	       A[a][b][c]=B[a][b]-A[a][b][c]*C[a];
	        
	       B[a][b]=B[a-2][b-5]*0.014;
	        
	       C[a]=0.844;
	       C[a-5]=0.225;
	        
	       float var_a=C[a]*0.48;
	       float var_b=C[a-1]/0.507;
	        
	       float var_c=B[a][b]/0.847;
	       float var_d=B[a+4][b]/0.504;
	      }

    return 0;
}