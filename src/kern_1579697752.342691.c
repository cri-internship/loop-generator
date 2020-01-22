#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(530, 160, 200, "random");
	float **B = create_two_dim_float(360, 390, "random");
	float *C = create_one_dim_float(190, "random");

	for (int d = 3; d < 199; d++)
	  for (int c = 1; c < 160; c++)
	    for (int b = 3; b < 187; b++)
	      for (int a = 3; a < 187; a++)
	      {
	        
	       B[a][b]=B[a-1][b-1]/0.713;
	        
	       C[a]=0.113;
	       float  var_a=C[a]*0.368;
	        
	       C[a]=0.223;
	        
	       float var_b=C[a]-0.677;
	       float var_c=C[a+3]*0.925;
	        
	       float var_d=A[a][b][c]*0.351;
	       float var_e=A[a+2][b][c+1]*0.763;
	        
	       C[a]=B[a][b]-A[a][b][c]*C[a];
	       B[a][b]=B[a+4][b+5]+A[a][b][c]-C[a];
	        
	       float var_f=A[a][b][c]+0.2;
	       float var_g=A[a-3][b-1][c-3]-0.27;
	      }

    return 0;
}