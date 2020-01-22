#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(810, 360, "ones");
	float *D = create_one_dim_float(10, "ones");
	float ***E = create_three_dim_float(200, 410, 420, "ones");
	float *C = create_one_dim_float(930, "ones");
	float ***A = create_three_dim_float(390, 570, 570, "ones");

	for (int b = 0; b < 405; b++)
	  for (int a = 3; a < 195; a++)
	  {
	    
	     float var_a=C[a]/0.349;
	     float var_b=C[a-3]-0.517;
	    
	     A[a][b][a]=E[a][b][a]*A[a][b][a]/0.954;
	     B[a][b]=E[a+5][b+5][a+2]/D[a]*B[a][b]-C[a];
	    
	     float var_c=E[a][b][a]*0.17;
	     float var_d=E[a+5][b+1][a]-0.897;
	  }

    return 0;
}