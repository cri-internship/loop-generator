#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(100, 600, 770, "random");
	int ***A = create_three_dim_int(660, 240, 420, "random");

	for (int c = 5; c < 420; c++)
	  for (int b = 3; b < 240; b++)
	    for (int a = 5; a < 95; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b][c-5]+B[a][b][c];
	      
	      A[a][b][c]=A[a-3][b][c-4]+B[a][b][c];
	      
	      B[a][b][c]=B[a+3][b+4][c+4]+38;
	      
	      B[a][b][c]=B[a+3][b+3][c+4]+13;
	      
	      B[a][b][c]=B[a+2][b+4][c+1]-26;
	      
	      int var_a=A[a][b][c]-46;
	      int var_b=A[a][b-3][c-1]-43;
	      
	      int var_c=B[a][b][c]*38;
	      int var_d=B[a+5][b+1][c+1]*43;
	    }

    return 0;
}