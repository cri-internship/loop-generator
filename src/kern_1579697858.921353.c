#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(960, "ones");
	double ***C = create_three_dim_double(900, 400, 570, "ones");
	double **A = create_two_dim_double(100, 800, "ones");
	double *B = create_one_dim_double(130, "ones");

	for (int c = 5; c < 795; c++)
	  for (int b = 4; b < 99; b++)
	    for (int a = 4; a < 99; a++)
	    {
	      
	      A[a][b]=A[a-4][b-5]-0.611;
	      
	      D[a]=D[a+3]-0.356;
	      
	      A[a][b]=A[a+1][b+5]/B[a]+D[a]-C[a][b][c];
	      
	      B[a]=A[a][b]+A[a][b]*C[a][b][c];
	      B[a+1]=D[a]-A[a][b];
	      
	      D[a]=C[a][b][c]-B[a]*A[a][b];
	    }

    return 0;
}