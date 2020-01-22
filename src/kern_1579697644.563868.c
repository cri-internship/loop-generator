#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(620, "random");
	int ***C = create_three_dim_int(350, 600, 330, "random");
	int *B = create_one_dim_int(820, "random");
	int *D = create_one_dim_int(910, "random");

	for (int d = 2; d < 619; d++)
	  for (int c = 2; c < 619; c++)
	    for (int b = 2; b < 619; b++)
	      for (int a = 2; a < 619; a++)
	      {
	        
	       B[a]=B[a-2]*C[a][b][c]+D[a]-A[a];
	        
	       float  var_a=B[a]*25;
	        
	       D[a]=D[a+3]/26;
	        
	       B[a]=B[a+2]+A[a]*2;
	        
	       B[a]=B[a]*C[a][b][c];
	       B[a]=33-D[a];
	        
	       A[a]=B[a];
	       A[a+1]=40+B[a]/C[a][b][c];
	      }

    return 0;
}