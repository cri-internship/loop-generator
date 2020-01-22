#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(400, 290, "zeros");
	double ***B = create_three_dim_double(940, 50, 410, "zeros");

	for (int c = 0; c < 405; c++)
	  for (int b = 5; b < 49; b++)
	    for (int a = 5; a < 396; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-3][c]/A[a][b];
	      
	      A[a][b]=A[a-5][b-5]*0.987;
	      
	      A[a][b]=0.574;
	      
	      B[a][b][c]=B[a+5][b+1][c+5]-0.563;
	      
	      B[a][b][c]=A[a][b]*B[a][b][c];
	      A[a][b]=A[a+4][b+2]+B[a][b][c];
	    }

    return 0;
}