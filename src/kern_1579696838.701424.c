#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(190, 90, 870, "ones");
	double ***D = create_three_dim_double(90, 540, 490, "ones");
	double *B = create_one_dim_double(480, "ones");
	double ***A = create_three_dim_double(780, 640, 370, "ones");

	for (int c = 4; c < 370; c++)
	  for (int b = 3; b < 85; b++)
	    for (int a = 5; a < 85; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-1][c-4]*0.269+B[a];
	      
	      double var_a=B[a]*0.278;
	      B[a]=0.753;
	      
	      D[a][b][c]=0.602;
	      D[a-5][b-3][c-3]=0.193;
	      
	      D[a][b][c]=A[a][b][c]+A[a][b][c]-C[a][b][c];
	      
	      double var_b=C[a][b][c]-0.746;
	      double var_c=C[a+5][b+5][c+4]-0.804;
	    }

    return 0;
}