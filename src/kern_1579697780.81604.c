#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(310, 980, "zeros");
	int **A = create_two_dim_int(450, 550, "zeros");
	int **B = create_two_dim_int(160, 710, "zeros");

	for (int c = 5; c < 546; c++)
	  for (int b = 5; b < 159; b++)
	    for (int a = 5; a < 159; a++)
	    {
	      
	      A[a][b]=A[a-5][b]*35;
	      
	      A[a][b]=A[a+1][b+4]+39;
	      
	      C[a][b]=C[a+2][b+5]/19;
	      
	      C[a][b]=B[a][b];
	      
	      int var_a=B[a][b]*42;
	      int var_b=B[a+1][b+1]+38;
	      
	      int var_c=B[a][b]/14;
	      int var_d=B[a-1][b-5]/40;
	    }

    return 0;
}