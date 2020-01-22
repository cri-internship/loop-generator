#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(1000, 690, 200, "random");
	float **C = create_two_dim_float(560, 770, "random");
	float *D = create_one_dim_float(540, "random");
	float **B = create_two_dim_float(820, 260, "random");

	for (int d = 2; d < 200; d++)
	  for (int c = 4; c < 260; c++)
	    for (int b = 5; b < 539; b++)
	      for (int a = 5; a < 539; a++)
	      {
	        
	       C[a][b]=C[a-1][b-3]-0.535;
	        
	       A[a][b][c]=A[a-2][b-2][c-2]/B[a][b]-C[a][b]+D[a];
	        
	       C[a][b]=C[a-3][b-4]/0.38;
	        
	       B[a][b]=0.341;
	       float  var_a=B[a][b]-0.54;
	        
	       A[a][b][c]=0.556;
	        
	       float var_b=D[a]/0.369;
	       float var_c=D[a+1]*0.309;
	      }

    return 0;
}