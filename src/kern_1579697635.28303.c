#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(700, 340, 770, "ones");
	int *B = create_one_dim_int(550, "ones");

	for (int c = 0; c < 765; c++)
	  for (int b = 0; b < 335; b++)
	    for (int a = 3; a < 548; a++)
	    {
	      
	      B[a]=B[a+2]-42;
	      
	      B[a]=37;
	      
	      A[a][b][c]=B[a]/29;
	      B[a]=B[a-3]/A[a][b][c];
	      
	      int var_a=A[a][b][c]-45;
	      int var_b=A[a+5][b+5][c+5]*2;
	    }

    return 0;
}