#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(940, 940, 760, "random");
	int ***A = create_three_dim_int(940, 80, 430, "random");
	int *D = create_one_dim_int(590, "random");
	int ***C = create_three_dim_int(890, 130, 770, "random");

	for (int c = 1; c < 429; c++)
	  for (int b = 2; b < 80; b++)
	    for (int a = 5; a < 890; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b-2][c-1]-B[a][b][c]/D[a]*A[a][b][c];
	      
	      A[a][b][c]=A[a][b-2][c-1]-C[a][b][c]+D[a]/B[a][b][c];
	      
	      A[a][b][c]=D[a];
	      
	      C[a][b][c]=34;
	    }

    return 0;
}