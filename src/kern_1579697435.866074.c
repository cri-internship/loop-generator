#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(780, "random");
	int **C = create_two_dim_int(100, 580, "random");
	int *B = create_one_dim_int(120, "random");
	int *A = create_one_dim_int(50, "random");
	int *D = create_one_dim_int(390, "random");

	for (int c = 0; c < 576; c++)
	  for (int b = 4; b < 50; b++)
	    for (int a = 4; a < 50; a++)
	    {
	      
	      A[a]=A[a-4]+D[a]*E[a]/B[a];
	      
	      B[a]=B[a+1]-C[a][b]+30*C[a][b]/E[a];
	      
	      B[a]=B[a+4]-0;
	      
	      C[a][b]=46;
	      C[a+3][b+4]=8;
	      
	      D[a]=E[a]+C[a][b]*B[a]-A[a];
	      D[a+3]=B[a]-A[a];
	      
	      C[a][b]=E[a]/B[a]-D[a]*A[a];
	      D[a]=E[a-4]-B[a]/C[a][b]+D[a];
	    }

    return 0;
}