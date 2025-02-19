// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGWireHologram.h"

AFGWireHologram::AFGWireHologram() : Super() {
	this->mConnections[0] = nullptr;
	this->mConnections[1] = nullptr;
	this->mPowerPole = nullptr;
	this->mPowerPoleWall = nullptr;
	this->mDefaultPowerPoleRecipe = nullptr;
	this->mCircuitType = nullptr;
	this->mDefaultPowerPoleWallRecipe = nullptr;
	this->mStartLocation = FVector::ZeroVector;
	this->mCurrentConnection = 0;
	this->mWireMesh = nullptr;
	this->mUpgradeTarget = nullptr;
	this->mNeedsValidFloor = false;
	this->mUseBuildClearanceOverlapSnapp = false;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = true;
	this->PrimaryActorTick.bStartWithTickEnabled = true;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
void AFGWireHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGWireHologram, mPowerPole);
	DOREPLIFETIME(AFGWireHologram, mPowerPoleWall);
	DOREPLIFETIME(AFGWireHologram, mStartLocation);
}
void AFGWireHologram::BeginPlay(){ }
void AFGWireHologram::Tick(float dt){ }
AActor* AFGWireHologram::Construct(TArray< AActor* >& out_children, FNetConstructionID netConstructionID){ return nullptr; }
int32 AFGWireHologram::GetBaseCostMultiplier() const{ return int32(); }
bool AFGWireHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGWireHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGWireHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGWireHologram::OnInvalidHitResult(){ }
void AFGWireHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ }
void AFGWireHologram::ScrollRotate(int32 delta, int32 step){ }
AActor* AFGWireHologram::GetUpgradedActor() const{ return nullptr; }
bool AFGWireHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
void AFGWireHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGWireHologram::SetConnection(int32 ix, UFGCircuitConnectionComponent* connection){ }
void AFGWireHologram::Destroyed(){ }
void AFGWireHologram::CheckValidPlacement(){ }
void AFGWireHologram::CheckClearance(const FVector& locationOffset){ }
uint8 AFGWireHologram::GetStencilForHologramMaterialState(EHologramMaterialState state) const{ return uint8(); }
void AFGWireHologram::CheckValidSnap(){ }
void AFGWireHologram::CheckLength(){ }
void AFGWireHologram::SetActiveAutomaticPoleHologram( AFGPowerPoleHologram* poleHologram){ }
UFGCircuitConnectionComponent* AFGWireHologram::FindOverlappingCircuitConnectionComponent(const FVector& location,
		 AActor* actor,
		 UFGCircuitConnectionComponent* ignoredConnectionComponent,
		TSubclassOf<  UFGCircuit > compatibleCircuitType){ return nullptr; }
void AFGWireHologram::StartLookAtBuilding(UFGCircuitConnectionComponent* overlappingComponent){ }
void AFGWireHologram::StopLookAtBuilding(){ }
void AFGWireHologram::StartLookAtTooManyConnectionsBuilding(UFGCircuitConnectionComponent* overlappingConnection){ }
float AFGWireHologram::GetLength() const{ return float(); }
void AFGWireHologram::SetUpgradeTarget(AFGBuildableWire* target){ }
