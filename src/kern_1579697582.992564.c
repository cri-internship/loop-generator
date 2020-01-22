#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(390, 710, 650, "random");
	double *C = create_one_dim_double(740, "random");
	double *D = create_one_dim_double(580, "random");
	double *E = create_one_dim_double(840, "random");
	double **B = create_two_dim_double(350, 980, "random");

	for (int c = 0; c < 645; c++)
	  for (int b = 0; b < 707; b++)
	    for (int a = 5; a < 349; a++)
	    {
	      
	      B[a][b]=B[a-5][b]*E[a]/A[a][b][c]-D[a];
	      
	      A[a][b][c]=A[a+1][b+3][c+5]-C[a]/B[a][b];
	      
	      B[a][b]=B[a+1][b+4]*0.135;
	      
	      A[a][b][c]=B[a][b]*D[a]/E[a];
	      
	      E[a]=0.272;
	      E[a+1]=0.404;
	      
	      A[a][b][c]=E[a]/C[a];
	      B[a][b]=E[a-1]-D[a]*C[a]/B[a][b];
	    }

    return 0;
}