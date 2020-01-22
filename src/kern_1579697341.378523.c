#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(270, 200, 220, "random");
	double **D = create_two_dim_double(90, 310, "random");
	double ***C = create_three_dim_double(60, 340, 910, "random");
	double ***B = create_three_dim_double(440, 290, 860, "random");
	double **E = create_two_dim_double(890, 930, "random");

	for (int b = 2; b < 336; b++)
	  for (int a = 5; a < 55; a++)
	  {
	    
	     C[a][b][a]=C[a+2][b+4][a+5]+D[a][b]-E[a][b]/A[a][b][a];
	    
	     E[a][b]=0.741*C[a][b][a]+A[a][b][a];
	     E[a-4][b]=B[a][b][a]-C[a][b][a]+D[a][b]/A[a][b][a];
	    
	     A[a][b][a]=C[a][b][a]*B[a][b][a]-A[a][b][a]+E[a][b];
	     B[a][b][a]=C[a-1][b][a-1]-B[a][b][a]/A[a][b][a]+E[a][b]*D[a][b];
	    
	     E[a][b]=E[a][b]*C[a][b][a]/A[a][b][a];
	     C[a][b][a]=E[a-1][b-1]+B[a][b][a]*D[a][b]/A[a][b][a]-0.329;
	    
	     double var_a=E[a][b]+0.813;
	     double var_b=E[a-5][b-2]/0.805;
	  }

    return 0;
}