#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(250, 620, "random");
	int ***C = create_three_dim_int(240, 50, 360, "random");
	int *B = create_one_dim_int(680, "random");

	for (int b = 5; b < 619; b++)
	  for (int a = 5; a < 246; a++)
	  {
	    
	     B[a]=B[a-4]+4;
	    
	     A[a][b]=A[a-5][b-5]*33;
	    
	     B[a]=B[a-2]/A[a][b];
	    
	     A[a][b]=A[a+3][b+1]*C[a][b][a]/B[a];
	    
	     B[a]=B[a+1]+A[a][b]/C[a][b][a];
	    
	     A[a][b]=A[a+4][b]-C[a][b][a];
	  }

    return 0;
}