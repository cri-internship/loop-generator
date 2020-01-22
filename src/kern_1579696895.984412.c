#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(210, 290, "random");
	int **A = create_two_dim_int(270, 560, "random");

	for (int c = 5; c < 287; c++)
	  for (int b = 4; b < 208; b++)
	    for (int a = 4; a < 208; a++)
	    {
	      
	      A[a][b]=A[a-1][b-1]/32;
	      
	      B[a][b]=41;
	      B[a-4][b-4]=33;
	      
	      A[a][b]=37;
	      
	      A[a][b]=B[a][b]/A[a][b];
	      B[a][b]=B[a+2][b+3]+43;
	      
	      B[a][b]=A[a][b]*7;
	      A[a][b]=A[a-1][b-2]+3;
	      
	      int var_a=A[a][b]/40;
	      
	      A[a][b]=A[a][b]/29;
	      B[a][b]=A[a-3][b-5]-32;
	    }

    return 0;
}