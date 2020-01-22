#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(160, 260, "ones");
	float ***C = create_three_dim_float(470, 470, 850, "ones");
	float *A = create_one_dim_float(410, "ones");

	for (int d = 4; d < 850; d++)
	  for (int c = 5; c < 257; c++)
	    for (int b = 5; b < 155; b++)
	      for (int a = 5; a < 155; a++)
	      {
	        
	       C[a][b][c]=C[a-4][b-4][c-3]+B[a][b]-A[a];
	        
	       B[a][b]=B[a-2][b-5]/0.03;
	        
	       B[a][b]=B[a+5][b+3]-C[a][b][c];
	        
	       C[a][b][c]=0.301;
	        
	       float var_a=B[a][b]*0.532;
	       float var_b=B[a-1][b-4]*0.636;
	      }

    return 0;
}