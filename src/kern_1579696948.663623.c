#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(610, 390, "random");
	double *D = create_one_dim_double(880, "random");
	double ***B = create_three_dim_double(690, 240, 940, "random");
	double **C = create_two_dim_double(80, 300, "random");

	for (int c = 0; c < 940; c++)
	  for (int b = 4; b < 240; b++)
	    for (int a = 4; a < 80; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-2][c]+0.827;
	      
	      A[a][b]=A[a-4][b-2]+D[a]/C[a][b];
	      
	      D[a]=D[a-2]-0.639;
	      
	      D[a]=D[a-1]+B[a][b][c];
	      
	      C[a][b]=0.372;
	      float  var_a=C[a][b]/0.662;
	      
	      D[a]=A[a][b]*C[a][b]-B[a][b][c]/D[a];
	      C[a][b]=A[a-1][b-4]*D[a];
	    }

    return 0;
}