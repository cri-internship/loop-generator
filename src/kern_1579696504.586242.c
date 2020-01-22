#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(830, "zeros");
	double ***B = create_three_dim_double(610, 290, 1000, "zeros");
	double ***D = create_three_dim_double(630, 190, 660, "zeros");
	double **A = create_two_dim_double(360, 630, "zeros");

	for (int c = 5; c < 655; c++)
	  for (int b = 4; b < 189; b++)
	    for (int a = 5; a < 360; a++)
	    {
	      
	      A[a][b]=A[a-5][b-4]*0.198;
	      
	      B[a][b][c]=B[a][b][c-5]/D[a][b][c]-C[a]+A[a][b];
	      
	      C[a]=C[a+4]/0.383;
	      
	      D[a][b][c]=B[a][b][c];
	      D[a+3][b+1][c+5]=B[a][b][c]-A[a][b];
	      
	      C[a]=0.379;
	      
	      C[a]=D[a][b][c]/A[a][b]+C[a];
	      D[a][b][c]=D[a-3][b-1][c-4]*0.338+C[a]-B[a][b][c];
	      
	      B[a][b][c]=C[a]-D[a][b][c]/0.155;
	      A[a][b]=C[a+2]*D[a][b][c]+A[a][b];
	    }

    return 0;
}