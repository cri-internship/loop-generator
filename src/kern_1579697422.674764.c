#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(130, 770, "ones");
	int ***B = create_three_dim_int(870, 880, 180, "ones");
	int *A = create_one_dim_int(30, "ones");
	int ***C = create_three_dim_int(350, 490, 720, "ones");

	for (int b = 5; b < 875; b++)
	  for (int a = 5; a < 27; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-5][a-5]/A[a]-D[a][b]+C[a][b][a];
	    
	     A[a]=A[a-5]*B[a][b][a];
	    
	     A[a]=A[a+3]/2+B[a][b][a];
	    
	     A[a]=A[a+1]+23;
	    
	     A[a]=A[a+2]/C[a][b][a];
	    
	     B[a][b][a]=B[a+4][b+5][a+3]+A[a]-D[a][b]*6;
	  }

    return 0;
}