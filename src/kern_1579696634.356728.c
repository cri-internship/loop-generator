#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(1000, 120, "zeros");
	double ***B = create_three_dim_double(140, 790, 720, "zeros");
	double *A = create_one_dim_double(600, "zeros");
	double **C = create_two_dim_double(970, 850, "zeros");

	for (int c = 0; c < 720; c++)
	  for (int b = 5; b < 120; b++)
	    for (int a = 5; a < 136; a++)
	    {
	      
	      D[a][b]=D[a-3][b-5]-A[a]*B[a][b][c];
	      
	      A[a]=A[a-5]-0.144;
	      
	      A[a]=A[a+2]-0.644;
	      
	      C[a][b]=0.798+B[a][b][c]/A[a];
	      C[a-1][b-1]=A[a]*D[a][b];
	      
	      B[a][b][c]=0.163;
	      B[a+4][b+3][c]=0.109;
	      
	      D[a][b]=0.923;
	      
	      B[a][b][c]=C[a][b]/A[a]*0.038;
	      C[a][b]=C[a+5][b+4]+0.646/D[a][b]-B[a][b][c];
	    }

    return 0;
}