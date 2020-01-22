#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(560, "ones");
	float ***E = create_three_dim_float(90, 530, 710, "ones");
	float *D = create_one_dim_float(590, "ones");
	float ***C = create_three_dim_float(100, 720, 10, "ones");
	float **A = create_two_dim_float(570, 890, "ones");

	for (int b = 5; b < 530; b++)
	  for (int a = 5; a < 90; a++)
	  {
	    
	     D[a]=D[a-2]*B[a]/E[a][b][a]+A[a][b];
	    
	     B[a]=B[a-4]-D[a]*C[a][b][a];
	    
	     E[a][b][a]=E[a][b-5][a-5]+0.154;
	    
	     C[a][b][a]=C[a+5][b+3][a+5]/0.791;
	  }

    return 0;
}