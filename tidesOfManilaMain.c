/***************************************************************************
This is to certify that this project is my own work, based on my personal efforts in studying
and applying the concepts learned. I have constructed the functions and their respective
algorithms and corresponding code by myself. The program was run, tested, and debugged by
my own efforts. I further certify that I have not copied in part or whole or otherwise
plagiarized the work of other students and/or persons.

Khyle Raeka B. Villorente, DLSU ID# 12415200
***************************************************************************/

 /*
    Description: This program is text-based game called Tides of Manila. 
    The player acts a merchant who trades goods across various ports with 
    the overall goal of achieving a set profit goal before 30 in-game days pass.
    The program employs the use of various user-defined functions, conditional 
    statements, and iterative statements in order to execute the mechanics of the
    game.

    Programmed by: Khyle Raeka B. Villorente    S16-A
    Last Modified: 11/24/2024 11:40PM
    Version: V1.0

    [
     Acknowledgements:  
      + ASCII Art - https://www.asciiart.eu/ 
      + Random Number Generation - https://www.geeksforgeeks.org/generating-random-number-range-c/
   ]

   Changelog V1.0 \time 10/28/2024 11:04AM
   - Initialized variables and constants for the game.
   - Added the printWelcomeScreen function to display the welcome screen.
   - Added the getMerchantCode function to get the player's merchant code.
   - Added the getInitialCapital function to get the player's initial capital.
   - Added the getTargetProfitPercentage function to get the player's target profit.
   - Added the printMainHeader function to display the main menu header.

   Changelog V2.0 \time 11/10/2024 10:29:41 PM
   - Included internal documentation.
   - Included changelogs.
   - Added printGoodsPrices function to display the prices of goods in the current port.
   - Added printNavigationScreen function to display the main navigation screen.
   - Improved game UI by modifying ASCII art and formatted text.
   - Included <windows.h> to support UTF-8 encoding.

   Changelog V2.1 \time 11/11/2024 10:55:33 PM
   - Defined CARGO_MAX constant to limit the amount of cargo a player can carry in header file.
   - Added printNavigationScreen function to display the main navigation screen.
   - Added navigationAction function to handle the user's choice of action.
  
   Changelog V3.0 \time 11/22/2024 12:36:51 AM
   - Modified the main loop to adjust the game's win and lose conditions.
   - Modified the test cases in the switch to include the new functions.
*/

#include "tidesUserInterface.c"
#include "tidesPlayerData.c"
#include "tidesBackend.c"

int main (){
    int nPlayerID;
    int nDay = 0;
    int nGold = 0;
    int nTargetP = 0;
    int nChoice = 0;
    int nPChoice = 0;
    char cLocation = 'M';

    int nTotalCargo = 0;
    int nCocoCargo = 0;
    int nRiceCargo = 0;
    int nSilkCargo = 0;
    int nGunCargo = 0;

    int nCocoPrice = 0;
    int nRicePrice = 0; 
    int nSilkPrice = 0; 
    int nGunPrice = 0;
    int nCocoBuying = 0;
    int nRiceBuying = 0;
    int nSilkBuying = 0;
    int nGunBuying = 0;

    float fCurrentP = 0;
    int nCurrentProfit = 0;
    int nWin = 0;

    srand(time(0));
    printWelcomeScreen();
    getMerchantCode(&nPlayerID);
    getInitialCapital(&nGold);
    int nInitialCapital = nGold;
    getTargetProfitPercentage(&nTargetP);
    int nTargetProfit = nInitialCapital + nInitialCapital * ((float)nTargetP / 100);

    goodsPriceManila(&nCocoPrice, &nRicePrice, &nSilkPrice, &nGunPrice);
    printMainHeader(nPlayerID, nGold, nDay, nCurrentProfit, fCurrentP, cLocation);
    printCargoMarket( nTotalCargo, 
                      nCocoCargo, nRiceCargo, nSilkCargo, nGunCargo, 
                      nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
    printNavigationScreen();
    navigationAction(&nChoice);

    while (nChoice != 4 && nDay <= 30 && nWin != 1)
    {
        switch (nChoice)
        {
            case 1:
                printf("\n\n\n");
                printCargoMarket( nTotalCargo, 
                                  nCocoCargo, nRiceCargo, nSilkCargo, nGunCargo, 
                                  nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
                purchaseOptions();
                buysellAction(&nPChoice);
                purchaseMechanic( nCocoPrice, nRicePrice, nSilkPrice, nGunPrice, 
                                  nPChoice, &cLocation, &nGold, 
                                  &nTotalCargo, &nCocoCargo, &nRiceCargo, &nSilkCargo, &nGunCargo, 
                                  &nCocoBuying, &nRiceBuying, &nSilkBuying, &nGunBuying, 
                                  nInitialCapital, nTargetProfit, &nCurrentProfit, &fCurrentP);
                break;

            case 2:
                printf("\n\n\n");
                printCargoMarket( nTotalCargo, 
                                  nCocoCargo, nRiceCargo, nSilkCargo, nGunCargo, 
                                  nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
                tradeOptions();
                buysellAction(&nPChoice);
                tradingMechanic( nCocoPrice, nRicePrice, nSilkPrice, nGunPrice, 
                                 nPChoice, &cLocation, &nGold, 
                                 &nTotalCargo, &nCocoCargo, &nRiceCargo, &nSilkCargo, &nGunCargo, 
                                 nCocoBuying, nRiceBuying, nSilkBuying, nGunBuying, 
                                 nInitialCapital, nTargetProfit, &nCurrentProfit, &fCurrentP);
                break;

            case 3:
                printf("\n\n\n");
                travelMechanic(&cLocation, &nDay, &nCocoPrice, &nRicePrice, &nSilkPrice, &nGunPrice);
                break;
        }
        
        if (nCurrentProfit >= nTargetProfit)
        {
            nWin = 1;
        }
        else if (nCurrentProfit < nTargetProfit)
        {
            printMainHeader(nPlayerID, nGold, nDay, nCurrentProfit, fCurrentP, cLocation);
            printCargoMarket( nTotalCargo, 
                              nCocoCargo, nRiceCargo, nSilkCargo, nGunCargo, 
                              nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
            printNavigationScreen();
            navigationAction(&nChoice);
        }
    } 

    if (nWin == 1)
    {
        printYouWinScreen();
        printDashLine();
        printf("Number of Turns: %d\n", nDay);  
        printf("Gold: %d\n", nGold);
        printf("Profit: %d\n", nCurrentProfit);
    }
    else if (nDay > 30 || nChoice == 4)
    {
        printYouLostScreen();
        printDashLine();
        printf("Number of Turns: %d\n", nDay);  
        printf("Gold: %d\n", nGold);
        printf("Profit: %d\n", nCurrentProfit);
    }
    return 0;
}