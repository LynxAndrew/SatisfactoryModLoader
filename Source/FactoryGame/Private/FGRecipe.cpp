// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRecipe.h"

#if WITH_EDITOR
void UFGRecipe::SetProduct( TSubclassOf< UFGRecipe > recipe, TArray< FItemAmount > product){ }
#endif 
UFGRecipe::UFGRecipe(){ }
FText UFGRecipe::GetRecipeName( TSubclassOf< UFGRecipe > inClass){ return FText(); }
TArray< FItemAmount > UFGRecipe::GetIngredients( TSubclassOf< UFGRecipe > inClass){ return TArray<FItemAmount>(); }
TArray< FItemAmount > UFGRecipe::GetProducts( TSubclassOf< UFGRecipe > inClass, bool allowChildRecipes ){ return TArray<FItemAmount>(); }
float UFGRecipe::GetManufacturingDuration( TSubclassOf< UFGRecipe > inClass){ return float(); }
float UFGRecipe::GetManualManufacturingDuration( TSubclassOf< UFGRecipe > inClass){ return float(); }
TArray< TSubclassOf< UObject > > UFGRecipe::GetProducedIn( TSubclassOf< UFGRecipe > inClass){ return TArray<TSubclassOf<UObject> >(); }
bool UFGRecipe::IsRecipeAffordable(  AFGCharacterPlayer* player, TSubclassOf<  UFGRecipe > recipe){ return bool(); }
void UFGRecipe::SortByName( UPARAM(ref) TArray< TSubclassOf< UFGRecipe > >& recipes){ }
TSubclassOf< class UFGItemDescriptor > UFGRecipe::GetDescriptorForRecipe( TSubclassOf<  UFGRecipe > recipe){ return TSubclassOf<class UFGItemDescriptor>(); }
FText UFGRecipe::GetDisplayName() const{ return FText(); }
void UFGRecipe::GetProducedIn( TArray< TSubclassOf< UObject > >& out_producedIn) const{ }
EHologramSplinePathMode UFGRecipe::GetLastSplineMode(){ return EHologramSplinePathMode(); }
void UFGRecipe::SetLastSplineMode( EHologramSplinePathMode mode){ }