// Snake Game, Copyright LifeEXE

#if WITH_AUTOMATION_TESTS

#include "CoreMinimal.h"
#include "Core/Game.h"
#include "Core/Types.h"
#include "Misc/AutomationTest.h"

DEFINE_SPEC(FSnakeGame, "Snake",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority)

void FSnakeGame::Define()
{
    using namespace Snake;

    Describe("CoreGame", [this]()
    {
        It("GridShouldExists", [this]()
        {
            const Settings GS{10, 10};
            const auto CoreGame = Game(GS);
            TestTrueExpr(CoreGame.grid().IsValid());
        });
    });
}

#endif
