#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(410, 670, 630, "ones");
	double ***A = create_three_dim_double(690, 720, 350, "ones");
	double ***B = create_three_dim_double(780, 640, 560, "ones");
	double **D = create_two_dim_double(820, 610, "ones");
	double **E = create_two_dim_double(700, 930, "ones");

	for (int b = 1; b < 608; b++)
	  for (int a = 5; a < 690; a++)
	  {
	    
	     E[a][b]=E[a-2][b]/0.486;
	    
	     D[a][b]=D[a+1][b+2]-0.494;
	    
	     B[a][b][a]=A[a][b][a]+E[a][b]/B[a][b][a]*D[a][b];
	     D[a][b]=A[a-4][b-1][a-5]*C[a][b][a]/E[a][b]+B[a][b][a];
	    
	     C[a][b][a]=A[a][b][a]+B[a][b][a];
	     A[a][b][a]=A[a][b+1][a]-B[a][b][a]+D[a][b]*E[a][b]/C[a][b][a];
	    
	     double var_a=B[a][b][a]+0.574;
	     double var_b=B[a-2][b-1][a-2]+0.395;
	    
	     E[a][b]=B[a][b][a]-A[a][b][a]+D[a][b]*C[a][b][a]/A[a][b][a];
	     B[a][b][a]=B[a+4][b+4][a+4]/D[a][b]*C[a][b][a]+A[a][b][a]-E[a][b];
	  }

    return 0;
}