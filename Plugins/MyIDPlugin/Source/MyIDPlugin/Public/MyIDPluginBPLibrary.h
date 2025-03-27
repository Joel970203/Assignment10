#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyIDPluginBPLibrary.generated.h"

UCLASS()
class UMyIDPluginBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_UCLASS_BODY()

    // 사용자 이름 저장
    UFUNCTION(BlueprintCallable, Category = "MyIDPlugin")
    static void SetUserName(const FString& NewName);

    // 사용자 이름 불러오기
    UFUNCTION(BlueprintPure, Category = "MyIDPlugin")
    static FString GetUserName();

private:
    static FString UserName;
};
