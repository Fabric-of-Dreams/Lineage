// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LoginWidget.generated.h"

/**
 * 
 */
UCLASS()
class LINEAGE_API ULoginWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual bool Initialize();
	
private:
	UPROPERTY(meta = (BindWidget))
		class UButton* LogInBtn;

	UFUNCTION()
		void LogIn();
};
