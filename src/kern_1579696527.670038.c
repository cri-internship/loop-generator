#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(330, 210, 500, "random");
	double *A = create_one_dim_double(450, "random");
	double ***C = create_three_dim_double(770, 930, 850, "random");
	double ***B = create_three_dim_double(130, 760, 260, "random");
	double ***D = create_three_dim_double(110, 390, 940, "random");

	for (int c = 5; c < 846; c++)
	  for (int b = 3; b < 390; b++)
	    for (int a = 5; a < 108; a++)
	    {
	      
	      C[a][b][c]=C[a+4][b+5][c]*B[a][b][c]+E[a][b][c];
	      
	      C[a][b][c]=C[a][b+1][c+4]*D[a][b][c]+A[a]-D[a][b][c]/A[a];
	      
	      D[a][b][c]=C[a][b][c]*A[a];
	      D[a-5][b][c-5]=C[a][b][c]/A[a]*E[a][b][c];
	      
	      D[a][b][c]=0.635;
	      
	      B[a][b][c]=D[a][b][c]-B[a][b][c]*C[a][b][c]/A[a]+E[a][b][c];
	      A[a]=D[a+2][b][c+5]/A[a]+C[a][b][c]-B[a][b][c];
	    }

    return 0;
}