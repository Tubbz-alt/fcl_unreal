// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "fcl.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class SC2_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FeedforwardClosedloopLearning* fcl = NULL;

        int nInputs = 30;
        // We have one output neuron
        int nOutputs = 6;
        // We have two hidden layers
        int nHiddenLayers = 2;
        // We set two neurons in the first hidden layer
        int nNeuronsInHiddenLayers[6] = {9,6,6,6,6,6};
        // We set nFilters in the input
        int nFiltersInput = 10;
        // We set nFilters in the hidden unit
        int nFiltersHidden = 0;
        // Filterbank
        double minT = 2;
        double maxT = 30;

        double learningRate = 0.0001;
        
};
