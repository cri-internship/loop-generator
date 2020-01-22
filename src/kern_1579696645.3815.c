#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(750, 160, "zeros");
	double **C = create_two_dim_double(700, 470, "zeros");
	double **B = create_two_dim_double(930, 770, "zeros");
	double **A = create_two_dim_double(210, 900, "zeros");

	for (int c = 5; c < 160; c++)
	  for (int b = 4; b < 205; b++)
	    for (int a = 4; a < 205; a++)
	    {
	      
	      B[a][b]=B[a-4][b-5]/A[a][b]*C[a][b]+D[a][b];
	      
	      A[a][b]=A[a+5][b+1]*0.002;
	      
	      C[a][b]=B[a][b]*A[a][b];
	      C[a-4][b]=B[a][b]/D[a][b];
	      
	      C[a][b]=0.689;
	      
	      B[a][b]=0.876;
	      
	      D[a][b]=B[a][b]-0.54;
	      D[a-1][b]=B[a][b]/C[a][b];
	    }

    return 0;
}