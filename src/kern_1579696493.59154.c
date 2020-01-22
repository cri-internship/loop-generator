#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(240, 710, "random");
	double *B = create_one_dim_double(600, "random");
	double *C = create_one_dim_double(450, "random");
	double ***E = create_three_dim_double(150, 190, 20, "random");
	double **A = create_two_dim_double(680, 560, "random");

	for (int c = 5; c < 16; c++)
	  for (int b = 5; b < 187; b++)
	    for (int a = 5; a < 148; a++)
	    {
	      
	      E[a][b][c]=E[a-4][b-5][c-5]+A[a][b]-0.123/B[a];
	      
	      B[a]=B[a-3]/E[a][b][c]+D[a][b];
	      
	      E[a][b][c]=E[a+2][b+3][c+4]/0.066;
	      
	      C[a]=0.068;
	      C[a-1]=0.744;
	      
	      D[a][b]=E[a][b][c]/0.563-A[a][b]+C[a];
	      C[a]=E[a-5][b-4][c-5]/D[a][b]+A[a][b]-C[a]*B[a];
	      
	      A[a][b]=B[a]-A[a][b]+D[a][b]/C[a]*E[a][b][c];
	    }

    return 0;
}