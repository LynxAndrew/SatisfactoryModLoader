// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGJetPack.h"
#include "Equipment/FGEquipment.h"

AFGJetPack::AFGJetPack() : Super() {
	this->mJumpTimeStamp = -1.0;
	this->mIsThrusting = false;
	this->mActiveNoise = nullptr;
	this->mActiveNoiseFrequency = 0.2;
	this->mEquipmentSlot = EEquipmentSlot::ES_BACK;
	this->mBackAnimation = EBackEquipment::BE_Jetpack;
}
void AFGJetPack::Tick(float DeltaSeconds){ }
bool AFGJetPack::ShouldSaveState() const{ return bool(); }
void AFGJetPack::DisableEquipment(){ }
void AFGJetPack::SetIsThrusting(bool newIsThrusting){ }
void AFGJetPack::Equip( AFGCharacterPlayer* character){ }
void AFGJetPack::UnEquip(){ }
void AFGJetPack::JetPackThrust(){ }
void AFGJetPack::JetPackStopThrust(){ }
float AFGJetPack::GetCurrentFuel_Implementation() const{ return float(); }
float AFGJetPack::GetMaxFuel_Implementation(){ return float(); }
void AFGJetPack::AddEquipmentActionBindings(){ }
void AFGJetPack::MakeActiveNoise(){ }
void AFGJetPackAttachment::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGJetPackAttachment, mIsThrusting);
}
void AFGJetPackAttachment::OnRep_IsThrusting(){ }
void AFGJetPackAttachment::SetIsThrusting(bool newIsThrusting){ }
