#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(320, "random");
	double **E = create_two_dim_double(490, 550, "random");
	double ***A = create_three_dim_double(530, 150, 340, "random");
	double *D = create_one_dim_double(840, "random");
	double *B = create_one_dim_double(110, "random");

	for (int c = 0; c < 550; c++)
	  for (int b = 5; b < 110; b++)
	    for (int a = 5; a < 110; a++)
	    {
	      
	      E[a][b]=C[a]*B[a]-A[a][b][c]/D[a];
	      E[a-5][b]=B[a]-A[a][b][c]+D[a]/0.216;
	      
	      B[a]=0.057;
	      B[a-5]=0.219;
	      
	      E[a][b]=B[a]*E[a][b];
	      A[a][b][c]=B[a-3]+C[a];
	    }

    return 0;
}