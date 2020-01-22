#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(540, 610, 580, "random");
	double **D = create_two_dim_double(10, 470, "random");
	double ***E = create_three_dim_double(190, 970, 160, "random");
	double **A = create_two_dim_double(180, 210, "random");
	double **B = create_two_dim_double(140, 550, "random");

	for (int c = 0; c < 209; c++)
	  for (int b = 0; b < 177; b++)
	    for (int a = 0; a < 177; a++)
	    {
	      
	      E[a][b][c]=A[a][b]*E[a][b][c]-B[a][b]/C[a][b][c];
	      C[a][b][c]=A[a+3][b+1]-D[a][b];
	    }

    return 0;
}