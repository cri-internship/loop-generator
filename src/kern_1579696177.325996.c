#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(530, 370, "zeros");
	double **C = create_two_dim_double(260, 690, "zeros");
	double ***B = create_three_dim_double(80, 870, 840, "zeros");
	double *A = create_one_dim_double(450, "zeros");

	for (int c = 5; c < 839; c++)
	  for (int b = 4; b < 370; b++)
	    for (int a = 3; a < 76; a++)
	    {
	      
	      D[a][b]=D[a][b-4]*C[a][b]/B[a][b][c];
	      
	      B[a][b][c]=B[a-3][b][c-5]+0.03-A[a]/C[a][b];
	      
	      B[a][b][c]=A[a];
	    }

    return 0;
}