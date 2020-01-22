#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(650, 40, "zeros");
	int **D = create_two_dim_int(710, 580, "zeros");
	int **A = create_two_dim_int(350, 150, "zeros");
	int *B = create_one_dim_int(970, "zeros");

	for (int c = 4; c < 40; c++)
	  for (int b = 1; b < 349; b++)
	    for (int a = 1; a < 349; a++)
	    {
	      
	      B[a]=D[a][b]-C[a][b];
	      B[a]=B[a]*A[a][b];
	      
	      A[a][b]=A[a+1][b+3]+44;
	      
	      D[a][b]=D[a+3][b+4]-B[a]+A[a][b]/C[a][b];
	      
	      A[a][b]=B[a]+C[a][b]*D[a][b];
	      
	      C[a][b]=3;
	      C[a][b]=21;
	      
	      C[a][b]=D[a][b]*B[a]-44/C[a][b];
	      A[a][b]=D[a+4][b]*C[a][b];
	    }

    return 0;
}