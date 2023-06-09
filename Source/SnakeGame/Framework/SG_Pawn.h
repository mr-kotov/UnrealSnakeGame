// Snake Game, Copyright LifeEXE

#pragma once

#include "CoreMinimal.h"
#include "Core/Types.h"
#include "GameFramework/Pawn.h"
#include "SG_Pawn.generated.h"

class UCameraComponent;
UCLASS()
class SNAKEGAME_API ASG_Pawn : public APawn
{
    GENERATED_BODY()

public:
    ASG_Pawn();

    /**
     * Updates pawn height fitting grid in viewport
     * @param Dim grid dimensions
     * @param CellSize world size of the cell
     * @param GridOrigin world tranformation of the grid
     */
    void UpdateLocation(const Snake::Dim& InDim, int32 InCellSize, const FTransform& InGridOrigin);

protected:
    UPROPERTY(VisibleAnywhere)
    USceneComponent* Origin;

    UPROPERTY(VisibleAnywhere)
    UCameraComponent* Camera;

private:
    Snake::Dim Dim;
    int32 CellSize;
    FTransform GridOrigin;

    void OnViewportResized(FViewport* Viewport, uint32 Val);
};
