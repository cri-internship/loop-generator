#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(720, 210, 890, "zeros");
	int **B = create_two_dim_int(680, 340, "zeros");

	for (int c = 5; c < 886; c++)
	  for (int b = 2; b < 207; b++)
	    for (int a = 5; a < 680; a++)
	    {
	      
	      B[a][b]=B[a][b+4]*39;
	      
	      A[a][b][c]=A[a+4][b+1][c+4]+1;
	      
	      A[a][b][c]=A[a+2][b+3][c+3]/7;
	      
	      int var_a=B[a][b]-19;
	      int var_b=B[a-1][b-2]/6;
	    }

    return 0;
}