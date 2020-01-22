#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(590, 630, "zeros");
	float *D = create_one_dim_float(620, "zeros");
	float ***C = create_three_dim_float(460, 710, 140, "zeros");
	float *B = create_one_dim_float(1000, "zeros");

	for (int b = 0; b < 628; b++)
	  for (int a = 5; a < 460; a++)
	  {
	    
	     D[a]=D[a-1]/0.445;
	    
	     D[a]=D[a-4]*B[a]+A[a][b]/C[a][b][a];
	    
	     B[a]=B[a-2]-0.962+A[a][b];
	    
	     A[a][b]=A[a][b+2]+0.549;
	    
	     B[a]=D[a]/0.703;
	    
	     float var_a=A[a][b]+0.647;
	     float var_b=A[a][b]*0.269;
	    
	     C[a][b][a]=C[a][b][a]/A[a][b];
	     B[a]=C[a-1][b][a-5]*B[a]+D[a];
	  }

    return 0;
}