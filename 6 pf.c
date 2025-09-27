#include <stdio.h>

int main()
 {
    char room, action;

    printf("\n Enter room (L = Living Room, K = Kitchen): ");
    scanf(" %c", &room);
    printf("\n Enter action (L = Lights, T = Thermostat): ");
    scanf(" %c", &action);

    switch(room) 
	{
        case 'L':  
        case 'l':
            switch(action)
			 {
                case 'L':
                case 'l':
                    printf("\n Adjusting ambient lighting.\n");
                    break;
                case 'T':
                case 't':
                    printf("\n Setting living room temperature.\n");
                    break;
                default:
                    printf("\n Invalid action for Living Room.\n");
            }
           break;

        case 'K':   
        case 'k':
            switch(action) 
			{
                case 'L':
                case 'l':
                    printf("\n Turning on bright task lighting.\n");
                    break;
                case 'T':
                case 't':
                    printf("\n Setting kitchen temperature.\n");
                    break;
                default:
                    printf("\n Invalid action for Kitchen.\n");
            }
           
                 break;
        default:
            printf("\n Invalid room selection.\n");
    }

    return 0;
}

