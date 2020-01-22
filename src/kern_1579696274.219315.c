#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(230, 40, 190, "zeros");
	float ***E = create_three_dim_float(50, 730, 600, "zeros");
	float **D = create_two_dim_float(640, 460, "zeros");
	float **C = create_two_dim_float(750, 290, "zeros");
	float **B = create_two_dim_float(710, 680, "zeros");

	for (int b = 5; b < 35; b++)
	  for (int a = 2; a < 46; a++)
	  {
	    
	     B[a][b]=B[a-1][b-2]/C[a][b];
	    
	     B[a][b]=B[a-2][b-5]*A[a][b][a]/0.55+E[a][b][a];
	    
	     E[a][b][a]=E[a+4][b+1][a+4]*0.455;
	    
	     float var_a=A[a][b][a]*0.207;
	     float var_b=A[a+1][b+5][a+3]*0.865;
	    
	     C[a][b]=A[a][b][a]*B[a][b]+D[a][b]-E[a][b][a];
	     B[a][b]=A[a+5][b][a+5]+E[a][b][a]*D[a][b]/B[a][b]-C[a][b];
	  }

    return 0;
}