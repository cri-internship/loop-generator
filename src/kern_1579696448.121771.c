#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(930, 120, "ones");
	float ***E = create_three_dim_float(470, 680, 160, "ones");
	float ***A = create_three_dim_float(60, 760, 370, "ones");
	float ***D = create_three_dim_float(960, 660, 170, "ones");
	float *B = create_one_dim_float(160, "ones");

	for (int b = 4; b < 117; b++)
	  for (int a = 5; a < 57; a++)
	  {
	    
	     D[a][b][a]=D[a-4][b-4][a-3]+0.717;
	    
	     B[a]=0.681;
	     B[a+3]=0.382;
	    
	     A[a][b][a]=0.865;
	     A[a][b+2][a+3]=C[a][b]*B[a]-E[a][b][a]+0.567;
	    
	     float var_a=C[a][b]+0.616;
	     float var_b=C[a-1][b-4]*0.585;
	    
	     float var_c=E[a][b][a]/0.981;
	     float var_d=E[a-5][b-1][a-5]*0.958;
	    
	     D[a][b][a]=C[a][b]*A[a][b][a]/A[a][b][a]-D[a][b][a]+E[a][b][a];
	     A[a][b][a]=C[a+5][b+3]/D[a][b][a]-E[a][b][a]*B[a];
	  }

    return 0;
}