#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(480, 70, 740, "zeros");
	int ***B = create_three_dim_int(550, 540, 620, "zeros");

	for (int c = 1; c < 620; c++)
	  for (int b = 3; b < 69; b++)
	    for (int a = 5; a < 477; a++)
	    {
	      
	      B[a][b][c]=37;
	      B[a-5][b-3][c-1]=22;
	      
	      A[a][b][c]=B[a][b][c];
	      A[a+3][b+1][c+4]=B[a][b][c];
	    }

    return 0;
}