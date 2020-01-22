#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(350, 820, 940, "random");
	int ***A = create_three_dim_int(570, 930, 370, "random");
	int **C = create_two_dim_int(330, 60, "random");
	int *D = create_one_dim_int(880, "random");

	for (int c = 3; c < 370; c++)
	  for (int b = 5; b < 820; b++)
	    for (int a = 2; a < 350; a++)
	    {
	      
	      D[a]=D[a+1]/A[a][b][c]+C[a][b];
	      
	      D[a]=3;
	      
	      B[a][b][c]=D[a];
	      B[a-1][b-2][c-1]=D[a]/A[a][b][c]*C[a][b];
	      
	      A[a][b][c]=36;
	      A[a-2][b-5][c-3]=46;
	    }

    return 0;
}