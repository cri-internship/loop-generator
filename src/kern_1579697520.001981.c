#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(330, "zeros");
	double ***B = create_three_dim_double(400, 970, 200, "zeros");
	double **A = create_two_dim_double(200, 300, "zeros");

	for (int c = 0; c < 197; c++)
	  for (int b = 0; b < 300; b++)
	    for (int a = 0; a < 197; a++)
	    {
	      
	      B[a][b][c]=B[a+2][b+5][c+1]/0.368;
	      
	      A[a][b]=C[a]+B[a][b][c];
	      A[a+3][b]=B[a][b][c]*C[a];
	      
	      C[a]=0.405;
	      C[a+5]=0.908;
	      
	      C[a]=B[a][b][c]*A[a][b];
	      A[a][b]=B[a+2][b+2][c+3]/A[a][b]*0.007;
	    }

    return 0;
}