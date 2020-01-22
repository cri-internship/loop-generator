#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(830, "random");
	double **B = create_two_dim_double(440, 210, "random");
	double ***C = create_three_dim_double(200, 550, 790, "random");
	double **A = create_two_dim_double(610, 150, "random");

	for (int c = 0; c < 790; c++)
	  for (int b = 4; b < 150; b++)
	    for (int a = 5; a < 198; a++)
	    {
	      
	      D[a]=D[a-5]/C[a][b][c]*A[a][b]+B[a][b];
	      
	      A[a][b]=A[a-4][b-4]*D[a];
	      
	      D[a]=D[a+3]+0.304;
	      
	      B[a][b]=0.986;
	      B[a+4][b+3]=0.411;
	      
	      B[a][b]=C[a][b][c]-A[a][b];
	      A[a][b]=C[a+2][b][c]+A[a][b]/0.495;
	    }

    return 0;
}