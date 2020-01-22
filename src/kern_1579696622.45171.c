#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(870, "ones");
	double *B = create_one_dim_double(480, "ones");
	double ***C = create_three_dim_double(780, 910, 20, "ones");
	double ***A = create_three_dim_double(340, 950, 280, "ones");
	double *D = create_one_dim_double(30, "ones");

	for (int c = 2; c < 20; c++)
	  for (int b = 5; b < 910; b++)
	    for (int a = 4; a < 25; a++)
	    {
	      
	      D[a]=D[a-3]/0.213;
	      
	      A[a][b][c]=A[a-4][b-4][c-1]*0.532;
	      
	      D[a]=D[a+5]-E[a]+C[a][b][c]/A[a][b][c];
	      
	      D[a]=D[a+4]-0.145;
	      
	      A[a][b][c]=C[a][b][c]+B[a]*D[a]/A[a][b][c];
	      E[a]=C[a-3][b-5][c-2]*A[a][b][c];
	    }

    return 0;
}