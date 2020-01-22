#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(420, 470, "zeros");
	double **C = create_two_dim_double(680, 480, "zeros");
	double ***B = create_three_dim_double(630, 760, 480, "zeros");

	for (int c = 5; c < 477; c++)
	  for (int b = 1; b < 675; b++)
	    for (int a = 1; a < 675; a++)
	    {
	      
	      C[a][b]=C[a-1][b-3]+A[a][b]*B[a][b][c];
	      
	      C[a][b]=A[a][b]*0.713;
	    }

    return 0;
}