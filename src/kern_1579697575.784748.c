#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(170, "ones");
	int *A = create_one_dim_int(530, "ones");
	int ***C = create_three_dim_int(350, 740, 780, "ones");
	int **B = create_two_dim_int(880, 850, "ones");

	for (int c = 0; c < 779; c++)
	  for (int b = 1; b < 736; b++)
	    for (int a = 2; a < 170; a++)
	    {
	      
	      D[a]=D[a-2]-C[a][b][c];
	      
	      C[a][b][c]=C[a][b-1][c]+40;
	      
	      B[a][b]=B[a][b+2]/26;
	      
	      C[a][b][c]=B[a][b]+A[a]/A[a];
	      
	      B[a][b]=D[a];
	      
	      int var_a=A[a]-18;
	      int var_b=A[a+1]/11;
	    }

    return 0;
}