#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(390, 680, 290, "random");
	double *B = create_one_dim_double(410, "random");

	for (int c = 2; c < 286; c++)
	  for (int b = 2; b < 679; b++)
	    for (int a = 3; a < 387; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-1][c-2]/0.117;
	      
	      A[a][b][c]=A[a+3][b+1][c+4]*0.512;
	      
	      B[a]=0.852;
	      B[a+5]=A[a][b][c];
	      
	      B[a]=A[a][b][c]+B[a];
	      A[a][b][c]=A[a-2][b-2][c]/B[a];
	    }

    return 0;
}