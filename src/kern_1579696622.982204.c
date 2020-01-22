#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(580, 890, "ones");
	float ***C = create_three_dim_float(210, 310, 210, "ones");
	float ***B = create_three_dim_float(820, 100, 530, "ones");
	float **D = create_two_dim_float(870, 380, "ones");
	float ***E = create_three_dim_float(110, 930, 50, "ones");

	for (int c = 3; c < 50; c++)
	  for (int b = 5; b < 310; b++)
	    for (int a = 5; a < 110; a++)
	    {
	      
	      D[a][b]=0.768;
	      D[a-4][b]=0.411;
	      
	      C[a][b][c]=0.096;
	      C[a-5][b-5][c-3]=0.649;
	      
	      E[a][b][c]=E[a][b][c]*0.151+B[a][b][c]/C[a][b][c]-A[a][b];
	      A[a][b]=E[a-1][b][c-2]-D[a][b]/A[a][b]*B[a][b][c];
	    }

    return 0;
}