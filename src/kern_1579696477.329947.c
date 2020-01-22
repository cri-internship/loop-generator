#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(110, 650, "random");
	double *C = create_one_dim_double(1000, "random");
	double ***B = create_three_dim_double(620, 660, 850, "random");

	for (int c = 5; c < 845; c++)
	  for (int b = 4; b < 656; b++)
	    for (int a = 4; a < 615; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-2][c]-A[a][b];
	      
	      B[a][b][c]=B[a-2][b-2][c-5]-0.748;
	      
	      B[a][b][c]=B[a+5][b+4][c+1]/0.414;
	      
	      B[a][b][c]=B[a][b+2][c+5]/0.79;
	      
	      C[a]=0.543;
	      C[a-4]=0.28;
	      
	      B[a][b][c]=B[a][b][c]-A[a][b];
	      A[a][b]=B[a-4][b-4][c]*A[a][b];
	    }

    return 0;
}