#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(770, 390, "zeros");
	double ***B = create_three_dim_double(530, 30, 980, "zeros");
	double ***A = create_three_dim_double(110, 830, 280, "zeros");
	double *C = create_one_dim_double(90, "zeros");

	for (int c = 4; c < 280; c++)
	  for (int b = 4; b < 388; b++)
	    for (int a = 2; a < 90; a++)
	    {
	      
	      D[a][b]=D[a][b-3]/A[a][b][c]+B[a][b][c];
	      
	      A[a][b][c]=A[a-1][b-4][c-4]/C[a]*D[a][b];
	      
	      D[a][b]=D[a][b+2]-B[a][b][c]+0.604;
	      
	      D[a][b]=D[a+1][b]-A[a][b][c];
	      
	      C[a]=0.057*B[a][b][c]-D[a][b];
	      C[a-2]=A[a][b][c];
	    }

    return 0;
}