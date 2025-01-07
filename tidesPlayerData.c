//Last Modified: 11/10/2024 10:36:50 PM
// Version: V1.2
/*
  Changelog V1.0 \time 10/28/2024 11:04AM
    - Added the getMerchantCode function to get the player's merchant code.
    - Added the getInitialCapital function to get the player's initial capital.
    - Added the getTargetProfitPercentage function to get the player's target profit.
 
  Changelog V1.2 \time 10/28/2024 1:04PM
    - Included internal documentation and function descriptions.
  
  Changelog V2.0 \time 11/10/2024 10:36:50 PM
    - Included changelogs.
    - Added on the getActionChoice function to get the player's choice of action from the
    main menu.

  Changelog V2.0.1 \time 11/11/2024 10:54:40 PM
    - Added on the getActionChoice function to get the player's choice of action from the
    main menu.

*/

#include "tidesLibrary.h"

/*
  This function takes the user's merchant code. The function will loop until a valid merchant
  code (integer between 0 and 999) is inputted. 

  Precondition: nMerchID is a non-negative integer.
  @param nMerchId - stores the player's merchant code.
*/
int 
getMerchantCode(int *nMerchID)
{
    int store = 0;
        printf("\n");
        printf("Please enter a valid Merchant Code (0-999): ");
        scanf("%d",&store); 
            while (store > 999 || store < 0) 
            {
                printf("\n");
                printf("Input invalid! Please enter a valid Merchant Code (0-999): ");
                scanf("%d", &store);
            };
        *nMerchID = store;
    return *nMerchID;
}

/*
  This function takes the user's desired initial capital. The function will loop until a 
  valid amount (non-zero integer) is inputted. 

  Precondition: nGold is a non-negative integer.
  @param nGold - stores the player's current gold.
*/
int 
getInitialCapital(int *nGold)
{
    int store;
       printf("\n");
       printf("Please enter how much gold you would like to begin with: ");
       scanf("%d", &store);
            while (store < 0 || store == 0)
            {
                printf("\n");
                printf("You cannot begin with no coins. Please enter how much gold you would like to begin with: ");
                scanf("%d", &store);
                
            }
        *nGold = store;
    return *nGold;
}

/*
  This function takes the user's desired target profit. The function will loop until a 
  valid target profit (integer with a value of atleast 20) is inputted. 

  Precondition: nTargetP is a non-negative integer.
  @param nTargetP - stores the player's target profit.
*/
int 
getTargetProfitPercentage(int *nTargetP)
{
    int store;
       printf("\n");
       printf("Please enter your desired target profit (>=20%%): ");
       scanf("%d", &store);
       printf("\n"); 
            while (store < 20)
            {
                printf("\n");
                printf("Your target profit must be atleast 20%%. Please enter your desired target profit (>=20%%): ");
                scanf("%d", &store);
                
            }
        *nTargetP = store;
        return *nTargetP; 
}



