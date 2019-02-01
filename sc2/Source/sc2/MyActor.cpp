// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// setting up deep feedback learning
	fcl = new FeedforwardClosedloopLearning(
		nInputs,
		nNeuronsInHiddenLayers,
		nHiddenLayers,
		nOutputs,
		nFiltersInput,
		nFiltersHidden,
		minT,
		maxT);
	
	fcl->initWeights(1,0,Neuron::MAX_OUTPUT_RANDOM);
	fcl->setLearningRate(learningRate);
	fcl->setLearningRateDiscountFactor(1);
	fcl->setBias(1);
	fcl->setUseDerivative(0);
	fcl->setActivationFunction(Neuron::TANH);
	fcl->setMomentum(0.9);


}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

