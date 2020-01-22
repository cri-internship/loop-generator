#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(730, "ones");
	double ***B = create_three_dim_double(590, 320, 350, "ones");
	double *D = create_one_dim_double(50, "ones");
	double *C = create_one_dim_double(370, "ones");
	double ***A = create_three_dim_double(330, 380, 340, "ones");

	for (int c = 0; c < 350; c++)
	  for (int b = 0; b < 318; b++)
	    for (int a = 4; a < 365; a++)
	    {
	      
	      C[a]=C[a-4]-E[a]+B[a][b][c]*D[a]/A[a][b][c];
	      
	      C[a]=C[a+2]+0.93;
	      
	      E[a]=C[a]+B[a][b][c]*C[a]/0.953;
	      E[a+5]=A[a][b][c];
	      
	      A[a][b][c]=B[a][b][c]+A[a][b][c]*D[a];
	      B[a][b][c]=B[a+3][b+2][c]/D[a];
	    }

    return 0;
}