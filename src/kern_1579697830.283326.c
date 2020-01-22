#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(90, 690, "zeros");
	int ***A = create_three_dim_int(580, 630, 320, "zeros");

	for (int c = 5; c < 320; c++)
	  for (int b = 4; b < 630; b++)
	    for (int a = 2; a < 90; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-4][c]/6;
	      
	      B[a][b]=B[a-2][b-1]/43;
	      
	      A[a][b][c]=26;
	      
	      int var_a=B[a][b]/9;
	      int var_b=B[a][b-4]+24;
	    }

    return 0;
}