#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(370, "random");
	int ***B = create_three_dim_int(420, 50, 890, "random");
	int ***C = create_three_dim_int(10, 970, 340, "random");
	int **E = create_two_dim_int(160, 480, "random");
	int *A = create_one_dim_int(910, "random");

	for (int c = 3; c < 338; c++)
	  for (int b = 1; b < 970; b++)
	    for (int a = 1; a < 8; a++)
	    {
	      
	      C[a][b][c]=2;
	      C[a][b-1][c-3]=12;
	      
	      C[a][b][c]=20;
	      
	      int var_a=A[a]*24;
	      int var_b=A[a-1]-37;
	    }

    return 0;
}