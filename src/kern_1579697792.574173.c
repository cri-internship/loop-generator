#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(980, 580, 980, "ones");
	double ***D = create_three_dim_double(600, 380, 930, "ones");
	double **A = create_two_dim_double(620, 580, "ones");
	double *C = create_one_dim_double(340, "ones");

	for (int b = 0; b < 376; b++)
	  for (int a = 0; a < 337; a++)
	  {
	    
	     B[a][b][a]=B[a+2][b+4][a+5]/A[a][b]*C[a]+D[a][b][a];
	    
	     A[a][b]=A[a+3][b+2]+0.151/B[a][b][a];
	    
	     B[a][b][a]=B[a+3][b+1][a+1]+0.056;
	    
	     C[a]=C[a+3]+B[a][b][a]*A[a][b];
	    
	     D[a][b][a]=0.677;
	     D[a+1][b+4][a+4]=0.563;
	    
	     A[a][b]=0.784;
	    
	     C[a]=D[a][b][a]/A[a][b];
	  }

    return 0;
}