#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(420, 360, 690, "ones");
	double ***D = create_three_dim_double(210, 560, 290, "ones");
	double ***A = create_three_dim_double(760, 170, 890, "ones");
	double *E = create_one_dim_double(940, "ones");
	double **C = create_two_dim_double(480, 710, "ones");

	for (int b = 5; b < 170; b++)
	  for (int a = 5; a < 205; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-5][a-1]*0.102;
	    
	     E[a]=E[a+4]-A[a][b][a]+0.335/B[a][b][a];
	    
	     C[a][b]=C[a+3][b+5]+0.032;
	    
	     E[a]=0.181;
	    
	     D[a][b][a]=0.992;
	     D[a+5][b][a+5]=0.538;
	    
	     double var_a=A[a][b][a]/0.607;
	     double var_b=A[a-3][b-1][a-4]-0.108;
	    
	     double var_c=A[a][b][a]+0.45;
	     double var_d=A[a][b-2][a-5]+0.721;
	  }

    return 0;
}