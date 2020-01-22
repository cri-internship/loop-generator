#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(240, 140, 950, "zeros");
	float *B = create_one_dim_float(1000, "zeros");
	float *C = create_one_dim_float(370, "zeros");
	float ***D = create_three_dim_float(180, 20, 770, "zeros");

	for (int c = 5; c < 770; c++)
	  for (int b = 5; b < 20; b++)
	    for (int a = 5; a < 180; a++)
	    {
	      
	      A[a][b][c]=A[a][b-5][c-5]+0.403;
	      
	      A[a][b][c]=A[a-5][b-3][c-3]-0.186;
	      
	      D[a][b][c]=D[a-2][b-4][c-3]+0.705;
	      
	      A[a][b][c]=C[a]-B[a];
	      C[a]=D[a][b][c]+A[a][b][c]-A[a][b][c];
	    }

    return 0;
}