#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(210, 980, "ones");
	double **B = create_two_dim_double(320, 420, "ones");
	double ***D = create_three_dim_double(50, 530, 390, "ones");
	double **A = create_two_dim_double(470, 960, "ones");

	for (int c = 0; c < 387; c++)
	  for (int b = 5; b < 420; b++)
	    for (int a = 5; a < 48; a++)
	    {
	      
	      C[a][b]=C[a-5][b-1]*0.988;
	      
	      C[a][b]=C[a-2][b-2]*0.661;
	      
	      B[a][b]=B[a-1][b-5]*0.944;
	      
	      C[a][b]=C[a][b+3]+D[a][b][c]*A[a][b]-B[a][b];
	      
	      D[a][b][c]=D[a+2][b+1][c+3]*0.566;
	      
	      A[a][b]=A[a+5][b+3]*0.719;
	    }

    return 0;
}