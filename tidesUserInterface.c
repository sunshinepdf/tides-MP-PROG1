//Last Modified: 11/10/2024 10:29:41 PM
// Version: V2.0

/* 
    Changelog V1.0 \time 10/28/2024 11:04AM
    - Added the print64Line function to display a line with a character length of 64.
    - Added the welcomeScreen function to display a welcome message to the user.
    - Added the youWinScreen function to display a congratulatory message to the user.
    - Added the youLostScreen function to display a message to the user when they lose the game.
    
    Changelog V1.2 \time 10/28/2024 1:04PM
    - Added the mainHeader function to display the main menu header.  
    - Included internal documentation and function descriptions.

    Changelog V2.0 \time 11/10/2024 10:29:41 PM
    - Added the print46Line function to display a line with a character length of 46.
    - Added the printNavigationScreen function to display the main navigation screen.
    - Modified print64line function with new ASCII art.
    - Modified mainHeader function with new ASCII art and formatting.
    - Included changelogs.

    Changelog V2.1 \time 11/11/2024 10:50:09 PM
    - Added the printNavigationScreen function to display the main navigation screen.
    - Added the purchaseOptions function to display the purchase menu.
    - Added the printPurchaseScreen function to display the purchase screen.
    - Added the navigationAction function to handle the user's choice of action.
    
    Changelog V2.2 \time 11/13/2024 7:59:56 AM
    - Fixed the printPurchase function. 

    Changelog V3.0 \time 11/22/2024 12:36:51 AM
    - Added the travelOptionsM function to display the travel options from Manila.
    - Added the travelOptionsS function to display the travel options from Sapa.
    - Added the travelOptionsP function to display the travel options from Pandakan.
    - Added the travelOptionsT function to display the travel options from Tondo.
    - Added the buySellAction function to handle the user's choice of action.
    - Removed the purchaseOptions function.
    - Removed the tradeOptions function.
    - Added the CargoMarket function to display the current market prices of goods and the player's current cargo storage.
*/

#include "tidesLibrary.h"

/*
*  This function prints a line with a character length of 64 that separate sections 
*  of the User Interface's headers in order to maintain a neat navigation display.
*/
void 
printDashLine() 
{
 printf("----------------------------------------------------------------------------------------------------\n");
}

void 
printEqualLine() 
{
 printf("====================================================================================================\n");
}

/*
*  This function prints a series of formatted text to welcome the user to the 
*  game.
*/
void 
printWelcomeScreen()
{
    printDashLine();
    printf("\n");
    printf("%31s\n", "_~");
    printf("%34s%27s\n", "_~ )_)_~", "Welcome to");
    printf("%34s%41s\n", ")_))_))_)", "Tides of Manila : A Merchant Quest!");
    printf("%34s%28s\n", "_!__!__!_", "[ SET SAIL ]");
    printf("%34s\n", "\\______t/");
    printf("%80s\n", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n");
    printDashLine();
}
               
/*
*  This function prints a series of formatted text to congratulate the user for 
*  winning in the game.
*/
void 
printYouWinScreen() 
{
    printDashLine();
    printf("\n");
    printf("%55s\n", "o  o   o  o");
    printf("%31s%24s%19s\n", ". : .", "|\\/ \\^/ \\/|", ". : .");
    printf("%33s%22s%21s\n", "'.  :  .'", "|,-------.|", "'.  :  .'");
    printf("%31s%6s%22s%18s\n", ".  '.:.'", "__.__", "CONGRATULATIONS !", "__.__'.:.'  .");
    printf("%34s%21s%22s\n", ".  .':'.  .", "YOU WIN !", ".  .':'.  .");
    printf("%31s%43s\n", "' : '", "' : '");
    printf("\n");
    printDashLine();
}

                                    
/*
*  This function prints a series of formatted text to let the user know that
*  they have lost in the game.
*/
void
printYouLostScreen()
{
    printDashLine();
    printf("\n");
    printf("%54s\n", "_.--""--._");
    printf("%55s\n", "/ _    _ \\");
    printf("%59s\n", "_  ( (_\\  /_) )  _");
    printf("%60s\n", "{ \\._\\   /\\   /_./ }");
    printf("%60s\n", "/_\"=-.}______{.-=\"_\\");
    printf("%59s\n", "_  _.=(\"\"\"\")=._  _");
    printf("%60s\n", "(_\'\"_.-\"`~~`\"-._\"\'_)");
    printf("%59s\n", "{_\" GAME OVER \"_}");
    printf("%68s\n", "~@~~@~~@~~   YOU LOSE !  ~~@~~@~~@~");
    printf("\n");
    printDashLine();
}

/*
*  This function prints the main menu header from which the program displays the player's
*  Merchant Code, the current day, the total gold coins, the player's location, and
*  their progress on the amount of profit they have generated so far.
* 
*  Preconditions: nDay is initialized to zero. All integer variables are non-negative.
*
*  @param nMerchID - contains the player's merchant ID.
*  @param nGold - contains the current amount of Gold a player has.
*  @param nDay - contains the current day the player is in.
*  @param nCurrentP - contains the current profit the player has accumulated.
*  @param nTargetP - contains the target profit the player needs to reach.
*  @param nCargo - contains the amount of cargo the player is carrying.
*  @param cLocation - identifies the current port the player is in.
*/
void 
printMainHeader (int nMerchID, int nGold, int nDay, int nCurrentProfit, float fCurrentP, char cLocation)
{
  printf("\n");
  printf("\n");
  printDashLine();
  printf("%38s%21s%4s%37s\n", "+", "Merchant Dashboard", "+", " ");
  printEqualLine();
  printf("\n");
  printf("%16s%15s%03d%39s%13s%2d%11s\n", "+", "Merchant ID : ", nMerchID, "+", "Gold Coins :", nGold, "");
  switch (cLocation)
    {
      case 'M':
        printf("%28s%8s", "+ Location : ", PORT1);
        break;
      case 'm':
        printf("%28s%8s", "+ Location : ", PORT1);
        break;

      case 'S':
        printf("%28s%8s", "+ Location : ", PORT2);
        break;
      case 's':
        printf("%28s%8s", "+ Location : ", PORT2);
        break;

      case 'P':
        printf("%28s%8s", "+ Location : ", PORT3);
        break;
      case 'p':
        printf("%28s%8s", "+ Location : ", PORT3);
        break;

      case 'T':
        printf("%28s%8s", "+ Location : ", PORT4);
        break;
      case 't':
        printf("%28s%8s", "+ Location : ", PORT4);
        break;
    }
  printf("%37s%12s%2d/%.1f%%%14s\n", "+", "Profit    :", nCurrentProfit, fCurrentP,"");
  printf("%16s%5s%d%79s\n", "+", "Day ", nDay, "");
  printf("\n");
  printEqualLine();
  printf("\n");
} 

/*
*  This function prints the current market prices of goods in the current port and.
*  the amount of cargo the player is carrying.
*
*  Preconditions: nCargo, nCocoCargo, nRiceCargo, nSilkCargo, nGunCargo, 
*                 nCocoPrice, nRicePrice, nSilkPrice, nGunPrice are non-negative integers.
*
*  @param nCargo - contains the total amount of cargo the player is carrying.
*  @param nCocoCargo - contains the amount of coconuts the player is carrying.
*  @param nRiceCargo - contains the amount of rice the player is carrying.
*  @param nSilkCargo - contains the amount of silk the player is carrying.
*  @param nGunCargo - contains the amount of guns the player is carrying.
*  @param nCocoPrice - contains the current price of coconuts in the market.
*  @param nRicePrice - contains the current price of rice in the market.
*  @param nSilkPrice - contains the current price of silk in the market.
*  @param nGunPrice - contains the current price of guns in the market.
*/
void 
printCargoMarket ( int nCargo, int nCocoCargo, int nRiceCargo, int nSilkCargo, int nGunCargo, 
                   int nCocoPrice, int nRicePrice, int nSilkPrice, int nGunPrice)
{
  printf("\n");
  printf("%36s%55s%9s\n", "+-------------------------+", "+-------------------------+", " ");
  printf("%17s%8s%2d%6s%52s%15s\n", "Cargo", "", nCargo, "of 75", "Market   Prices", "");
  printf("%36s%55s%9s\n", "+-------------------------+", "+-------------------------+", " ");
  printf("%21s%2d%9s%2d%41s%2d%9s%2d%12s\n", "Coconut -", nCocoCargo, "Rice -", nRiceCargo, "Coconut -", nCocoPrice, "Rice -", nRicePrice, "");
  printf("\n");
  printf("%21s%2d%9s%2d%41s%2d%9s%2d%12s\n", "Silk    -", nSilkCargo, "Guns -", nGunCargo, "Silk    -", nSilkPrice, "Guns -", nGunPrice, "");
  printf("%36s%55s%9s\n", "+-------------------------+", "+-------------------------+", " ");
  printf("\n");
  printEqualLine();
  printDashLine();
  printf("\n");
  printf("\n");
}

/*
*  This function prints the main navigation screen from which the player 
*  is presented with four possible actions: buying goods, selling goods, 
*  moving to another port, or quitting the game.
*
*  Preconditions: None.
*/
void 
printNavigationScreen () {
  printf("%58s%42s\n", "+ Action  Menu +", "");
  printf("\n");	
  printf("%65s%35s\n", "------------------------------", "");
  printf("\n");
  printf("%55s%45s\n", "[1]  BUY GOODS", "");
  printf("%56s%44s\n ", "[2]  SELL GOODS","");
  printf("%51s%49s\n ","[3]  TRAVEL","");
  printf("\n");
  printf("%50s%50s\n ","[4]  QUIT","");
  printf("\n");
  printf("%65s%35s\n", "------------------------------", "");
  printf("\n");
}

/*
*  This function prints the purchase screen from which the player 
*  is presented with five possible actions: buying coconuts, buying rice, 
*  buying silk, buying guns, or returning to the main menu.
*
*  Preconditions: None.
*/
void
purchaseOptions(){
  printf("%60s%40s\n", "+ Purchase  Menu +", "");
  printf("\n");	
  printf("%65s%35s\n", "------------------------------", "");
  printf("\n");
  printf("%59s%41s\n", "[1]  BUY COCONUTS", "");
  printf("%55s%45s\n ", "[2]  BUY RICE","");
  printf("%54s%46s\n ","[3]  BUY SILK","");
  printf("%54s%46s\n ","[4]  BUY GUNS","");
  printf("\n");
  printf("%61s%39s\n ","[5]  RETURN TO MENU","");
  printf("\n");
  printf("%65s%35s\n", "------------------------------", "");
  printf("\n");
}

/*
*  This function prints the trading screen from which the player
*  is presented with five possible actions: selling coconuts, selling rice,
*  selling silk, selling guns, or returning to the main menu.
*
*  Preconditions: None.
*/
void
tradeOptions(){
  printf("%59s%41s\n", "+ Trading  Menu +", "");
  printf("\n");	
  printf("%65s%35s\n", "------------------------------", "");
  printf("\n");
  printf("%60s%40s\n", "[1]  SELL COCONUTS", "");
  printf("%56s%44s\n ", "[2]  SELL RICE","");
  printf("%55s%45s\n ","[3]  SELL SILK","");
  printf("%55s%45s\n ","[4]  SELL GUNS","");
  printf("\n");
  printf("%61s%39s\n ","[5]  RETURN TO MENU","");
  printf("\n");
  printf("%65s%35s\n", "------------------------------", "");
  printf("\n");
}

/*
*  This function prints the travel screen for Port Manila from which the player
*  is presented with four possible actions: moving to Port Sapa, moving to Port Pandakan,
*   moving to Port Tondo, or returning to the main menu.
*
*  Preconditions: None.
*/
void
travelOptionsM() {
    printf("%58s%42s\n", "+ Travel  Menu +", "");
    printf("\n");    
    printf("%65s%35s\n", "------------------------------", "");
    printf("\n");
    printf("%55s%45s\n", "[S]  PORT SAPA", "");
    printf("%59s%42s\n ", "[P]  PORT PANDAKAN", "");
    printf("%55s%46s\n ","[T]  PORT TONDO", "");
    printf("\n");
    printf("%60s%40s\n ","[X]  RETURN TO MENU", "");
    printf("\n");
    printf("%65s%35s\n", "------------------------------", "");
    printf("\n");
}

/*
*  This function prints the travel screen for Port Sapa from which the player
*  is presented with four possible actions: moving to Port Manila, moving to Port Pandakan,
*   moving to Port Tondo, or returning to the main menu.
*
*  Preconditions: None.
*/
void
travelOptionsS() {
    printf("%58s%42s\n", "+ Travel  Menu +", "");
    printf("\n");    
    printf("%65s%35s\n", "------------------------------", "");
    printf("\n");
    printf("%57s%43s\n", "[M]  PORT MANILA", "");
    printf("%59s%42s\n ", "[P]  PORT PANDAKAN", "");
    printf("%55s%46s\n ","[T]  PORT TONDO", "");
    printf("\n");
    printf("%60s%40s\n ","[X]  RETURN TO MENU", "");
    printf("\n");
    printf("%65s%35s\n", "------------------------------", "");
    printf("\n");
}

/*
*  This function prints the travel screen for Port Pandakan from which the player
*  is presented with four possible actions: moving to Port Manila, moving to Port Sapa,
*   moving to Port Tondo, or returning to the main menu.
*
*  Preconditions: None.
*/
void
travelOptionsP() {
    printf("%58s%42s\n", "+ Travel  Menu +", "");
    printf("\n");    
    printf("%65s%35s\n", "------------------------------", "");
    printf("\n");
    printf("%57s%43s\n", "[M]  PORT MANILA", "");
    printf("%55s%45s\n", "[S]  PORT SAPA", "");
    printf("%56s%44s\n ","[T]  PORT TONDO", "");
    printf("\n");
    printf("%60s%40s\n ","[X]  RETURN TO MENU", "");
    printf("\n");
    printf("%65s%35s\n", "------------------------------", "");
    printf("\n");
}

/*
* This function prints the travel screen for Port Tondo from which the player
* is presented with four possible actions: moving to Port Manila, moving to Port Sapa,
* moving to Port Pandakan, or returning to the main menu.
*
*  Preconditions: None.
*/
void
travelOptionsT() {
    printf("%58s%42s\n", "+ Travel  Menu +", "");
    printf("\n");    
    printf("%65s%35s\n", "------------------------------", "");
    printf("\n");
    printf("%57s%43s\n", "[M]  PORT MANILA", "");
    printf("%55s%45s\n", "[S]  PORT SAPA", "");
    printf("%59s%42s\n ", "[P]  PORT PANDAKAN", "");
    printf("\n");
    printf("%60s%40s\n ","[X]  RETURN TO MENU", "");
    printf("\n");
    printf("%65s%35s\n", "------------------------------", "");
    printf("\n");
}

/*
*  This function handles the user's choice of action in the main navigation screen.
*  The function will loop until a valid choice (integer between 1 and 4) is inputted.
*  If the choice is valid, the function will store the choice in the nChoice variable.
*
*  Preconditions: nChoice is an integer between 1 and 4.
* 
*  @param nChoice - stores the user's choice of action.
*/
void
navigationAction (int *nChoice){
  printf("\n");
  printf("%64s%36s\n", "What would you like to do? ", "");
  printf("%39s", "> ");
  scanf("%d", nChoice);
      while (*nChoice < 1 || *nChoice > 4)
      {
          printf("\n");
          printf("That action is not possible. Please try again.\n");
          printf("%64s%36s\n", "What would you like to do? ", "");
          printf("%39s", "> ");
          scanf("%d", nChoice);
      }
}


/*
*  This function handles the user's choice of action in the purchase and trading screen.
*  The function will loop until a valid choice (integer between 1 and 5) is inputted.
*  If the choice is valid, the function will store the choice in the nChoice variable.
*
*  Preconditions: nChoice is an integer between 1 and 5.
*
*  @param nChoice - stores the user's choice of action.
*/
void
buysellAction (int *nChoice)
{
  printf("\n");
  printf("%64s%36s\n", "What would you like to do? ", "");
  printf("%39s", "> ");
  scanf(" %d", nChoice);
      while (*nChoice < 1 || *nChoice > 5)
      {
          printf("\n");
          printf("That action is not possible. Please try again.\n");
          printf("%64s%36s\n", "What would you like to do? ", "");
          printf("%39s", "> ");
          scanf(" %d", nChoice);
      }
}
