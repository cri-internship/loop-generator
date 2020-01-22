#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(590, 310, 900, "ones");
	double ***A = create_three_dim_double(450, 320, 660, "ones");
	double *C = create_one_dim_double(60, "ones");

	for (int c = 1; c < 655; c++)
	  for (int b = 4; b < 310; b++)
	    for (int a = 2; a < 60; a++)
	    {
	      
	      A[a][b][c]=A[a][b-4][c]/C[a]*0.949;
	      
	      C[a]=C[a-2]*0.34;
	      
	      A[a][b][c]=A[a+1][b+2][c+5]*0.344;
	      
	      A[a][b][c]=A[a+3][b+4][c]-0.547;
	      
	      B[a][b][c]=A[a][b][c]-C[a];
	      B[a][b][c-1]=0.046;
	    }

    return 0;
}