#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(690, "random");
	double **A = create_two_dim_double(750, 890, "random");
	double ***B = create_three_dim_double(930, 110, 90, "random");
	double ***D = create_three_dim_double(660, 550, 980, "random");

	for (int c = 2; c < 686; c++)
	  for (int b = 2; b < 686; b++)
	    for (int a = 2; a < 686; a++)
	    {
	      
	      C[a]=C[a+4]*D[a][b][c];
	      
	      A[a][b]=C[a]*A[a][b]/B[a][b][c]+D[a][b][c];
	      C[a]=C[a+1]/D[a][b][c]-B[a][b][c]*A[a][b];
	      
	      B[a][b][c]=C[a]/A[a][b];
	      D[a][b][c]=C[a-2]/D[a][b][c];
	    }

    return 0;
}