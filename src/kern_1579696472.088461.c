#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(40, 900, 530, "ones");
	float ***E = create_three_dim_float(160, 580, 130, "ones");
	float *D = create_one_dim_float(670, "ones");
	float *C = create_one_dim_float(750, "ones");
	float ***B = create_three_dim_float(230, 650, 660, "ones");

	for (int b = 0; b < 577; b++)
	  for (int a = 5; a < 36; a++)
	  {
	    
	     E[a][b][a]=E[a-5][b][a-3]-0.968;
	    
	     A[a][b][a]=A[a+3][b][a+3]*0.186;
	    
	     E[a][b][a]=E[a+3][b+3][a+4]*0.635;
	    
	     D[a]=D[a+1]+E[a][b][a];
	    
	     C[a]=A[a][b][a]/B[a][b][a];
	     C[a+2]=D[a]-E[a][b][a]+A[a][b][a];
	    
	     A[a][b][a]=C[a];
	  }

    return 0;
}