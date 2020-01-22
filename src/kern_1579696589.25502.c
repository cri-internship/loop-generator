#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(450, 120, 30, "ones");
	double *B = create_one_dim_double(490, "ones");
	double ***A = create_three_dim_double(580, 650, 640, "ones");
	double **C = create_two_dim_double(660, 390, "ones");
	double *D = create_one_dim_double(530, "ones");

	for (int c = 0; c < 640; c++)
	  for (int b = 5; b < 650; b++)
	    for (int a = 4; a < 530; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-5][c]+0.839;
	      
	      D[a]=0.673;
	      D[a-4]=0.995;
	    }

    return 0;
}