#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(190, 640, "ones");
	float *D = create_one_dim_float(620, "ones");
	float ***C = create_three_dim_float(600, 770, 410, "ones");
	float **A = create_two_dim_float(780, 210, "ones");

	for (int b = 4; b < 210; b++)
	  for (int a = 5; a < 189; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-4][a]*0.435;
	    
	     D[a]=D[a-5]*0.388;
	    
	     B[a][b]=A[a][b]-D[a]/B[a][b];
	     A[a][b]=C[a][b][a];
	    
	     A[a][b]=0.447;
	    
	     float var_a=B[a][b]-0.167;
	     float var_b=B[a-1][b]*0.279;
	    
	     C[a][b][a]=B[a][b]-0.064;
	     A[a][b]=B[a+1][b+2]+D[a]/C[a][b][a]*A[a][b];
	    
	     float var_c=A[a][b]+0.704;
	     float var_d=A[a][b-1]+0.106;
	  }

    return 0;
}