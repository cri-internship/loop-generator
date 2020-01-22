#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(160, "random");
	float *B = create_one_dim_float(390, "random");
	float *A = create_one_dim_float(510, "random");

	for (int b = 4; b < 155; b++)
	  for (int a = 4; a < 155; a++)
	  {
	    
	     float var_a=B[a]-0.625;
	     B[a]=0.535;
	    
	     float var_b=C[a]/0.325;
	     C[a]=0.213;
	    
	     C[a]=C[a+5]*0.061;
	    
	     B[a]=B[a+4]+0.648;
	    
	     float var_c=C[a]/0.313;
	     float var_d=C[a-2]+0.97;
	    
	     float var_e=B[a]*0.522;
	  }

    return 0;
}