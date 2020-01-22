#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(540, 610, 470, "random");
	double **B = create_two_dim_double(880, 50, "random");
	double ***A = create_three_dim_double(620, 730, 610, "random");

	for (int c = 5; c < 470; c++)
	  for (int b = 5; b < 610; b++)
	    for (int a = 4; a < 540; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-3][c-5]+B[a][b]/0.532;
	      
	      A[a][b][c]=A[a][b-5][c-3]*0.467;
	      
	      B[a][b]=C[a][b][c]*A[a][b][c]-B[a][b];
	      C[a][b][c]=C[a-1][b-2][c-4]*B[a][b];
	    }

    return 0;
}