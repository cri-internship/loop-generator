#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(180, 590, 940, "zeros");
	double **D = create_two_dim_double(480, 840, "zeros");
	double ***B = create_three_dim_double(680, 160, 760, "zeros");
	double ***C = create_three_dim_double(770, 120, 20, "zeros");

	for (int c = 4; c < 758; c++)
	  for (int b = 3; b < 159; b++)
	    for (int a = 4; a < 179; a++)
	    {
	      
	      A[a][b][c]=A[a-3][b-3][c-4]/0.669;
	      
	      A[a][b][c]=A[a+1][b+2][c+2]+D[a][b];
	      
	      B[a][b][c]=C[a][b][c]/A[a][b][c];
	      B[a+1][b+1][c+2]=0.929+D[a][b];
	      
	      D[a][b]=B[a][b][c]-B[a][b][c];
	      D[a-4][b-2]=A[a][b][c]*0.496;
	    }

    return 0;
}