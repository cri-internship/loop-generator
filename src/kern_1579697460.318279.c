#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(900, 790, "random");
	double *D = create_one_dim_double(660, "random");
	double ***C = create_three_dim_double(110, 710, 400, "random");
	double ***B = create_three_dim_double(180, 770, 790, "random");
	double **E = create_two_dim_double(260, 610, "random");

	for (int c = 1; c < 400; c++)
	  for (int b = 5; b < 607; b++)
	    for (int a = 0; a < 107; a++)
	    {
	      
	      C[a][b][c]=C[a][b-5][c-1]/D[a]-A[a][b]+0.122;
	      
	      E[a][b]=E[a+4][b+3]*0.102;
	      
	      E[a][b]=B[a][b][c]/0.1-A[a][b];
	      D[a]=B[a+3][b+5][c]*C[a][b][c]/D[a];
	      
	      B[a][b][c]=C[a][b][c]+D[a];
	      A[a][b]=C[a+3][b+1][c]-A[a][b];
	    }

    return 0;
}