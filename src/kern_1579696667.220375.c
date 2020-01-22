#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(460, 720, 90, "random");
	int **C = create_two_dim_int(530, 910, "random");
	int ***A = create_three_dim_int(1000, 250, 1000, "random");

	for (int c = 1; c < 90; c++)
	  for (int b = 0; b < 247; b++)
	    for (int a = 0; a < 460; a++)
	    {
	      
	      A[a][b][c]=36;
	      A[a+5][b+3][c+3]=7;
	      
	      int var_a=B[a][b][c]/0;
	      int var_b=B[a][b][c-1]/48;
	      
	      int var_c=A[a][b][c]-14;
	      int var_d=A[a+4][b+2][c+1]/24;
	    }

    return 0;
}