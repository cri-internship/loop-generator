#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(270, 770, 220, "ones");
	float **B = create_two_dim_float(120, 590, "ones");
	float *C = create_one_dim_float(370, "ones");
	float **D = create_two_dim_float(850, 920, "ones");

	for (int c = 4; c < 220; c++)
	  for (int b = 2; b < 770; b++)
	    for (int a = 2; a < 270; a++)
	    {
	      
	      C[a]=D[a][b]-C[a]*B[a][b];
	      A[a][b][c]=D[a+3][b+1]+A[a][b][c]*B[a][b];
	      
	      D[a][b]=A[a][b][c]*D[a][b]/0.738;
	      B[a][b]=A[a-2][b-2][c-4]*D[a][b]+B[a][b]-C[a];
	    }

    return 0;
}