#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define CARGO_MAX 75

#define PORT1 "Manila"
#define PORT2 "Sapa"
#define PORT3 "Pandakan"
#define PORT4 "Tondo"

#define COCONUTMNL_MIN  3
#define COCONUTMNL_MAX  18
#define RICEMNL_MIN  5
#define RICEMNL_MAX  20
#define SILKMNL_MIN  24
#define SILKMNL_MAX  39
#define GUNMNL_MIN  65
#define GUNMNL_MAX  84

#define COCONUTSAPA_MIN  9
#define COCONUTSAPA_MAX  14
#define RICESAPA_MIN  1
#define RICESAPA_MAX  6
#define SILKSAPA_MIN  17
#define SILKSAPA_MAX  22
#define GUNSAPA_MIN  204
#define GUNSAPA_MAX  301

#define COCONUTPDK_MIN  2
#define COCONUTPDK_MAX  12
#define RICEPDK_MIN  4
#define RICEPDK_MAX  14
#define SILKPDK_MIN  22
#define SILKPDK_MAX  32
#define GUNPDK_MIN  90
#define GUNPDK_MAX  103

#define COCONUTTONDO_MIN  4
#define COCONUTTONDO_MAX  24
#define RICETONDO_MIN  1
#define RICETONDO_MAX  20
#define SILKTONDO_MIN  48
#define SILKTONDO_MAX  68
#define GUNTONDO_MIN  70
#define GUNTONDO_MAX  95

// tidesUserInterface.c
void printWelcomeScreen();
void printYouWinScreen();
void printYouLostScreen();
void printMainHeader (int nMerchID, int nGold, int nDay, int nCurrentProfit, float fCurrentP, char cLocation);
void printCargoMarket (int nCargo, int nCocoCargo, int nRiceCargo, int nSilkCargo, int nGunCargo, int nCocoPrice, int nRicePrice, int nSilkPrice, int nGunPrice);
void printNavigationScreen ();
void navigationAction (int *nChoice);
void buysellAction (int *nChoice);
void purchaseOptions ();
void tradeOptions ();
void travelOptionsM();
void travelOptionsS();
void travelOptionsP();
void travelOptionsT();


//tidesBackend.c
void priceRandomizer (int nMin, int nMax, int *nPrice);
void goodsPriceManila (int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice);
void goodsPriceSapa (int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice);
void goodsPricePandakan (int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice);
void goodsPriceTondo(int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice);
void printGoodsForSale (int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice, char *cLocation, int *nChoice); 
void purchaseMechanic (int nCocoPrice, int nRicePrice, int nSilkPrice, int nGunPrice, int nChoice, char *cLocation, int *nGold, int *nCargo, int *nCocoCargo, int *nRiceCargo, int *nSilkCargo, int *nGunCargo, int *nCocoBuyingPrice, int *nRiceBuyingPrice, int *nSilkBuyingPrice, int *nGunBuyingPrice, int nInitialCapital, int nTargetProfit, int *nCurrentProfit, float *fCurrentP);
void printTradeRates (int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice, char *cLocation, int *nChoice);
void tradingMechanic(int nCocoPrice, int nRicePrice, int nSilkPrice, int nGunPrice, int nChoice, char *cLocation, int *nGold, int *nCargo, int *nCocoCargo, int *nRiceCargo, int *nSilkCargo, int *nGunCargo, int nCocoBuyingPrice, int nRiceBuyingPrice, int nSilkBuyingPrice, int nGunBuyingPrice, int nInitialCapital, int nTargetProfit, int *nCurrentProfit, float *fCurrentP);
void travelMechanic(char *cLocation, int *nDay, int *nCocoPrice, int *nRicePrice, int *nSilkPrice, int *nGunPrice);


//tidesPlayerData.c
int getMerchantCode(int *nMerchID);
int getInitialCapital(int *nGold);
int getTargetProfitPercentage(int *nTargetP);
