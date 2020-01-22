#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(150, 350, "ones");
	double **C = create_two_dim_double(430, 660, "ones");
	double ***A = create_three_dim_double(890, 10, 800, "ones");
	double **B = create_two_dim_double(650, 450, "ones");
	double **E = create_two_dim_double(470, 290, "ones");

	for (int b = 5; b < 8; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     D[a][b]=D[a-5][b-3]/0.141;
	    
	     A[a][b][a]=A[a+3][b+2][a+4]+0.642;
	    
	     A[a][b][a]=B[a][b]+E[a][b]*C[a][b];
	     C[a][b]=B[a+4][b+5]+D[a][b]/A[a][b][a]*E[a][b];
	    
	     double var_a=B[a][b]-0.786;
	     double var_b=B[a-3][b-5]/0.17;
	  }

    return 0;
}