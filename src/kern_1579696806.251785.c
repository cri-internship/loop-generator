#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(460, 70, 860, "random");
	double **D = create_two_dim_double(790, 620, "random");
	double *A = create_one_dim_double(980, "random");
	double **C = create_two_dim_double(360, 970, "random");

	for (int c = 0; c < 855; c++)
	  for (int b = 4; b < 67; b++)
	    for (int a = 4; a < 460; a++)
	    {
	      
	      D[a][b]=D[a-4][b-4]*0.535;
	      
	      B[a][b][c]=B[a][b+3][c+5]/0.675;
	      
	      D[a][b]=A[a]+D[a][b]/C[a][b]*B[a][b][c];
	      A[a]=B[a][b][c]-D[a][b]*C[a][b];
	    }

    return 0;
}