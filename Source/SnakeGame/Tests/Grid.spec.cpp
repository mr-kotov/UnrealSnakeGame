// Snake Game, Copyright LifeEXE

#if WITH_AUTOMATION_TESTS

#include "CoreMinimal.h"
#include "Core/Grid.h"
#include "Misc/AutomationTest.h"

DEFINE_SPEC(FSnakeGrid, "Snake",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority)

void FSnakeGrid::Define()
{
    using namespace Snake;
    
    Describe("CoreGrid", [this]()
    {
        It("DimsMightIncludeWalls", [this]()
        {
            Grid grid(Dim{10, 10});
            TestTrueExpr(grid.dim().height == 12);
            TestTrueExpr(grid.dim().width == 12);
        });
    });
}

#endif
