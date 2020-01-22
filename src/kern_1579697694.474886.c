#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(640, "ones");
	float ***C = create_three_dim_float(730, 770, 820, "ones");
	float ***D = create_three_dim_float(60, 610, 760, "ones");
	float **E = create_two_dim_float(10, 530, "ones");
	float ***B = create_three_dim_float(50, 680, 520, "ones");

	for (int b = 0; b < 639; b++)
	  for (int a = 0; a < 639; a++)
	  {
	    
	     D[a][b][a]=A[a]*C[a][b][a]/E[a][b]-B[a][b][a];
	     B[a][b][a]=A[a+1]*D[a][b][a];
	  }

    return 0;
}