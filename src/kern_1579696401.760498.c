#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(970, 1000, "zeros");
	double **B = create_two_dim_double(970, 120, "zeros");
	double **D = create_two_dim_double(300, 630, "zeros");
	double ***C = create_three_dim_double(760, 530, 570, "zeros");

	for (int b = 0; b < 120; b++)
	  for (int a = 0; a < 296; a++)
	  {
	    
	     D[a][b]=D[a+4][b+5]+A[a][b]-B[a][b]/C[a][b][a];
	    
	     double var_a=B[a][b]-0.208;
	     B[a][b]=0.513;
	    
	     A[a][b]=A[a+4][b+3]-0.911;
	    
	     D[a][b]=D[a+3][b]-0.849;
	    
	     C[a][b][a]=C[a+5][b+5][a+3]+0.362;
	    
	     A[a][b]=0.535;
	    
	     B[a][b]=A[a][b]-D[a][b]/D[a][b];
	     D[a][b]=A[a+5][b+1]/B[a][b]+C[a][b][a]-D[a][b];
	  }

    return 0;
}