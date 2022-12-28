#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/Actor.h"
#include "Helper_01.generated.h"

USTRUCT(BlueprintType)
struct FCPP_Items_01 : public FTableRowBase {
	GENERATED_BODY()
	public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			int32 Damage;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			FString Title;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			UStaticMesh* Default_Object_01;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			UStaticMesh* Super_Object_01;

		//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//	UStaticMesh Super_Object_01; <--- not working, UStaticMesh must be pointer
};


UCLASS()
class DATAMANAGEMENT_01_API AHelper_01 : public AActor{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHelper_01();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// data tables
// https://www.youtube.com/watch?v=emhNwBAZ9k4
