#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(140, 750, 770, "ones");
	double ***A = create_three_dim_double(310, 690, 100, "ones");
	double **D = create_two_dim_double(840, 600, "ones");
	double **E = create_two_dim_double(350, 380, "ones");
	double *B = create_one_dim_double(820, "ones");

	for (int b = 5; b < 820; b++)
	  for (int a = 5; a < 820; a++)
	  {
	    
	     B[a]=A[a][b][a];
	     B[a-5]=C[a][b][a]-D[a][b]/E[a][b]*E[a][b];
	  }

    return 0;
}