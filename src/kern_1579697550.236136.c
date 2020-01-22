#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(260, 720, "zeros");
	double ***B = create_three_dim_double(240, 200, 280, "zeros");
	double *C = create_one_dim_double(510, "zeros");
	double **A = create_two_dim_double(330, 100, "zeros");

	for (int c = 0; c < 100; c++)
	  for (int b = 5; b < 326; b++)
	    for (int a = 5; a < 326; a++)
	    {
	      
	      C[a]=C[a-5]-A[a][b]*B[a][b][c]/D[a][b];
	      
	      A[a][b]=A[a+4][b]/C[a]*B[a][b][c]+C[a];
	      
	      B[a][b][c]=C[a]+B[a][b][c];
	      A[a][b]=C[a+3]/A[a][b]+D[a][b];
	    }

    return 0;
}