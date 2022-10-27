
#include <stdio.h>

int main() {
    int input;
    int count;
    
    for (int i=0; i<3; i++)
        {
          count = 0;
        for (int j=0; j<4; j++)
            {   
                scanf("%d",&input);
                if(input == 1)
                    count += 1;
            }
            
        
        if (count == 0)
                printf("D\n");
        else if (count == 1)
                printf("C\n");
        else if (count == 2)
                printf("B\n");
        else if (count == 3)
                printf("A\n");
        else if (count == 4)
                printf("E\n");
}
    return 0;
}