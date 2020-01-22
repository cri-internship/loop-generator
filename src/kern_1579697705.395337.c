#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(470, 380, 390, "random");
	double ***B = create_three_dim_double(660, 750, 650, "random");
	double **C = create_two_dim_double(450, 490, "random");
	double **D = create_two_dim_double(920, 620, "random");

	for (int c = 2; c < 390; c++)
	  for (int b = 1; b < 380; b++)
	    for (int a = 2; a < 450; a++)
	    {
	      
	      A[a][b][c]=A[a][b][c-1]/0.636;
	      
	      B[a][b][c]=0.408;
	      B[a+1][b][c]=0.082;
	      
	      A[a][b][c]=B[a][b][c]*C[a][b]+D[a][b];
	      
	      A[a][b][c]=C[a][b]/A[a][b][c]-0.547;
	    }

    return 0;
}