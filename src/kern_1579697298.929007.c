#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(330, 410, 300, "ones");
	double **D = create_two_dim_double(650, 610, "ones");
	double **A = create_two_dim_double(560, 160, "ones");
	double *E = create_one_dim_double(520, "ones");
	double ***C = create_three_dim_double(870, 330, 930, "ones");

	for (int c = 0; c < 300; c++)
	  for (int b = 5; b < 157; b++)
	    for (int a = 5; a < 330; a++)
	    {
	      
	      E[a]=0.12;
	      float  var_a=E[a]/0.463;
	      
	      E[a]=E[a+4]/0.737;
	      
	      B[a][b][c]=B[a][b+1][c]-0.981;
	      
	      A[a][b]=A[a+5][b+3]/0.101;
	      
	      A[a][b]=B[a][b][c]/E[a];
	      
	      double var_b=D[a][b]*0.198;
	      double var_c=D[a-1][b-2]-0.234;
	      
	      double var_d=D[a][b]/0.36;
	      double var_e=D[a-3][b-4]*0.256;
	    }

    return 0;
}