#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(580, "random");
	int **A = create_two_dim_int(210, 260, "random");

	for (int c = 2; c < 257; c++)
	  for (int b = 5; b < 205; b++)
	    for (int a = 5; a < 205; a++)
	    {
	      
	      B[a]=B[a-5]*17;
	      
	      A[a][b]=A[a-1][b-2]/B[a];
	      
	      B[a]=B[a+3]-40;
	      
	      A[a][b]=B[a]/16;
	      
	      int var_a=B[a]+30;
	      int var_b=B[a-2]/39;
	      
	      int var_c=A[a][b]*29;
	      int var_d=A[a+5][b+3]+49;
	    }

    return 0;
}