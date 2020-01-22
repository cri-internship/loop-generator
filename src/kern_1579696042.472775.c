#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(1000, 40, 160, "ones");
	float **C = create_two_dim_float(860, 640, "ones");
	float ***D = create_three_dim_float(770, 850, 630, "ones");
	float **B = create_two_dim_float(820, 690, "ones");

	for (int c = 2; c < 159; c++)
	  for (int b = 2; b < 35; b++)
	    for (int a = 5; a < 815; a++)
	    {
	      
	      B[a][b]=B[a+5][b+2]+A[a][b][c]*D[a][b][c]/C[a][b];
	      
	      A[a][b][c]=A[a+3][b+5][c+1]-0.934;
	      
	      B[a][b]=0.117;
	      
	      A[a][b][c]=0.525-B[a][b];
	    }

    return 0;
}