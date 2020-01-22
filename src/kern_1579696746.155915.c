#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(80, "ones");
	float ***B = create_three_dim_float(100, 930, 910, "ones");
	float **A = create_two_dim_float(730, 530, "ones");
	float ***D = create_three_dim_float(230, 410, 430, "ones");
	float **C = create_two_dim_float(170, 490, "ones");

	for (int b = 0; b < 410; b++)
	  for (int a = 0; a < 97; a++)
	  {
	    
	     B[a][b][a]=B[a+3][b+2][a+2]*D[a][b][a]/C[a][b]-E[a];
	    
	     D[a][b][a]=0.829;
	     D[a][b][a+2]=B[a][b][a]-B[a][b][a];
	  }

    return 0;
}