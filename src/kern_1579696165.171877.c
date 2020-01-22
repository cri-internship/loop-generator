#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(560, 730, "random");
	float **B = create_two_dim_float(780, 300, "random");
	float ***D = create_three_dim_float(830, 890, 80, "random");
	float *C = create_one_dim_float(90, "random");

	for (int b = 5; b < 295; b++)
	  for (int a = 5; a < 89; a++)
	  {
	    
	     D[a][b][a]=D[a-5][b-5][a-5]*0.035;
	    
	     D[a][b][a]=0.016;
	    
	     C[a]=0.686;
	     C[a+1]=0.568;
	    
	     float var_a=B[a][b]*0.927;
	     float var_b=B[a+2][b+5]+0.048;
	    
	     float var_c=C[a]+0.02;
	     float var_d=C[a+1]/0.143;
	    
	     B[a][b]=C[a]+0.325*A[a][b]/B[a][b];
	  }

    return 0;
}