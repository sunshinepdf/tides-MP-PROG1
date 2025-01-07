//Last Modified: 11/10/2024 10:26:07 PM
//t Version: V2.0
/*
    Changelog V2.0 \time 10/28/2024 1:40PM
    - Added the priceRandomizer function to generatei random prices for the goods.
    - Added the goodsPriceManila function to generate the prices of goods in the Manila port.
    - Added the goodsPriceSapa function to generate the prices of goods in the Sapa port.
    - Added the goodsPricePandakan function to generate the prices of goods in the Pandakan port.
    - Added the goodsPriceTondo function to generate the prices of goods in the Tondo port.
    - Added the printGoodsForSale function to display the prices of goods in the current port.
    - Included internal documentation and function descriptions.

    Changelog V2.1 \time 11/10/2024 10:26:07 PM
    - Included changelogs.
    - Added the printGoodsPrices function to display the prices of the goods in the current port.

    Changelog V2.2 \time 11/11/2024 10:52:44 PM
    - Added the purchaseMechanic function to handle the purchasing mechanic.
    - Added the printGoodsForSale function to display the purchase menu.

    Changelog V2.3 \time 11/13/2024 8:03:18 AM
    - Fixed printGoodsForSale and purchaseMechanic
    
    Changelog V3.0 \time 11/22/2024 12:36:51 AM
    - Fixed the tradingMechanic function and purchaseMechanic function.
    - Removed printGoodsForSale function.
    - Removed printGoodsPrices function.
    - Added the travelMechanic function to handle the travel mechanic.
*/

#include "tidesLibrary.h"

/*
*   Description: This function generates a random price for a good within a given range. 
*   The function makes use of the time.h library to seed the random number generator and the
*   rand() function to generate a random number. 
*   
*   Precondition: nMin and nMax are non-negative integers.
*   @param nMin - the minimum price of the good.
*   @param nMax - the maximum price of the good.
*   @param nPrice - stores the generated price of the good.
*/
void 
priceRandomizer (int nMin, int nMax, int *nPrice)
{
    *nPrice = rand() % ( nMax - nMin + 1) + nMin; 
}

/*
*   Description: This function generates the prices of goods in the Manila port. 
*   The function makes use of the priceRandomizer function to generate 
*   the prices of the goods.
*
*   Additionally, the function uses the predefined constants in the tidesLibrary.h file to
*   set the price range of the goods in the Manila port.
*   
*   @param nCocoPrice - stores the price of coconuts in Manila.
*   @param nRicePrice - stores the price of rice in Manila.
*   @param nSilkPrice - stores the price of silk in Manila.
*   @param nGunPrice - stores the price of guns in Manila.
*/
void 
goodsPriceManila (int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice)
{
    int nPrice1;
    int nPrice2;
    int nPrice3;
    int nPrice4;

    priceRandomizer(COCONUTMNL_MIN, COCONUTMNL_MAX, &nPrice1);
    priceRandomizer(RICEMNL_MIN, RICEMNL_MAX, &nPrice2);
    priceRandomizer(SILKMNL_MIN, SILKMNL_MAX, &nPrice3);
    priceRandomizer(GUNMNL_MIN, GUNMNL_MAX, &nPrice4);

    *nCocoPrice = nPrice1;
    *nRicePrice = nPrice2;
    *nSilkPrice = nPrice3;
    *nGunPrice = nPrice4;
}


/*
*   Description: This function generates the prices of goods in the Pandakan port. 
*   The function makes use of the priceRandomizer function to generate 
*   the prices of the goods.
*
*   Additionally, the function uses the predefined constants in the tidesLibrary.h file to
*   set the price range of the goods in the Pandakan port.
*
*   @param nCocoPrice - stores the price of coconuts in Pandakan.
*   @param nRicePrice - stores the price of rice in Pandakan.
*   @param nSilkPrice - stores the price of silk in Pandakan.
*   @param nGunPrice - stores the price of guns in Pandakan.
*/
void 
goodsPricePandakan (int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice)
{
    int nPrice1;
    int nPrice2;
    int nPrice3;
    int nPrice4;

    priceRandomizer(COCONUTPDK_MIN, COCONUTPDK_MAX, &nPrice1);
    priceRandomizer(RICEPDK_MIN, RICEPDK_MAX, &nPrice2);
    priceRandomizer(SILKPDK_MIN, SILKPDK_MAX, &nPrice3);
    priceRandomizer(GUNPDK_MIN, GUNPDK_MAX, &nPrice4);

    *nCocoPrice = nPrice1;
    *nRicePrice = nPrice2;
    *nSilkPrice = nPrice3;
    *nGunPrice = nPrice4;
}

/*
*   This function generates the prices of goods in the Tondo port. 
*   The function makes use of the priceRandomizer function to generate 
*   the prices of the goods.
*
*   Additionally, the function uses the predefined constants in the tidesLibrary.h file to
*   set the price range of the goods in the Tondo port.
*   
*   @param nCocoPrice - stores the price of coconuts in Tondo.
*   @param nRicePrice - stores the price of rice in Tondo.
*   @param nSilkPrice - stores the price of silk in Tondo.
*   @param nGunPrice - stores the price of guns in Tondo.
*/
void 
goodsPriceTondo(int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice)
{
    int nPrice1;
    int nPrice2;
    int nPrice3;
    int nPrice4;

    priceRandomizer(COCONUTTONDO_MIN, COCONUTTONDO_MAX, &nPrice1);
    priceRandomizer(RICETONDO_MIN, RICETONDO_MAX, &nPrice2);
    priceRandomizer(SILKTONDO_MIN, SILKTONDO_MAX, &nPrice3);
    priceRandomizer(GUNTONDO_MIN, GUNTONDO_MAX, &nPrice4);

    *nCocoPrice = nPrice1;
    *nRicePrice = nPrice2;
    *nSilkPrice = nPrice3;
    *nGunPrice = nPrice4;
}

/*
*   This function generates the prices of goods in the Sapa port.
*   The function makes use of the priceRandomizer function to generate
*   the prices of the goods.
*
*   Additionally, the function uses the predefined constants in the tidesLibrary.h file to
*   set the price range of the goods in the Sapa port.
*
*   @param nCocoPrice - stores the price of coconuts in Sapa.
*   @param nRicePrice - stores the price of rice in Sapa.
*   @param nSilkPrice - stores the price of silk in Sapa.
*   @param nGunPrice - stores the price of guns in Sapa.
*/

void 
goodsPriceSapa(int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice)
{
    int nPrice1;
    int nPrice2;
    int nPrice3;
    int nPrice4;

    priceRandomizer(COCONUTSAPA_MIN, COCONUTSAPA_MAX, &nPrice1);
    priceRandomizer(RICESAPA_MIN, RICESAPA_MAX, &nPrice2);
    priceRandomizer(SILKSAPA_MIN, SILKSAPA_MAX, &nPrice3);
    priceRandomizer(GUNSAPA_MIN, GUNSAPA_MAX, &nPrice4);

    *nCocoPrice = nPrice1;
    *nRicePrice = nPrice2;
    *nSilkPrice = nPrice3;
    *nGunPrice = nPrice4;
}

/*
*   This function handles the purchasing mechanic of the game.
*   This function accounts the user's choice of which item to purchase and the quantity
*   of items they wish to purchase.
*   
*   The function also checks if the user has enough gold to purchase the goods and if the user
*   has enough cargo space to store the goods. Each purchase is then deducted from the user's
*   gold and added to the user's cargo.
*
*   Additionally, the function calculates the user's current profit and profit percentage to account
*   for the user's progress for profit.
*
*   @param nCocoPrice - stores the price of coconuts in the current port.
*   @param nRicePrice - stores the price of rice in the current port.
*   @param nSilkPrice - stores the price of silk in the current port.
*   @param nGunPrice - stores the price of guns in the current port.
*   @param cLocation - stores the current location of the player.
*   @param nChoice - stores the user's choice of action.
*   @param nGold - stores the player's current gold.
*   @param nCargo - stores the total amount of cargo the player is carrying.
*   @param nCocoCargo - stores the amount of coconuts the player is carrying.
*   @param nRiceCargo - stores the amount of rice the player is carrying.
*   @param nSilkCargo - stores the amount of silk the player is carrying.
*   @param nGunCargo - stores the amount of guns the player is carrying.
*   @param nCocoBuyingPrice - stores the price of coconuts the player bought.
*   @param nRiceBuyingPrice - stores the price of rice the player bought.
*   @param nSilkBuyingPrice - stores the price of silk the player bought.
*   @param nGunBuyingPrice - stores the price of guns the player bought.
*   @param nInitialCapital - stores the player's initial capital.
*   @param nTargetProfit - stores the player's target profit.
*   @param nCurrentProfit - stores the player's current profit.
*   @param fCurrentP - stores the player's current profit percentage.
*
*/

void 
purchaseMechanic( int nCocoPrice, int nRicePrice, int nSilkPrice, int nGunPrice, 
                  int nChoice, char *cLocation, int *nGold, 
                  int *nCargo, int *nCocoCargo, int *nRiceCargo, int *nSilkCargo, int *nGunCargo, 
                  int *nCocoBuyingPrice, int *nRiceBuyingPrice, int *nSilkBuyingPrice, int *nGunBuyingPrice, 
                  int nInitialCapital, int nTargetProfit, int *nCurrentProfit, float *fCurrentP)
{
    int nQty = 0;

    switch (nChoice)
    { 
        case 1: 
        printDashLine();
        printf("\n");
        printf("How many coconut crates would you like to purchase? ");
        scanf(" %d", &nQty);
            if (*nCargo + nQty > CARGO_MAX)
             { 
                printf("You do not have enough space in your ship to store that many coconuts.\n");
                printf("Come back when you've sold off some goods.\n");
             } 
             else if (*nGold < nCocoPrice * nQty)
             {
                printf("You do not have enough gold to purchase that many coconuts.\n");
                printf("Come back when you've earned more gold.\n");
             } 
             else if (nQty < 0)
             {
                printf("Now you're just messing with me.\n");
                printf("Come back when you're no longer trying to purchase a nonexistent amount.\n");
             }
             else if (*nCargo < CARGO_MAX && *nGold >= nCocoPrice * nQty)
             {
                *nGold -= nCocoPrice * nQty;
                *nCocoBuyingPrice = nCocoPrice;
                printf("You have successfully purchased %d coconuts!\n", nQty);
                *nCocoCargo += nQty;
                printf("The crates have successfully been loaded onto your ship.\n");
             }
        break;

        case 2:
        printDashLine();
        printf("\n");
        printf("How many bags of rice would you like to purchase? ");
        scanf(" %d", &nQty);
            if (*nCargo + nQty > CARGO_MAX)
             { 
                printf("You do not have enough space in your ship to store that many bags of rice.\n");
                printf("Come back when you've sold off some goods.\n");
             }
             else if (*nGold < nRicePrice * nQty)
             {
                printf("You do not have enough gold to purchase that many bags of rice.\n");
                printf("Come back when you've earned more gold.\n");
             } 
             else if (nQty < 0)
             {
                printf("Now you're just messing with me.\n");
                printf("Come back when you're no longer trying to purchase a nonexistent amount.\n");
             }
             else if (*nCargo < CARGO_MAX && *nGold >= nRicePrice * nQty)
             {
                *nGold -= nRicePrice * nQty;
                *nRiceBuyingPrice = nRicePrice;
                printf("You have successfully purchased %d bags of rice!\n", nQty);
                *nRiceCargo = nQty;
                printf("The bags have successfully been loaded onto your ship.\n");
             }
        break;

        case 3:
        printDashLine();
        printf("\n");
        printf("How many rolls of silk would you like to purchase? ");
        scanf(" %d", &nQty);
            if (*nCargo + nQty > CARGO_MAX)
             { 
                printf("You do not have enough space in your ship to store that much silk.\n");
                printf("Come back when you've sold off some goods.\n");
             }
             else if (*nGold < nSilkPrice * nQty)
             {
                printf("You do not have enough gold to purchase that much silk.\n");
                printf("Come back when you've earned more gold.\n");
             }
             else if (nQty < 0)
             {
                printf("Now you're just messing with me.\n");
                printf("Come back when you're no longer trying to purchase a nonexistent amount.\n");
             }
             else if (*nCargo < CARGO_MAX && *nGold >= nSilkPrice * nQty)
             {
                *nGold -= nSilkPrice * nQty;
                *nSilkBuyingPrice = nSilkPrice;
                printf("You have successfully purchased %d rolls of silk!\n", nQty);
                *nSilkCargo += nQty;
                printf("The rolls have successfully been loaded onto your ship.\n");
             }
        break;

        case 4:
        printDashLine();
        printf("\n");
        printf("How many crates of guns would you like to purchase? ");
        scanf(" %d", &nQty);
            if (*nCargo + nQty > CARGO_MAX)
             { 
                printf("You do not have enough space in your ship to store that many crates of guns.\n");
                printf("Come back when you've sold off some goods.\n");
             }
             else if (*nGold < nGunPrice * nQty)
             {
                printf("You do not have enough gold to purchase that many crates of guns.\n");
                printf("Come back when you've earned more gold.\n");
             }
             else if (nQty < 0)
             {
                printf("Now you're just messing with me.\n");
                printf("Come back when you're no longer trying to purchase a nonexistent amount.\n");
             }
             else if (*nCargo < CARGO_MAX && *nGold >= nGunPrice * nQty)
             {
                *nGold -= nGunPrice * nQty;
                *nGunBuyingPrice = nGunPrice;
                printf("You have successfully purchased %d crates of guns!\n", nQty);
                *nGunCargo += nQty;
                printf("The crates have successfully been loaded onto your ship.\n");
             }
        break;

        case 5:
        break;
    }
    *nCargo = *nCocoCargo + *nRiceCargo + *nSilkCargo + *nGunCargo;
    *nCurrentProfit = *nGold - nInitialCapital;
    *fCurrentP = ((float)(*nCurrentProfit) / nTargetProfit) * 100.0;
    printDashLine();
    printf("\n");
    if (nChoice == 5)
    {
        printf("You have chosen to return to the main menu.\n");
        printf("You now have %d gold and %d units of cargo space left.\n", *nGold, CARGO_MAX - *nCargo);
    }
    else
    {
        printf("You now have %d gold and %d units of cargo space left.\n", *nGold, CARGO_MAX - *nCargo);
    }	
}

/*
*   This function handles the trading mechanic of the game.
*   This function accounts the user's choice of which item to trade and the quantity
*   of items they wish to trade.
*   
*   The function also checks if the user has enough cargo to trade the goods. Each trade is then 
*   added to the user's gold and deducted from the user's cargo.
*
*   Additionally, the function calculates the user's current profit and profit percentage to account
*   for the user's progress for profit.
*
*   @param nCocoPrice_S - stores the price of coconuts in the current port.
*   @param nRicePrice_S - stores the price of rice in the current port.
*   @param nSilkPrice_S - stores the price of silk in the current port.
*   @param nGunPrice_S - stores the price of guns in the current port.
*   @param cLocation - stores the current location of the player.
*   @param nChoice - stores the user's choice of action.
*   @param nGold - stores the player's current gold.
*   @param nCargo - stores the total amount of cargo the player is carrying.
*   @param nCocoCargo - stores the amount of coconuts the player is carrying.
*   @param nRiceCargo - stores the amount of rice the player is carrying.
*   @param nSilkCargo - stores the amount of silk the player is carrying.
*   @param nGunCargo - stores the amount of guns the player is carrying.
*   @param nCocoBuyingPrice - stores the price of coconuts the player bought.
*   @param nRiceBuyingPrice - stores the price of rice the player bought.
*   @param nSilkBuyingPrice - stores the price of silk the player bought.
*   @param nGunBuyingPrice - stores the price of guns the player bought.
*   @param nInitialCapital - stores the player's initial capital.
*   @param nTargetProfit - stores the player's target profit.
*   @param nCurrentProfit - stores the player's current profit.
*   @param fCurrentP - stores the player's current profit percentage.
*/
void 
tradingMechanic( int nCocoPrice_S, int nRicePrice_S, int nSilkPrice_S, int nGunPrice_S, 
                 int nChoice, char *cLocation, int *nGold, 
                 int *nCargo, int *nCocoCargo, int *nRiceCargo, int *nSilkCargo, int *nGunCargo, 
                 int nCocoBuyingPrice, int nRiceBuyingPrice, int nSilkBuyingPrice, int nGunBuyingPrice, 
                 int nInitialCapital, int nTargetProfit, int *nCurrentProfit, float *fCurrentP)
{
    int nQty = 0;
    int nPPU = 0;
    switch (nChoice)
    { 
        case 1: 
        printDashLine();
        printf("\n");
        printf("How many coconut crates would you like to sell? ");
        scanf(" %d", &nQty);
            if (nQty > *nCocoCargo)
            {
                printf("Don't play with me now. You don't have that many crates of coconuts.\n");
            }
            else if (nQty < 0)
            {
                printf("You can't sell nothing. Come back when you've got something to sell.\n");
            }
            else if (nQty <= *nCocoCargo)
            {
                *nGold += nCocoPrice_S * nQty;
                nPPU = (nCocoPrice_S - nCocoBuyingPrice) * nQty;

                printf("You have successfully sold %d crates of coconuts, and", nQty);
                if (nPPU > 0)
                {
                    printf(" earned %dG and made %dG in profit!\n", *nGold, nPPU);
                    printf("Keep it up and you'll be the best merchant in no time!\n");
                }
                else if (nPPU < 0)
                {
                    printf(" earned %dG. You lost %dG in profit.\n",*nGold, -nPPU);
                    printf("You sold the crates for less than you bought them for.\n");
                }
                *nCocoCargo -= nQty;
                printf("The crates have successfully been unloaded from your ship.\n");
            }
        break;

        case 2:
        printDashLine();
        printf("\n");
        printf("How many bags of rice would you like to sell? ");
        scanf(" %d", &nQty);
            if (nQty > *nRiceCargo)
            {
                printf("Don't play with me now. You don't have that many bags of rice.\n");
            }
            else if (nQty < 0)
            {
                printf("You can't sell nothing. Come back when you've got something to sell.\n");
            }
            else if (nQty <= *nRiceCargo)
            {
                *nGold += nRicePrice_S * nQty;
                nPPU = (nRicePrice_S - nRiceBuyingPrice) * nQty;

                printf("You have successfully sold %d bags of rice, and", nQty);
                if (nPPU > 0)
                {
                    printf(" earned %dG and made %dG in profit!\n", *nGold, nPPU);
                    printf("Keep it up and you'll be the best merchant in no time!\n");
                }
                else if (nPPU < 0)
                {
                    printf(" earned %dG. You lost %dG in profit.\n",*nGold, -nPPU);
                    printf("You sold the bags for less than you bought them for.\n");
                }
                *nRiceCargo -= nQty;
                printf("The bags have successfully been unloaded from your ship.\n");
            }
        break;

        case 3:
        printDashLine();
        printf("\n");
        printf("How many rolls of silk would you like to sell? ");
        scanf(" %d", &nQty);
            if (nQty > *nSilkCargo)
            {
                printf("Don't play with me now. You don't have that many rolls of silk.\n");
            }
            else if (nQty < 0)
            {
                printf("You can't sell nothing. Come back when you've got something to sell.\n");
            }
            else if (nQty <= *nSilkCargo)
            {
                *nGold += nSilkPrice_S * nQty;
                nPPU = (nSilkPrice_S - nSilkBuyingPrice) * nQty;

                printf("You have successfully sold %d rolls of silk, and", nQty);
                if (nPPU > 0)
                {
                    printf(" earned %dG and made %dG in profit!\n", *nGold, nPPU);
                    printf("Keep it up and you'll be the best merchant in no time!\n");
                }
                else if (nPPU < 0)
                {
                    printf(" earned %dG. You lost %dG in profit.\n",*nGold, -nPPU);
                    printf("You sold the rolls for less than you bought them for.\n");
                }
                *nSilkCargo -= nQty;
                printf("The rolls have successfully been unloaded from your ship.\n");
            }
        break;

        case 4:
        printDashLine();
        printf("\n");
        printf("How many crates of guns would you like to sell? ");
        scanf(" %d", &nQty);
            if (nQty > *nGunCargo)
            {
                printf("Don't play with me now. You don't have that many crates of guns.\n");
            }
            else if (nQty < 0)
            {
                printf("You can't sell nothing. Come back when you've got something to sell.\n");
            }
            else if (nQty <= *nGunCargo)
            {
                *nGold += nGunPrice_S * nQty;
                nPPU = (nGunPrice_S - nGunBuyingPrice) * nQty;

                printf("You have successfully sold %d crates of guns, and", nQty);
                if (nPPU > 0)
                {
                    printf(" earned %dG and made %dG in profit!\n", *nGold, nPPU);
                    printf("Keep it up and you'll be the best merchant in no time!\n");
                }
                else if (nPPU < 0)
                {
                    printf(" earned %dG. You lost %dG in profit.\n",*nGold, -nPPU);
                    printf("You sold the crates for less than you bought them for.\n");
                }
                *nGunCargo -= nQty;
                printf("The crates have successfully been unloaded from your ship.\n");
            }
        break;

        case 5:
        break;
    }
    *nCargo = *nCocoCargo + *nRiceCargo + *nSilkCargo + *nGunCargo;
    *nCurrentProfit = *nGold - nInitialCapital;
    *fCurrentP = ((float)(*nCurrentProfit) / nTargetProfit) * 100.0;
    printDashLine();
    printf("\n");
    if (nChoice == 5)
    {
        printf("You have chosen to return to the main menu.\n");
        printf("You now have %d gold and %d units of cargo space left.\n", *nGold, CARGO_MAX - *nCargo);
    }
    else
    {
        printf("You now have %d gold and %d units of cargo space left.\n", *nGold, CARGO_MAX - *nCargo);
    }
    
}

/*
*   This function handles the trading mechanic of the game. 
*   The function accounts for the player's current location, and generates the prices
*   accordingly using the goodsPrice functions.
*
*   Additionally, the function also prints the available options for travel and 
*   assigns the value of the player's chosen destination as their current location once
*   the travel is complete. The value of nDay is then incremented to account for the 
*   the travel.
*
*   @param cLocation - stores the user's location.
*   @param nDay - stores the number of turns the user has taken.
*   @param nCocoPrice - stores the generated price for coconuts. 
*   @param nRicePrice - stores the generated price for rice.
*   @param nSilkPrice - stores the generated price for silk.
*   @param nGunPrice - stores the generated price for guns.
*/
void 
travelMechanic(char *cLocation, int *nDay, int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice) {
    char cTravelChoice; // Temporarily holds the user's destination choice until the travel is confirmed.

    switch (*cLocation) {
        case 'M':
            travelOptionsM();
            break;
        case 'm':
            travelOptionsM();
            break;
        case 'S':
            travelOptionsS();
            break;
        case 's':
            travelOptionsS();
            break;
        case 'P':
            travelOptionsP();
            break;
        case 'p':
            travelOptionsP();
            break;
        case 'T':
            travelOptionsT();
            break;
        case 't':
            travelOptionsT();
            break;
    }

    printf("%66s%34s\n","Where would you like to travel?" , "");
    printf("%37s", "> ");
    scanf(" %c", &cTravelChoice);
    while ( cTravelChoice != 'M' && cTravelChoice != 'm' &&
            cTravelChoice != 'S' && cTravelChoice != 's' &&
            cTravelChoice != 'P' && cTravelChoice != 'p' &&
            cTravelChoice != 'T' && cTravelChoice != 't' &&
            cTravelChoice != 'X' && cTravelChoice != 'x') 
    {
        printf("\n");
        printf("%75s%35s\n","That is not a valid option. Please try again.", "");
         printf("%66s%34s\n","Where would you like to travel?" , "");
         printf("%37s", "> ");
         scanf(" %c", &cTravelChoice);
    }

    if (cTravelChoice != 'X' && cTravelChoice != 'x') {
        *cLocation = cTravelChoice;
        (*nDay)++;
        switch (*cLocation) {
            case 'M':
                goodsPriceManila(nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
                printf("%70s%30s\n", "You have successfully traveled to Manila.", "");
                break;
            case 'm':
                goodsPriceManila(nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
                printf("%70s%30s\n", "You have successfully traveled to Manila.","");
                break; 
            case 'S':
                goodsPriceSapa(nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
                printf("%70s%30s\n","You have successfully traveled to Sapa.", "");
                break;
            case 's':
                goodsPriceSapa(nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
                printf("%70s%30s\n", "You have successfully traveled to Sapa.", "");
                break;
            case 'P':
                goodsPricePandakan(nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
                printf("%70s%30s\n", "You have successfully traveled to Pandakan.", "");
                break;
            case 'p':
                goodsPricePandakan(nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
                printf("%70s%30s\n", "You have successfully traveled to Pandakan.", "");
                break;
            case 'T':
                goodsPriceTondo(nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
                printf("%70s%30s\n", "You have successfully traveled to Tondo.", "");
                break;
            case 't':
                goodsPriceTondo(nCocoPrice, nRicePrice, nSilkPrice, nGunPrice);
                printf("%70s%30s\n", "You have successfully traveled to Tondo.", "");
                break;
        }
    } else {
        printf("You have chosen to stay in the current port.\n");
    }
}