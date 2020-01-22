#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(880, "zeros");
	float ***B = create_three_dim_float(180, 830, 830, "zeros");
	float *A = create_one_dim_float(450, "zeros");
	float **E = create_two_dim_float(770, 220, "zeros");
	float **D = create_two_dim_float(880, 340, "zeros");

	for (int b = 1; b < 340; b++)
	  for (int a = 5; a < 180; a++)
	  {
	    
	     B[a][b][a]=B[a][b][a-5]*0.125;
	    
	     A[a]=A[a+2]*0.484;
	    
	     D[a][b]=E[a][b]*0.5;
	     D[a+5][b]=A[a]+B[a][b][a]/E[a][b];
	    
	     B[a][b][a]=0.634;
	    
	     float var_a=C[a]*0.581;
	     float var_b=C[a]*0.632;
	    
	     C[a]=C[a]/D[a][b]+B[a][b][a]*E[a][b];
	     D[a][b]=C[a+1]/E[a][b]-0.64+A[a]*D[a][b];
	    
	     float var_c=C[a]/0.85;
	     float var_d=C[a-5]*0.145;
	  }

    return 0;
}