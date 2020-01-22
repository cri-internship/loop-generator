#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(80, "ones");
	float **D = create_two_dim_float(900, 110, "ones");
	float ***B = create_three_dim_float(250, 260, 240, "ones");
	float ***C = create_three_dim_float(860, 900, 560, "ones");

	for (int c = 2; c < 240; c++)
	  for (int b = 2; b < 105; b++)
	    for (int a = 0; a < 75; a++)
	    {
	      
	      B[a][b][c]=B[a][b-2][c-2]/0.485;
	      
	      A[a]=0.371;
	      A[a+5]=0.688;
	      
	      B[a][b][c]=D[a][b]*B[a][b][c]/C[a][b][c]-A[a];
	      A[a]=D[a+4][b+5]-A[a]+0.493;
	    }

    return 0;
}