#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(980, 190, 630, "random");
	int ***B = create_three_dim_int(170, 740, 1000, "random");

	for (int c = 4; c < 628; c++)
	  for (int b = 3; b < 187; b++)
	    for (int a = 5; a < 170; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-3][c-4]*13;
	      
	      A[a][b][c]=B[a][b][c];
	      A[a+5][b+3][c+2]=B[a][b][c];
	      
	      int var_a=A[a][b][c]-2;
	      int var_b=A[a-5][b][c]/9;
	    }

    return 0;
}