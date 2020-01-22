#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(460, 70, 730, "zeros");
	float ***E = create_three_dim_float(290, 940, 800, "zeros");
	float *D = create_one_dim_float(220, "zeros");
	float ***A = create_three_dim_float(680, 710, 270, "zeros");
	float ***C = create_three_dim_float(870, 640, 620, "zeros");

	for (int b = 4; b < 68; b++)
	  for (int a = 0; a < 285; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b+2][a]+0.84/A[a][b][a]-C[a][b][a];
	    
	     A[a][b][a]=D[a];
	     A[a+2][b+1][a+4]=0.555;
	    
	     B[a][b][a]=0.282;
	    
	     C[a][b][a]=A[a][b][a]/B[a][b][a]-E[a][b][a];
	     C[a+3][b+4][a+3]=A[a][b][a]+B[a][b][a];
	    
	     float var_a=E[a][b][a]*0.411;
	     float var_b=E[a+2][b+4][a]/0.753;
	    
	     float var_c=E[a][b][a]+0.43;
	     float var_d=E[a+5][b+2][a+2]/0.079;
	  }

    return 0;
}