#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(840, 740, 240, "ones");
	int *C = create_one_dim_int(240, "ones");
	int **D = create_two_dim_int(420, 310, "ones");
	int *A = create_one_dim_int(350, "ones");

	for (int c = 0; c < 310; c++)
	  for (int b = 0; b < 346; b++)
	    for (int a = 0; a < 346; a++)
	    {
	      
	      B[a][b][c]=D[a][b]*A[a];
	      D[a][b]=B[a][b][c]+C[a]/C[a];
	      
	      C[a]=A[a]+D[a][b]/B[a][b][c];
	      D[a][b]=A[a+4]/B[a][b][c]+C[a]-D[a][b];
	    }

    return 0;
}