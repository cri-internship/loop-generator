#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(40, "zeros");
	float **C = create_two_dim_float(140, 780, "zeros");
	float ***A = create_three_dim_float(300, 520, 110, "zeros");
	float **B = create_two_dim_float(340, 770, "zeros");
	float **E = create_two_dim_float(660, 960, "zeros");

	for (int b = 1; b < 768; b++)
	  for (int a = 3; a < 36; a++)
	  {
	    
	     D[a]=D[a-2]+A[a][b][a]-C[a][b]/B[a][b]*E[a][b];
	    
	     C[a][b]=C[a-3][b-1]+0.174;
	    
	     E[a][b]=E[a+1][b+4]-0.9;
	    
	     B[a][b]=C[a][b]+D[a];
	     B[a-2][b-1]=A[a][b][a]/E[a][b];
	    
	     float var_a=B[a][b]/0.58;
	     float var_b=B[a+5][b+2]/0.645;
	    
	     B[a][b]=D[a]-E[a][b];
	     A[a][b][a]=D[a+4]/E[a][b]*B[a][b]-C[a][b];
	  }

    return 0;
}