#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(880, 820, "ones");
	double *D = create_one_dim_double(130, "ones");
	double ***C = create_three_dim_double(30, 1000, 990, "ones");
	double ***B = create_three_dim_double(870, 340, 340, "ones");
	double ***A = create_three_dim_double(130, 80, 40, "ones");

	for (int b = 0; b < 335; b++)
	  for (int a = 0; a < 868; a++)
	  {
	    
	     B[a][b][a]=D[a]*A[a][b][a]+0.869/C[a][b][a];
	     B[a+1][b+5][a+2]=D[a]+E[a][b]*A[a][b][a]-C[a][b][a];
	  }

    return 0;
}