#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(170, 500, "ones");
	double **A = create_two_dim_double(960, 890, "ones");
	double ***E = create_three_dim_double(970, 310, 190, "ones");
	double ***C = create_three_dim_double(310, 350, 730, "ones");
	double *B = create_one_dim_double(560, "ones");

	for (int c = 0; c < 729; c++)
	  for (int b = 5; b < 350; b++)
	    for (int a = 3; a < 306; a++)
	    {
	      
	      C[a][b][c]=C[a-2][b-1][c]+A[a][b]/E[a][b][c]-D[a][b];
	      
	      B[a]=0.641;
	      D[a][b]=B[a]*E[a][b][c];
	      
	      B[a]=B[a-2]+0.128;
	      
	      A[a][b]=A[a-3][b-5]+0.206;
	      
	      A[a][b]=0.225;
	      
	      C[a][b][c]=0.447;
	    }

    return 0;
}