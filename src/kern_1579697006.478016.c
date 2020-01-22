#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(210, 450, 660, "zeros");
	double **A = create_two_dim_double(950, 230, "zeros");
	double **C = create_two_dim_double(210, 210, "zeros");
	double **D = create_two_dim_double(660, 410, "zeros");

	for (int c = 0; c < 659; c++)
	  for (int b = 3; b < 207; b++)
	    for (int a = 4; a < 205; a++)
	    {
	      
	      A[a][b]=A[a-4][b-3]+0.669;
	      
	      A[a][b]=A[a][b+1]-0.386;
	      
	      A[a][b]=A[a+3][b]*B[a][b][c]+C[a][b];
	      
	      A[a][b]=A[a+5][b]-0.023;
	      
	      C[a][b]=0.068;
	      C[a][b+3]=0.388;
	      
	      B[a][b][c]=0.576;
	      B[a][b+2][c+1]=0.354;
	      
	      B[a][b][c]=0.558;
	    }

    return 0;
}