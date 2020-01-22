#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(480, "zeros");
	double ***A = create_three_dim_double(780, 680, 700, "zeros");
	double ***D = create_three_dim_double(180, 130, 760, "zeros");
	double **B = create_two_dim_double(20, 740, "zeros");
	double **C = create_two_dim_double(230, 200, "zeros");

	for (int b = 4; b < 127; b++)
	  for (int a = 3; a < 15; a++)
	  {
	    
	     D[a][b][a]=D[a+5][b+3][a+3]*0.059;
	    
	     B[a][b]=B[a+5][b+1]-0.163;
	    
	     A[a][b][a]=A[a+1][b+2][a+3]*0.178;
	    
	     A[a][b][a]=0.644;
	    
	     D[a][b][a]=E[a]*0.924-D[a][b][a];
	     A[a][b][a]=E[a-3]-C[a][b];
	    
	     E[a]=B[a][b]*E[a]/0.232-D[a][b][a];
	     C[a][b]=B[a+3][b+1]-A[a][b][a]*D[a][b][a]/C[a][b]+E[a];
	  }

    return 0;
}