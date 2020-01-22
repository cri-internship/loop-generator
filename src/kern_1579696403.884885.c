#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(160, "ones");
	int **B = create_two_dim_int(280, 610, "ones");

	for (int c = 1; c < 606; c++)
	  for (int b = 4; b < 157; b++)
	    for (int a = 4; a < 157; a++)
	    {
	      
	      A[a]=A[a-4]*B[a][b];
	      
	      B[a][b]=B[a][b+2]+37;
	      
	      A[a]=A[a+1]*B[a][b];
	      
	      B[a][b]=B[a][b+4]*A[a];
	      
	      B[a][b]=B[a][b]*A[a];
	      A[a]=B[a-2][b-1]*A[a];
	      
	      int var_a=B[a][b]-43;
	      int var_b=B[a-2][b]*18;
	      
	      B[a][b]=A[a]+49;
	      A[a]=A[a+3]/B[a][b];
	    }

    return 0;
}