#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(220, "ones");
	double *E = create_one_dim_double(170, "ones");
	double *B = create_one_dim_double(920, "ones");
	double ***A = create_three_dim_double(830, 260, 620, "ones");
	double ***C = create_three_dim_double(520, 920, 10, "ones");

	for (int c = 0; c < 9; c++)
	  for (int b = 0; b < 916; b++)
	    for (int a = 4; a < 170; a++)
	    {
	      
	      C[a][b][c]=0.322;
	      C[a+5][b+4][c+1]=0.34;
	      
	      double var_a=E[a]-0.887;
	      double var_b=E[a-4]*0.211;
	      
	      E[a]=C[a][b][c]+B[a]*D[a]/A[a][b][c];
	      A[a][b][c]=C[a-2][b][c]-E[a]*A[a][b][c]+E[a]/D[a];
	    }

    return 0;
}