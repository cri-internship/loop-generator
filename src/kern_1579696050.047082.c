#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(30, 290, "zeros");

	for (int c = 4; c < 287; c++)
	  for (int b = 5; b < 25; b++)
	    for (int a = 5; a < 25; a++)
	    {
	      
	      A[a][b]=A[a-5][b-4]*5;
	      
	      A[a][b]=14;
	      
	      int var_a=A[a][b]+47;
	      int var_b=A[a+2][b+3]-34;
	      
	      int var_c=A[a][b]+38;
	      int var_d=A[a-3][b-4]+19;
	    }

    return 0;
}