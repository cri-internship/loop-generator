#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(320, "ones");
	float ***C = create_three_dim_float(460, 40, 570, "ones");
	float *E = create_one_dim_float(550, "ones");
	float ***D = create_three_dim_float(290, 260, 890, "ones");
	float **A = create_two_dim_float(50, 860, "ones");

	for (int b = 4; b < 40; b++)
	  for (int a = 4; a < 48; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b-4][a-1]*D[a][b][a]/B[a]-E[a];
	    
	     D[a][b][a]=D[a][b][a+3]+A[a][b]*0.559;
	    
	     A[a][b]=0.707;
	     A[a+2][b+4]=0.858;
	    
	     A[a][b]=0.107;
	    
	     B[a]=0.499;
	     B[a+1]=0.66;
	    
	     float var_a=B[a]*0.577;
	     float var_b=B[a+2]+0.422;
	    
	     B[a]=B[a]*C[a][b][a]/E[a]+A[a][b];
	     E[a]=B[a-3]+D[a][b][a]*C[a][b][a]-E[a]/A[a][b];
	  }

    return 0;
}